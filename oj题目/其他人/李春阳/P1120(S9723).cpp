#include"iostream"
using namespace std;
int main ()
{
   char a[14];
 cin>>a;
int m=0,ans=0,q;
for(int i=0;i<11;i++)
{  
	
   if(a[i]!='-')
	  { 
		  m++;
          ans+=(a[i]-'0')*m;
   }
}
q=ans%11;
if(q==(a[12]-'0'))
cout<<"Right"<<endl;
else if(q==10&&a[12]=='X')
	cout<<"Right"<<endl;
else
{
   if(q==10)
   {
     for(int j=0;j<12;j++)
	 {
	   cout<<a[j];
	 }
	 cout<<"X"<<endl;
   }
   else
   {
     for(int k=0;k<12;k++)
	 {
	   cout<<a[k];
	 }
	 cout<<q<<endl;
   }
}

return 0;
}