#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cmath>
using namespace std;

int big(int a,int b)
{
	if(a>b)
		return 1;
	else
		return 0;
}
int main()
{
	int y[3];
	double x,z;
	while(cin>>y[0]>>y[1]>>y[2])
	{
		sort(y,y+3,big);
	
		if(y[2]+y[1]<=y[0])
			cout<<"Error"<<endl;
		else
		{
			x=(double)(y[2]*y[2]+y[1]*y[1]-y[0]*y[0])/(2*y[2]*y[1]);
			z=acos(x);
			printf("%.3f\n",z);
		}

	}
	return 0;
}