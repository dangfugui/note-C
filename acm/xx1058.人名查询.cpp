#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,c,d,e,n,m;
    cin>>m>>n;
    string fin[m+2];
    string name[n+2];
    for(a=0;a<m;a++)
    {
        cin>>fin[a];
    }
    for(b=0;b<n;b++)
    {
        cin>>name[b];
    }

    for(c=0;c<n;c++)
    {
        for(d=0;d<m;d++)
        {
            if(name[c]==fin[d])
            {
                cout<<"YES"<<endl;
                break;
            }
            if(d==m-1)
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
