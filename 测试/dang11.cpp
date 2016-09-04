#include"iostream"
using namespace std;
struct NUMBER
{
    int img;
    int real;
};
int main ()
{
   NUMBER a,b;
   cout<<"请输入第一个复数的实部和虚部:";
   cin>>a.real>>a.img;
   cout<<"请输入第二个复数的实部和虚部:";
   cin>>b.real>>b.img;
   cout<<"a+b="<<a.real+b.real<<"+"<<a.img+b.img<<"i\n";
   cout<<"a-b="<<a.real-b.real<<"+"<<a.img-b.img<<"i\n";
   cout<<"a*b="<<a.real*b.real-a.img*b.img<<"+"<<a.real*b.img+b.real*a.img<<"i"<<endl;
   return 0;
}
