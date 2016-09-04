#include"iostream"
using namespace std;
#define MAX 4000
char res[MAX][MAX];
void fun(int a,int x,int y)
{
        if(a==1)
        {
                res[x][y+1]='/';
                res[x][y+2]='\\';
                res[x+1][y]='/';
                res[x+1][y+1]='_';
                res[x+1][y+2]='_';
                res[x+1][y+3]='\\';
        }else
        {
                fun(a-1,x,y+(1<<(a-1)));
                fun(a-1,x+(1<<(a-1)),y);
                fun(a-1,x+(1<<(a-1)),y+(1<<a));
        }
}
int main()
{
        int n;
        cin>>n;
        for(int i=0;i<MAX;i++)
        {
                for(int j=0;j<MAX;j++)
                {
                        res[i][j]=' ';
                }
        }
        fun(n,1,1);
        for(int i=1;i<=(1<<n);i++)
        {
                for(int j=1;j<=(1<<(n+1));j++)
                        cout<<res[i][j];
                cout<<endl;
        }
        return 0;
}
