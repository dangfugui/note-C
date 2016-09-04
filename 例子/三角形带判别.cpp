#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,p,s;
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c&b+c>a&a+c>b)
	{
	p=a+b+c;
	s=(sqrt(p*(p-a)*(p-b)*(p-c)))/p;
	printf("s=%d\n",s);
	return 0;
	}
	else
	printf("sorry\n");
}