#include<iostream>
using namespace std;
int n;
int pan(int x1,int y1,int z1)
{
    if(x1<0||y1<0||x1>=n||y1>=n||z1>0)
        return 0;
    else
        return 1;
}
int main()
{
    int f[105][105],x,y,a=1;
    cin>>n;
    x=n-1;y=0;
    int h=1;
    while(h<=n*n)
    {
        f[y][x]=h;
        h++;
        switch(a)
        {
        case 1:
            {
                if(pan(x,y+1,f[y+1][x]))
                    {y++;break;}
                else
                {
                 a=2;   x--;
                }
                break;
            }
        case 2:
            {
                if(pan(x-1,y,f[y][x-1]))
                    {x--;break;}
                else
                {
                    y--;
                    a=3;
                }
                break;
            }
        case 3:
            {
                if(pan(x,y-1,f[y-1][x]))
                    {y--;break;}
                else
                {
                    x++;
                    a=4;
                }
                break;
            }
        case 4:
            {
                if(pan(x+1,y,f[y][x+1]))
                    {x++;break;}
                else
                {
                    y++;
                    a=1;
                    break;
                }
            }
        }
    }
    for(int e=0;e<n;e++)
    {
        for(int r=0;r<n;r++)
        {
            cout<<f[e][r]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
