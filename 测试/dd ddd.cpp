#include <stdio.h>
 
int  fun(int x);
  
void main(void)
{
    
    
    int t,a;
    printf("Please input:");
    scanf("%d",&a);
    t=fun(a);
    printf("%d\n",t);
}
int  fun(int x)
{
	int name[10];
    int i = 0;
	int m=0;
    
	for(i=0;i<9;i++)
		scanf("%d",&name[i]);
   
       


for(i=0;i<9;i++)
	{
	  if(x==name[i])
		  m++;
		  continue;		 
    
}
	return m;

}