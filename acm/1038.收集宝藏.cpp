
#include<stdio.h>


int num=0,fun[1005][1005],n;
void add(int x,int y,int p)
{
    if(x>n||y>n)
        return;
    if(x==n&&y==n)
    {

        if(p>num)
            num=p;
    }
    else
    {
        add(x+1,y,p+fun[x+1][y]);
        add(x,y+1,p+fun[x][y+1]);
    }
}

int main()
{
    scanf("%d",&n);
    for(int b=1;b<=n;b++)
        for(int c=1;c<=n;c++)
            scanf("%d",&fun[b][c]);
    add(1,1,fun[1][1]);
    printf("%d\n",num);

    return 0;
}
