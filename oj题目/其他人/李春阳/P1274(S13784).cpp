#include"iostream"
#include"cstring"
#include"cstdlib"
bool bi(char x[6],char y[6])
{
	bool temp=true;
	for(int ss=0;ss<6;ss++)
		if(x[ss]!=y[ss])
			temp=false;
	return temp;
}
using namespace std;
int main ()
{
	char x[3000][20];
	int n;
	cin>>n;
	char jinan[]="370101";
	char qingdao[]="370201";
	char zibo[]="370301";
	char dezhou[]="371401";
	char weihai[]="371001";
	char yantai[]="370601";
	char rizhao[]="371101";
	char taian[]="370901";
	char laiwu[]="371201";
	for(int q=0;q<n;q++)
		cin>>x[q];
	for(int w=0;w<n;w++)
	{
		cout<<"He/She is from ";
		char y[6];
		for(int e=0;e<6;e++)
			y[e]=x[w][e];
		if(bi(y,jinan))
		{
			cout<<"Jinan,and his/her birthday is on ";
		}
		if(bi(y,qingdao))
		{
			cout<<"Qingdao,and his/her birthday is on ";
		}
		if(bi(y,zibo))
		{
			cout<<"Zibo,and his/her birthday is on ";
		}
		if(bi(y,dezhou))
		{
			cout<<"Dezhou,and his/her birthday is on ";
		}
		if(bi(y,weihai))
		{
			cout<<"Weihai,and his/her birthday is on ";
		}
		if(bi(y,yantai))
		{
			cout<<"Yantai,and his/her birthday is on ";
		}
		if(bi(y,rizhao))
		{
			cout<<"Rizhao,and his/her birthday is on ";
		}
		if(bi(y,taian))
		{
			cout<<"Taian,and his/her birthday is on ";
		}
		if(bi(y,laiwu))
		{
			cout<<"Laiwu,and his/her birthday is on ";
		}
		char year[4],day[2],month[2];
		for(int t=6;t<=9;t++)
			year[t-6]=x[w][t];
		for(int a=10;a<=11;a++)
		month[a-10]=x[w][a];
		for(int s=12;s<=13;s++)
			day[s-12]=x[w][s];
		for(int z=0;z<2;z++)
			cout<<month[z];
		cout<<",";
		for(int xx=0;xx<2;xx++)
			cout<<day[xx];
		cout<<",";
		for(int tt=0;tt<4;tt++)
			cout<<year[tt];
		cout<<" based on the table."<<endl;
	}
	return 0;
}