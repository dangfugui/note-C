#include<iostream>
using namespace std;
void swap1(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}



int main()
{
    int a,b;
    cin>>a>>b;
    swap1(a,b);
    cout<<a<<b;
}
