#include"iostream"
using namespace std;
int main ()
{
   int a[10000];
   int n,sum=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   for(int l=0;l<n-1;l++)
   {
      for(int j=0;j<n-1;j++)
	  {  
		  
	     if(a[j]>=a[j+1])
		 { 
		   int temp;
		   temp=a[j];
		   a[j]=a[j+1];
		   a[j+1]=temp;
		 }
	  }
   }
   for(int m=n-1;m>=1;m--)
   {
      sum+=a[m]+a[m-1];
		  a[m-1]=a[m]+a[m-1];
   }
   cout<<sum<<endl;
   
   
	   return 0;
	   
}
   