//1074.我们喜欢递归的斐波那契数列

#include<iostream>
using namespace std;
int fun(int x)
{
    if(x==1||x==2)
    {
        return 1;
    }
    else
    {
        return fun(x-1)+fun(x-2);
    }
}
int main()
{
    int a;
   while(cin>>a)
   {

   cout<<fun(a)<<endl;


   }
    return 0;
}
