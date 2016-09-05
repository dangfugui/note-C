#include<stdio.h>	
void sum(int);


int main(void)
{
	sum(1);
	return 0;
}

void sum(int n)
{
	printf("level %d: n location %p\n",n,&n);
	if(n<4)
	sum(n+1);
printf("level %d: n location %p\n",n,&n);
}
