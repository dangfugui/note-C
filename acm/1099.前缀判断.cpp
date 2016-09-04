#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[1000][100];
    int x,sum=0;
    cin>>x;
    for(int a=0;a<x;a++)
        cin>>ch[a];
    for(int b=0;b<x;b++)
    {
        for(int c=0;c<x;c++)
        {
            if(b!=c&&strlen(ch[b])<strlen(ch[c]))
            {
                bool p=true;
                for(int d=0;d<strlen(ch[b]);d++)

                {

                    if(ch[b][d]!=ch[c][d])
                    {
                        p=false;
                        break;
                    }

                }
                if(p)   {sum++;break;}///////////
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}


