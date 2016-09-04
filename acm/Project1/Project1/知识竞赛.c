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

HBITMAP WINAPI copyScreenToBitmap(LPRECT lpRect)// lpRect ����ѡ������
{
	HDChScrDC, hMemDC;// ��Ļ���ڴ��豸������
	HBITMAPhBitmap, hOldBitmap;// λͼ���
	intnX, nY, nX2, nY2;// ѡ����������
	intnWidth, nHeight;// λͼ��Ⱥ͸߶�
	intxScrn, yScrn;// ��Ļ�ֱ��� 

	// ȷ��ѡ������Ϊ�վ���
	if (IsRectEmpty(lpRect))return NULL;

	// Ϊ��Ļ�����豸������
	hScrDC = CreateDC("DISPLAY", NULL, NULL, NULL);

	// Ϊ��Ļ�豸�����������ݵ��ڴ��豸������
	hMemDC = CreateCompatibleDC(hScrDC);

	// ���ѡ����������
	nX = lpRect->left;
	nY = lpRect->top;
	nX2 = lpRect->right;
	nY2 = lpRect->bottom;

	// �����Ļ�ֱ���
	xScrn = GetDeviceCaps(hScrDC, HORZRES);
	yScrn = GetDeviceCaps(hScrDC, VERTRES);

	// ȷ��ѡ�������ǿɼ���
	if (nX < 0)nX = 0;
	if (nY < 0)nY = 0;
	if (nX2 > xScrn)nX2 = xScrn;
	if (nY2 > yScrn)nY2 = yScrn;

	nWidth = nX2 - nX;
	nHeight = nY2 - nY;

	// ����һ������Ļ�豸��������ݵ�λͼ
	hBitmap = CreateCompatibleBitmap(hScrDC, nWidth, nHeight);

	// ����λͼѡ���ڴ��豸��������
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hBitmap);

	// ����Ļ�豸�����������ڴ��豸��������
	BitBlt(hMemDC, 0, 0, nWidth, nHeight, hScrDC, nX, nY, SRCCOPY);

	// �õ���Ļλͼ�ľ��
	hBitmap = (HBITMAP)SelectObject(hMemDC, hOldBitmap);

	// ���
	DeleteDC(hScrDC);
	DeleteDC(hMemDC);

	// ����λͼ���
	return hBitmap;
}

BOOL WINAPI saveBitmapToFile(HBITMAP hBitmap,// hBitmap Ϊ�ղŵ���Ļλͼ���
	LPSTR lpFileName)// lpFileName Ϊλͼ�ļ���
{
	HDChDC;// �豸������
	intiBits;// ��ǰ��ʾ�ֱ�����ÿ��������ռ�ֽ���
	WORDwBitCount;// λͼ��ÿ��������ռ�ֽ���
	DWORDdwPaletteSize = 0,// �����ɫ���С
		dwBmBitsSize,// λͼ�������ֽڴ�С
		dwDIBSize,// λͼ�ļ���С
		dwWritten;// д���ļ��ֽ���
	BITMAPBitmap;// λͼ���Խṹ
	BITMAPFILEHEADERbmfHdr;// λͼ�ļ�ͷ�ṹ
	BITMAPINFOHEADERbi;// λͼ��Ϣͷ�ṹ
	LPBITMAPINFOHEADERlpbi;// ָ��λͼ��Ϣͷ�ṹ
	HANDLEfh,// �����ļ�
		hDib,// �����ڴ���
		hPal;// ��ɫ����
	HPALETTEhOldPal = NULL;

	// ����λͼ�ļ�ÿ��������ռ�ֽ���
	hDC = CreateDC("DISPLAY", NULL, NULL, NULL);
	iBits = GetDeviceCaps(hDC, BITSPIXEL) * GetDeviceCaps(hDC, PLANES);
	DeleteDC(hDC);

	if (iBits <= 1)wBitCount = 1;
	else if (iBits <= 4)wBitCount = 4;
	else if (iBits <= 8)wBitCount = 8;
	else if (iBits <= 24)wBitCount = 24;
	else wBitCount = 24;

	// �����ɫ���С
	if (wBitCount <= 8)dwPaletteSize = (1 << wBitCount) * sizeof(RGBQUAD);

	// ����λͼ��Ϣͷ�ṹ
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

	// Ϊλͼ���ݷ����ڴ�
	hDib = GlobalAlloc(GHND, dwBmBitsSize + dwPaletteSize + sizeof(BITMAPINFOHEADER));
	lpbi = (LPBITMAPINFOHEADER)GlobalLock(hDib);
	*lpbi = bi;

	// �����ɫ��
	hPal = GetStockObject(DEFAULT_PALETTE);
	if (hPal)
	{
		hDC = GetDC(NULL);
		hOldPal = SelectPalette(hDC, (HPALETTE)hPal, FALSE);
		RealizePalette(hDC);
	}

	// ��ȡ�õ�ɫ�����µ�����ֵ
	GetDIBits(hDC, hBitmap, 0, (UINT)Bitmap.bmHeight, (LPSTR)lpbi + sizeof(BITMAPINFOHEADER)+dwPaletteSize, (BITMAPINFO*)lpbi, DIB_RGB_COLORS);

	// �ָ���ɫ��
	if (hOldPal)
	{
		SelectPalette(hDC, hOldPal, TRUE);
		RealizePalette(hDC);
		ReleaseDC(NULL, hDC);
	}

	// ����λͼ�ļ�
	fh = CreateFile(lpFileName, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, NULL);
	if (fh == INVALID_HANDLE_VALUE)return FALSE;

	// ����λͼ�ļ�ͷ
	bmfHdr.bfType = 0x4D42;// "BM"
	dwDIBSize = sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER)+dwPaletteSize + dwBmBitsSize;
	bmfHdr.bfSize = dwDIBSize;
	bmfHdr.bfReserved1 = 0;
	bmfHdr.bfReserved2 = 0;
	bmfHdr.bfOffBits = (DWORD)sizeof(BITMAPFILEHEADER)+(DWORD)sizeof(BITMAPINFOHEADER)+dwPaletteSize;

	// д��λͼ�ļ�ͷ
	WriteFile(fh, (LPSTR)&bmfHdr, sizeof(BITMAPFILEHEADER), &dwWritten, NULL);

	// д��λͼ�ļ���������
	WriteFile(fh, (LPSTR)lpbi, dwDIBSize, &dwWritten, NULL);

	// ���
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

����������У����������һ������cdcMem���ڴ�飬��ȡ�����ص����ݣ�����β�����
//////////////////////////////////////////////////////
// ��ȡλͼ��Ϣ��С
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

// ����λͼ����ռ�õĿռ�
LPVOID lpvBits = malloc(bmpInfo.bmiHeader.biSizeImage);
if (lpvBits == NULL)
{
	return;
}

// ��ȡλͼ������Ϣ
bmpInfo.bmiHeader.biCompression = BI_RGB;
nRet = GetDIBits(hDC, hBitmap, 0, bmpInfo.bmiHeader.biHeight, lpvBits, &bmpInfo, DIB_RGB_COLORS);
if (nRet == 0)
{
	return;
}
// ��λͼ��ϢlpvBits�Ĳ�������������
// ......
// �ͷſ��ٵĿռ�
free(lpvBits);
lpvBits = NULL;
