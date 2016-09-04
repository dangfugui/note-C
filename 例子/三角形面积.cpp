#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,p,s;
	printf("ÇëÊäÈëÈı±ß³¤:");
	scanf("%d %d %d",&a,&b,&c);
	p=a+b+c;
	s=(sqrt(p*(p-a)*(p-b)*(p-c)))/p;
	printf("s=%d\n",s);
	return 0;
}
