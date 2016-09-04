#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
    int N;
    //int map[105][105],mmax[105][105];
    cin>>N;
    int **map=new int*[N+2];
    int **mmax=new int*[N+2];
    for(int a=0;a<N+2;a++){
        map[a]=new int[N+2];
        mmax[a]=new int[N+2];
    }
    for(int a=0;a<N;a++){
        for(int b=0;b<N;b++){
            cin>>map[a][b];
        }
    }
    for(int h=0;h<N;h++){
        for(int l=0;l<N;l++){
            if(h==0&&l==0){
                mmax[h][l]=map[h][l];
            }else if(h==0){
                mmax[h][l]=mmax[h][l-1]+map[h][l];
            }else if(l==0){
                mmax[h][l]=mmax[h-1][l]+map[h][l];
            }else{
                mmax[h][l]=max(mmax[h-1][l],mmax[h][l-1])+map[h][l];
            }
        }
    }
    cout<<mmax[N-1][N-1]<<endl;
    return 0;
}



/*1038.�ռ�����
Time Limit: 1500 MS    Memory Limit: 32768 KB
Total Submission(s): 161    Accepted Submission(s): 81
Description
��һ��n*n�ľ��󣬾���ÿ�������ж���һЩ���أ������Ͻ�(1, 1)������ÿ��ֻ�����»��������ƶ�һ����֪ÿ�������б��صļ�ֵ�����ߵ����½�(n, n)ʱ���ռ����ı��ص�������ֵ��
Input
��һ��Ϊһ������n(1 <= n <= 1000)����ʾ������С�������
Output
һ����������ʾ���ռ����ı��ص�����ܼ�ֵ��
Sample Input
4
1 2 3 10
3 4 1 1
5 2 1 1
1 3 1 1
Sample Output
19
Source
Unkown*/
