��/*
http://www.rqnoj.cn/problem/1
��Ŀ����
��������ѧУ����һЩͬѧһ����һ���ʾ���飬Ϊ��ʵ��Ŀ͹��ԣ������ü����������N��1��1000֮������������N��100�������������ظ������֣�ֻ����һ������������ͬ����ȥ������ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�Ȼ���ٰ���Щ����С�������򣬰����źõ�˳��ȥ��ͬѧ�����顣����Э��������ɡ�ȥ�ء��롰���򡱵Ĺ�����
�����ʽ
������2�У���1��Ϊ1������������ʾ�����ɵ�������ĸ�����
N
��2����N���ÿո��������������Ϊ���������������
�����ʽ
���Ҳ��2�У���1��Ϊ1��������M����ʾ����ͬ��������ĸ�������2��ΪM���ÿո��������������Ϊ��С�����ź���Ĳ���ͬ���������*/

#include<iostream>
#include<algorithm>
using namespace std;
bool mmax(int a,int b)
{
    if(a<b)
        return true;
    else
        return false;
}
int main()
{
    int n=0,p;
    int sun[105];
    cin>>n;
    p=n;
    for(int a=0;a<n;a++)
    {
        cin>>sun[a];
    }
    sort(sun,sun+n,mmax);
    for(int b=0;b<n-1;b++)
    {
        if(sun[b]==sun[b+1])
        {
            sun[b]=9999;
            p--;
        }
    }
    sort(sun,sun+n,mmax);
    cout<<p<<endl;
    for(int c=0;c<p;c++)
    {
        cout<<sun[c]<<' ';
    }
    cout<<endl;
    return 0;
}
