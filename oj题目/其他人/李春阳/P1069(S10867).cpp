#include"iostream"
using namespace std;
int main ()
{
	int a[8];
	int sum=0,sum1=0,sum2=0;
	cout<<"老大有几个苹果"<<endl;
	cin>>a[0];
	cout<<"老大有几个橘子"<<endl;
	cin>>a[1];
	cout<<"老大有几个香蕉"<<endl;
	cin>>a[2];
	cout<<"老大有几个草莓"<<endl;
	cin>>a[3];
	cout<<"小白菜有几个苹果"<<endl;
	cin>>a[4];
	cout<<"小白菜有几个橘子"<<endl;
	cin>>a[5];
	cout<<"小白菜有几个香蕉"<<endl;
	cin>>a[6];
	cout<<"小白菜有几个草莓"<<endl;
	cin>>a[7];
	cout<<"偶们不只是有苹果，还有橘子，香蕉，草莓……"<<endl;
	for(int i=0;i<8;i++)
		sum+=a[i];
	for(int j=0;j<4;j++)
		sum1+=a[j];
	for(int k=4;k<8;k++)
		sum2+=a[k];
	cout<<"偶们总共有"<<sum<<"个水果~~"<<endl<<"老大总共有"<<sum1<<"个水果~~"<<endl<<"小白菜总共有"<<sum2<<"个水果~~"<<endl;
    return 0;
}