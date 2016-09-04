#include"iostream"
#include"algorithm"
#include"cstring"
#include"malloc.h"
#include"cstdio"
using namespace std;
int main()
{
        long r[51];
        r[0]=0;
        r[1]=1;
        r[2]=1;
        for(int q=3;q<51;q++)
        r[q]=r[q-1]+r[q-2];
        int m,n;
        while(cin>>m>>n)
        {
                cout<<m*r[n/2]<<endl;
        }
        return 0;
}
