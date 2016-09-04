#include"iostream"
using namespace std;

int xx[]={1,1,-1,-1,2,2,-2,-2};
int yy[]={2,-2,2,-2,1,-1,1,-1};
bool can=false;
int x,y,x1,y1;
void run(int a,int b,int x);
int main()
{
    cin>>x1>>y1;
    cin>>x>>y;
    run(x1,y1,0);
    if(can)
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
void run(int a,int b,int k)
{
    if(k>4) return;
    if(a==x&&b==y)  {can=true;return;}
    for(int i=0;i<8;i++)
    {
        run(a+xx[i],b+yy[i],k+1);
    }
}
