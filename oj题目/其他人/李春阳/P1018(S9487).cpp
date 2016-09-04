#include"iostream"
using namespace std;
int main ()
{
   char x;
   int a=0,b=0,c=0;
   while(cin>>x)
   {
   
   
      if(x=='W')
	  {
		  a++;
	  }
	  if(x=='L')
	  {
	     b++;
	  }
	  if(a==3)
	  {
	    c++;
		a=0;
		b=0;
	  }
	  if(b==3)
	  {
	    a=0;
		b=0;
	  }
   
   }
   cout<<c<<endl;
   
   
   
   return 0;
}

