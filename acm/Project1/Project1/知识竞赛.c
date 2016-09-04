#include "stdafx.h"
#include "resource.h" 


LRESULT CALLBACKAbout(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
HBITMAP WINAPIcopyScreenToBitmap(LPRECT lpRect);
BOOL WINAPIsaveBitmapToFile(HBITMAP hBitmap, LPSTR lpFileName);


int APIENTRY WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	DialogBox(hInstance, (LPCTSTR)IDD_ABOUTBOX, NULL, (DLGPROC)About);

	return 0;
}

LRESULT CALLBACK About(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	RECTrc;

	switch (uMsg)
	{
	case WM_INITDIALOG:
		return TRUE;

	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case IDOK:
			GetWindowRect(hwnd, &rc);
			saveBitmapToFile(copyScreenToBitmap(&rc), "D:\\1.bmp");
			EndDialog(hwnd, LOWORD(wParam));
			break;

		case IDCANCEL:
			EndDialog(hwnd, LOWORD(wParam));
			break;
		}
		return TRUE;
	}

	return FALSE;
}

HBITMAP WINAPI copyScreenToBitmap(LPRECT lpRect)// lpRect 代表选定区域
{
	HDChScrDC, hMemDC;// 屏幕和内存设备描述表
	HBITMAPhBitmap, hOldBitmap;// 位图句柄
	intnX, nY, nX2, nY2;// 选定区域坐标
	intnWidth, nHeight;// 位图宽度和高度
	intxScrn, yScrn;// 屏幕分辨率 

	// 确保选定区域不为空矩形
	if (IsRectEmpty(lpRect))return NULL;

	// 为屏幕创建设备描述表
	hScrDC = CreateDC("DISPLAY", NULL, NULL, NULL);

	// 为屏幕设备描述表创建兼容的内存设备描述表
	hMemDC = CreateCompatibleDC(hScrDC);

	// 获得选定区域坐标
	nX = lpRect->left;
	nY = lpRect->top;
	nX2 = lpRect->right;
	nY2 = lpRect->bottom;

	// 获得屏幕分辨率
	xScrn = GetDeviceCaps(hScrDC, HORZRES);
	yScrn = GetDeviceCaps(hScrDC, VERTRES);

	// 确保选定区域是可见的
	if (nX < 0)nX = 0;
	if (nY < 0)nY = 0;
	if (nX2 > xScrn)nX2 = xScrn;
	if (nY2 > yScrn)nY2 = yScrn;

	nWidth = nX2 - nX;
	nHeight = nY2 - nY;

	// 创建一个与屏幕设备描述表兼容的位图
	hBitmap = CreateCompatibleBitmap(hScrDC, nWidth, nHeight);

	// 把新位图选到内存设备描述表中
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hBitmap);

	// 把屏幕设备描述表拷贝到内存设备描述表中
	BitBlt(hMemDC, 0, 0, nWidth, nHeight, hScrDC, nX, nY, SRCCOPY);

	// 得到屏幕位图的句柄
	hBitmap = (HBITMAP)SelectObject(hMemDC, hOldBitmap);

	// 清除
	DeleteDC(hScrDC);
	DeleteDC(hMemDC);

	// 返回位图句柄
	return hBitmap;
}

