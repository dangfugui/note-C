#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
     int n;
     //char a=' ',b='*';
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cout<<string(n-i,' ')<<string(2*i-1,'*')<<endl;
     }
     for(int i=n-1;i>0;i--)
     {
         cout<<string(n-i,' ')<<string(2*i-1,'*')<<endl;
     }
     return 0;
}
