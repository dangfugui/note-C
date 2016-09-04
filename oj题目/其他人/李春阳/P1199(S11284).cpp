#include"iostream"
using namespace std;
#include"cmath"
#include"algorithm"
#include"cstdio"
int main ()
{
	float a,b,c;
	bool temp=false;
	while(cin>>a>>b>>c)
	{
		if((a+b)>c&&(a+c)>b&&(b+c)>a)
			temp=true;
		if(!temp)
		{
			cout<<"Error"<<endl;
		}
		if(temp)
		{
		float x,y,z;
		x=acos(((a*a+b*b-c*c)/(2*a*b)));
		y=acos(((b*b+c*c-a*a)/(2*b*c)));
		z=acos(((a*a+c*c-b*b)/(2*a*c)));
		float a[3];
		a[0]=x;
		a[1]=y;
		a[2]=z;
		sort(a,a+3);
		printf("%.3f\n",a[2]);
		}
		temp=false;
	}

	return 0;
}