#include"iostream"
#include"cstdio"
#include"cstring"
using namespace std;
int main ()
{
    int n,num[10]={0};
    char p[8];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sprintf(p,"%d",i);
        for(int q=0;q<strlen(p);q++)
            num[p[q]-'0']++;
    }
    for(int y=0;y<9;y++)
        cout<<num[y]<<" ";
        cout<<num[9];
    cout<<endl;
    return 0;
}
