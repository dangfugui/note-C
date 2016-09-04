#include<stdio.h>
main()
{
	int a,b,c,x,y;
	scanf("%d",&x);
	a=x/100;
	b=(x-a*100)/10;
	c=x-a*100-b*10;
	y=a+10*b+100*c;
	if(c!=0)
    printf("%3d\n",y);
	else
	printf("0%d",y);
	return 0;
}