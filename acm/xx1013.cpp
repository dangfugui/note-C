#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,i,sum=0;
    cin>>n;
    int fun[n+2];
    fun[0]=0;
    for(a=1;a<=n;a++)
    {
        cin>>fun[a];
    }
    for(b=1;b<=n;b++)//≈≈–Ú
    {
        for(c=1;c<=n;c++)
            {
                if(fun[c]>fun[c+1])
                {

                    e=fun[c];
                    fun[c]=fun[c+1];
                    fun[c+1]=e;

                }
            }
    }//≈≈–Ú
   /* for(int i=0;i<=n;i++)
    {
        cout<<fun[i]<<endl;
    }*/
    for(d=n;d>1;d--)
    {
        /*for(int x=0;x<=d;x++)
        {
            cout<<x<<"="<<fun[x]<<"  ";
        }*/
        sum=sum+fun[d]+fun[d-1];
        fun[d-1]=fun[d]+fun[d-1];
        //cout<<"sum="<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}
