#include"iostream"
#include"cstring"
#include"cstdio"
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void hello()
{
	int w,m,n;
	cin>>w>>m>>n;
	int row1=(m%w==0)?(m/w):(m/w)+1;
	int row2=(n%w==0)?(n/w):(n/w)+1;
	//cout<<row1<<" "<<row2<<endl;
	int col1=0;
	int col2=0;
	if(w==1)
	{
		int res=(n>m)?(n-m):(m-n);
		cout<<res<<endl;
		return;
	}
	if(row1%2==0)
	{
		col1=w-(m-(w*(row1-1)+1)+1)+1;
	}else{
		col1=m-(w*(row1-1)+1)+1;
	}
	if(row2%2==0)
	{
		col2=w-(n-(w*(row2-1)+1)+1)+1;
	}else{
		col2=n-(w*(row2-1)+1)+1;
	}
	//cout<<col1<<" "<<col2<<endl;

	int sum1=0,sum2=0;
	if(row1>row2){
	    sum1=row1-row2;
	}else
		sum1=row2-row1;
	if(col1>col2){
	    sum2=col1-col2;
	}else
		sum2=col2-col1;
	cout<<sum1+sum2<<endl;
}
int main()
{
	//while(true)
	//{
		hello();
	//}
	//system("pause");
	return 0;
}