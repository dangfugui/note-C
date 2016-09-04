#include"iostream"
using namespace std;
int main ()
{
	int a[12];
	for(int i=0;i<12;i++)
		cin>>a[i];
	int x=0;//存在妈妈那里的钱
	int b[12];//存储每个月肯能够剩下的钱
	for(int h=0;h<12;h++)
		b[h]=0;
    for(int y=0;y<12;y++)
	{
		if(y==0)
		{
			if(300>=a[y])
			{  
			   x+=((300-a[y])/100)*100;
               b[y]=300-a[y]-((300-a[y])/100)*100;
			}
			else
			{
					cout<<-1<<endl;
					return 0;
			}
		}
		else
		{
			if((300+b[y-1])>=a[y])
			{
				x+=((300+b[y-1]-a[y])/100)*100;
				b[y]=300+b[y-1]-a[y]-((300+b[y-1]-a[y])/100)*100;;
			}
			else
			{
				cout<<-(y+1)<<endl;
				return 0;
			}
		}
	}
	float e=b[11]+x*1.2;
	cout<<e<<endl;
	return 0;
}