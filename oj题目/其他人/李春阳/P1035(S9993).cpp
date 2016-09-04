#include"iostream"
using namespace std;
int main ()
{
    int n,counts=0;
    cin>>n;
    for(int a=0;a<=100;a++)
    {
        for(int b=0;b<=100;b++)
        {
            for(int c=0;c<=100;c++)
            {
                if(a*10+b*5+c==n)
                {
                    counts++;
                }
            }
        }
    }
    cout<<counts<<endl;
    return 0;
}