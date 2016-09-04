#include<stdio.h>
main()
{
while(1==1)//能够执行n次程序
	{
        int num[999];//定义一个足够大的数组
        int a,b,c,d,x,y,z;
        d=y=z=0;
        for(int u=0;u<=999;u++)
        {
            num[u]=999;//数组赋初值
        }

        int r,s;
        printf("请输入人数：\n");
        scanf("%d",&r);
        printf("请输入开始数的号：\n");
        scanf("%d",&c);
        printf("请输入报数：\n");
        scanf("%d",&s);


        for(b=c-1,x=1;b<=r+10;)
        {
            b=b+1;
            if(b==r+1)	{b=1;}//到头就再从1开始数
            if(num[b]%s==0)
            {
                continue;//能被整除就跳到下一个人
            }

            num[b]=x;
            x=x+1;
            if(num[b]%s==0)
            {
                d=d+1;
                printf("%d  out\n",b);
            }
            if(d==r)	break;
        }
        printf("还剩 %d\n",b);
	}

}
