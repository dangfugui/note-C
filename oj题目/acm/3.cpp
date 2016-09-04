#include"iostream"
#include"algorithm"
#include"stdio.h"
using namespace std;
struct node
{
    int x;
    int y;
};
bool com(struct node q,struct node w)
{
    if(q.y<w.y)
    {
        return false;
    }else{
        return true;
    }
}
int main()
{
    int m,n;
    struct node a[1100],b[1100],c[1100];
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
        scanf("%d%d",&a[i].x,&a[i].y);
    for(int j=0;j<n;j++)
        scanf("%d%d",&b[j].x,&b[j].y);
    int max1=0;
    for(int z=0;z<m;z++)
    {
        if(a[z].x!=0){
            c[a[z].y].x+=a[z].x;
            c[a[z].y].y+=a[z].y;
            if(a[z].y>max1){
                max1=a[z].y;
            }
        }
    }
    for(int s=0;s<n;s++)
    {
        if(b[s].x!=0){
            c[b[s].y].x+=b[s].x;
            c[b[s].y].y=b[s].y;
            if(b[s].y>max1){
                max1=b[s].y;
            }
        }
    }
    sort(c,c+max1+1,com);
    for(int u=0;u<=max1;u++){
        if(c[u].x!=0){
            cout<<c[u].x<<" "<<c[u].y<<endl;
        }
    }
    return 0;
}
