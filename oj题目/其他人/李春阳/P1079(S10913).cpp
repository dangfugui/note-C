#include"iostream"
using namespace std;
struct Complex
{
   int real;
   int img;
};
Complex c;
int chengfa(Complex a,Complex b)
{
	c.real=a.real*b.real-a.img*b.img;
	c.img=a.real*b.img+a.img*b.real;
	return 0;
}
int main ()
{
   Complex x,y;
   cin>>x.real>>x.img>>y.real>>y.img;
   chengfa(x,y);
   if(c.real==0&&c.img==0)
	   cout<<0<<endl;
   if(c.real!=0)
	   cout<<c.real;
   if(c.real!=0&&c.img>0)
   {
	   cout<<"+"<<c.img<<"i"<<endl;
   }
   if(c.real==0&&c.img>0)
	   cout<<c.img<<"i"<<endl;
   if(c.img<0)
	   cout<<c.img<<"i"<<endl;
   return 0;
}