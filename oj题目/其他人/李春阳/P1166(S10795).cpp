#include"iostream"
using namespace std;
#include"algorithm"
int main ()
{
    int a[7],b[7];
    for(int i=0;i<7;i++)
        cin>>a[i]>>b[i];
    bool temp=false;
    int c[7];
    for(int j=0;j<7;j++)
        c[j]=a[j]+b[j];
    int d[7];
    for(int p=0;p<7;p++)
        d[p]=c[p];
     sort(c,c+7);
     if(c[6]<=8)
            cout<<"0"<<endl;
     else
     {
         for(int y=0;y<7;y++)
         {
             if(d[y]==c[6])
                {
                    cout<<y+1<<endl;
                    return 0;
                }
         }

     }
     return 0;
}
