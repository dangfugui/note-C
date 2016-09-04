#include"iostream"
#include"cstring"
using namespace std;
int main ()
{
    int n;
    while(cin>>n)
    {

        char color[1001][20];
        int num[1001]={0}; 
        if(n==0)
            return 0;
        for(int q=0;q<n;q++)
        {
            cin>>color[q];
            for(int w=0;w<=q;w++)
            {
                if(strcmp(color[q],color[w])==0)
                    num[w]++;
            }
        }
        int max=num[0];
        int pos=0;
        for(int r=1;r<n;r++)
            if(num[r]>max)
            {
                max=num[r];
                pos=r;
            }
            cout<<color[pos]<<endl;
    }
    return 0;
}