BOOL WINAPI saveBitmapToFile(HBITMAP hBitmap,// hBitmap 为刚才的屏幕位图句柄
	LPSTR lpFileName)// lpFileName 为位图文件名
{
	HDChDC;// 设备描述表
	intiBits;// 当前显示分辨率下每个像素所占字节数
	WORDwBitCount;// 位图中每个像素所占字节数
	DWORDdwPaletteSize = 0,// 定义调色板大小
		dwBmBitsSize,// 位图中像素字节大小
		dwDIBSize,// 位图文件大小
		dwWritten;// 写入文件字节数
	BITMAPBitmap;// 位图属性结构
	BITMAPFILEHEADERbmfHdr;// 位图文件头结构
	BITMAPINFOHEADERbi;// 位图信息头结构
	LPBITMAPINFOHEADERlpbi;// 指向位图信息头结构
	HANDLEfh,// 定义文件
		hDib,// 分配内存句柄
		hPal;// 调色板句柄
	HPALETTEhOldPal = NULL;

	// 计算位图文件每个像素所占字节数
	hDC = CreateDC("DISPLAY", NULL, NULL, NULL);
	iBits = GetDeviceCaps(hDC, BITSPIXEL) * GetDeviceCaps(hDC, PLANES);
	DeleteDC(hDC);

	if (iBits <= 1)wBitCount = 1;
	else if (iBits <= 4)wBitCount = 4;
	else if (iBits <= 8)wBitCount = 8;
	else if (iBits <= 24)wBitCount = 24;
	else wBitCount = 24;

	// 计算调色板大小
	if (wBitCount <= 8)dwPaletteSize = (1 << wBitCount) * sizeof(RGBQUAD);

	// 设置位图信息头结构
	GetObject(hBitmap, sizeof(BITMAP), (LPSTR)&Bitmap);

	bi.biSize = sizeof(BITMAPINFOHEADER);
	bi.biWidth = Bitmap.bmWidth;
	bi.biHeight = Bitmap.bmHeight;
	bi.biPlanes = 1;
	bi.biBitCount = wBitCount;
	bi.biCompression = BI_RGB;
	bi.biSizeImage = 0;
	bi.biXPelsPerMeter = 0;
	bi.biYPelsPerMeter = 0;
	bi.biClrUsed = 0;
	bi.biClrImportant = 0;

	dwBmBitsSize = ((Bitmap.bmWidth * wBitCount + 31) / 32) * 4 * Bitmap.bmHeight;

	// 为位图内容分配内存
	hDib = GlobalAlloc(GHND, dwBmBitsSize + dwPaletteSize + sizeof(BITMAPINFOHEADER));
	lpbi = (LPBITMAPINFOHEADER)GlobalLock(hDib);
	*lpbi = bi;

	// 处理调色板
	hPal = GetStockObject(DEFAULT_PALETTE);
	if (hPal)
	{
		hDC = GetDC(NULL);
		hOldPal = SelectPalette(hDC, (HPALETTE)hPal, FALSE);
		RealizePalette(hDC);
	}

	// 获取该调色板下新的像素值
	GetDIBits(hDC, hBitmap, 0, (UINT)Bitmap.bmHeight, (LPSTR)lpbi + sizeof(BITMAPINFOHEADER)+dwPaletteSize, (BITMAPINFO*)lpbi, DIB_RGB_COLORS);

	// 恢复调色板
	if (hOldPal)
	{
		SelectPalette(hDC, hOldPal, TRUE);
		RealizePalette(hDC);
		ReleaseDC(NULL, hDC);
	}

	// 创建位图文件
	fh = CreateFile(lpFileName, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, NULL);
	if (fh == INVALID_HANDLE_VALUE)return FALSE;

	// 设置位图文件头
	bmfHdr.bfType = 0x4D42;// "BM"
	dwDIBSize = sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER)+dwPaletteSize + dwBmBitsSize;
	bmfHdr.bfSize = dwDIBSize;
	bmfHdr.bfReserved1 = 0;
	bmfHdr.bfReserved2 = 0;
	bmfHdr.bfOffBits = (DWORD)sizeof(BITMAPFILEHEADER)+(DWORD)sizeof(BITMAPINFOHEADER)+dwPaletteSize;

	// 写入位图文件头
	WriteFile(fh, (LPSTR)&bmfHdr, sizeof(BITMAPFILEHEADER), &dwWritten, NULL);

	// 写入位图文件其余内容
	WriteFile(fh, (LPSTR)lpbi, dwDIBSize, &dwWritten, NULL);

	// 清除
	GlobalUnlock(hDib);
	GlobalFree(hDib);
	CloseHandle(fh);

	return TRUE;
}
/////////////////////////////////////////////////////////////////////////////////////////////
CPaintDC dc(this);
CDC cdcMem;
CBitmap m_bitmap;
cdcMem.CreateCompatibleDC(&dc);
m_bitmap.CreateCompatibleBitmap(&cdcMem, 100, 100);
cdcMem.SelectObject(&m_bitmap);
cdcMem.LineXY(100, 100);

在上面代码中，象访问数组一样访问cdcMem的内存块，并取得象素的数据，该如何操作？
//////////////////////////////////////////////////////
// 获取位图信息大小
BITMAPINFO bmpInfo;
ZeroMemory(&bmpInfo, sizeof(BITMAPINFO));
bmpInfo.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
int nRet = GetDIBits(dc.m_hDC, m_bitmap, 0, 0, NULL, &bmpInfo, DIB_RGB_COLORS);
if (nRet == 0)
{
	return;
}
if (bmpInfo.bmiHeader.biSizeImage <= 0)
{
	bmpInfo.bmiHeader.biSizeImage = bmpInfo.bmiHeader.biWidth * abs(bmpInfo.bmiHeader.biHeight) * (bmpInfo.bmiHeader.biBitCount + 7) / 8;
}

// 开辟位图数据占用的空间
LPVOID lpvBits = malloc(bmpInfo.bmiHeader.biSizeImage);
if (lpvBits == NULL)
{
	return;
}

// 获取位图数据信息
bmpInfo.bmiHeader.biCompression = BI_RGB;
nRet = GetDIBits(hDC, hBitmap, 0, bmpInfo.bmiHeader.biHeight, lpvBits, &bmpInfo, DIB_RGB_COLORS);
if (nRet == 0)
{
	return;
}
// 对位图信息lpvBits的操作。。。。。
// ......
// 释放开辟的空间
free(lpvBits);
lpvBits = NULL;
