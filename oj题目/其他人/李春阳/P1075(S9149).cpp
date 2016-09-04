#include<iostream>
using namespace std;
void han(int x,char a,char b,char c)
{
    if(x==1)
    {
        cout<<a<<"->"<<c<<endl;
 
    }
    else
    {
        han(x-1,a,c,b);
        cout<<a<<"->"<<c<<endl;
        han(x-1,b,a,c);
    }
 
}
int main()
{
    int y;
    char A,B,C;
    cin>>y;
    han(y,'A','B','C');
        return 0;
}
