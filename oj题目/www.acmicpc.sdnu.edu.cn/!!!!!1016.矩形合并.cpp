#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    m=n;
    int fun[n][4];
    for(int a=0;a<n;a++)
    {
        cin>>fun[a][0]>>fun[a][1]>>fun[a][2]>>fun[a][3];
    }


    for(int b=n-1;b>=0;b--)
    {
        for(int c=0;c<b;c++)
        {

            if(fun[c][3]<=fun[b][1]||
               fun[c][2]<=fun[b][0]||
               fun[c][1]>=fun[b][3]||
               fun[c][0]>=fun[b][2])
            {
                continue;
            }
            else
            {
                fun[c][0]=fun[c][0]<fun[b][0]?fun[c][0]:fun[b][0];
                fun[c][1]=fun[c][1]<fun[b][1]?fun[c][1]:fun[b][1];
                fun[c][2]=fun[c][2]>fun[b][2]?fun[c][2]:fun[b][2];
                fun[c][3]=fun[c][3]>fun[b][3]?fun[c][3]:fun[b][3];
                m--;
                break;
            }
        }
    }
    cout<<m<<endl;
    return 0;
}
