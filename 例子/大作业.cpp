#include<stdio.h>
main()
{
	while(1==1)
    {

        int num[9999];
        int a,b,c,d,x,y,z;
        d=y=z=0;
        for(int j=0;j<9999;j++)
        {
            num[j]=-1;
        }

        int r,s;
        printf("请输入人数：\n");
        scanf("%d",&r);
        printf("请输入开始数的号：\n");
        scanf("%d",&c);
        printf("请输入报数：\n");
        scanf("%d",&s);


        for(b=c-1,x=1;1==1;)
        {
            b=b+1;
            if(b==r+1)	{b=1;}
            if(num[b]==0)
            {

                continue;
            }
            if(x==s)
            {
                x=0;
                d=d+1;
                printf("%d   out\n",b);
            }
            num[b]=x;
            x=x+1;
            if(d==r)	break;
            //num[b]=x;
        //	x=x+1;


        }

	printf("还剩 %d\n",b);
    }

}
