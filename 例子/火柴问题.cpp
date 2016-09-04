#include<stdio.h>
main()
{
	int y=21;
	int x=0;
	int h;
		
begin:
	for(int i=1;i<7;i++)
	{
		printf("火柴有%d\n  输入你拿的火柴数:\n",y);
		scanf("%d",&x);
	
		if(x>4||x<1)
		{
			printf("输入错误,从新开赛");
			goto begin;
		}
		h=5-x;
		
		y=y-x;
		y=y-h;	
		printf("电脑拿了%d\n",h);
		if(y==1)
		{
			printf("你拿了最后1根,我赢了\n");
			break;
		}
	}
}
