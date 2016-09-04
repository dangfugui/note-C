#include"iostream"
#include"cstdio"
#include"cstring"
using namespace std;
int main ()
{
    int n;
    char x[1001][101];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    int sum=0;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(j!=k&&strlen(x[j])<strlen(x[k]))
            {
                bool temp=true;
                for(int l=0;l<strlen(x[j]);l++)
                {
                    if(x[j][l]!=x[k][l])
                    {
                        temp=false;
                        break;
                    }
                }
                if(temp)
                        {
                            sum++;
                            break;
                        }
            }
        }
    }
    cout<<sum<<endl;
}
