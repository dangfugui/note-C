#include<stdio.h>
int main ()
{
int a,b;
int m[6]={1,2,2,3,4,5};
scanf("%d",&a);
for (b=0;b<6;b++)
	{
	if(a!=m[b])
		{							
			printf("%d ",m[b]);
		}
	}	
return 0;

}