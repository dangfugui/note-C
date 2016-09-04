#include<stdio.h>
main()
{
    int num[10];
    int t,y,i,x;
    for( i=0;i<9;i++)
    {
        scanf("%d",&num[i]);
    }
    for( x=0;x<9;x++)
    {
        for(y=0;y<9-x;y++)
        {
            if(num[y]>num[y+1])
            {
                int u;
                u=num[y];
                num[y]=num[y+1];
                num[y+1]=u;
            }

        }
    }
    for( t=0;t<10;t++)
    {
        printf("%d  ",num[t]);
    }

}
