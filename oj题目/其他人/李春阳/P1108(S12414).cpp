#include"iostream"
using namespace std;
#include"algorithm"
#include"cmath"
int main ()
{
   int n;
   int a[5000],b[5000];
   while(cin>>n)
   {
	   for(int q=0;q<n;q++)
		   cin>>a[q];
       for(int w=0;w<=n-2;w++)
		   b[w]=abs(a[w]-a[w+1]);
	  sort(b,b+n-1);
	   bool temp=true;
	   for(int t=0;t<n-1;t++)
	   {   
		   if(b[t]!=(t+1))
			   temp=false;
	   }
	   if(temp)
		   cout<<"Happy luguan"<<endl;
	   else
		   cout<<"Not happy luguan"<<endl;
		   
		   
   }
   return 0;

}
