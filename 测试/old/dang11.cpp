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
   cout<<"�������һ��������ʵ�����鲿:";
   cin>>a.real>>a.img;
   cout<<"������ڶ���������ʵ�����鲿:";
   cin>>b.real>>b.img;
   cout<<"a+b="<<a.real+b.real<<"+"<<a.img+b.img<<"i\n";
   cout<<"a-b="<<a.real-b.real<<"+"<<a.img-b.img<<"i\n";
   cout<<"a*b="<<a.real*b.real-a.img*b.img<<"+"<<a.real*b.img+b.real*a.img<<"i"<<endl;
   return 0;
}
