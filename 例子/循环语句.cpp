#include<stdio.h>
main()
{
	int a,b,c;
	a=1;


	do
	{
		a++;
	}
	while(a<10);
	printf("a=%d\n",a);

	
	
	for(b=1;b<10;b++);
	printf("b=%d\n",b);
	
	
	c=1;
	while(c<10)
	{
	c++;
	}
	printf("c=%d\n",c);
}