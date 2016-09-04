#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        int fun[n+1];
        for(int a=0;a<n;a++)
        {
            cin>>fun[a];
        }
        for(int b=0;b<n;b++)//≈≈–Ú
        {
            for(int c=0;c<n;c++)
            {
                if(fun[c]>fun[c+1])
                {
                    int x;
                    x=fun[c];
                    fun[c]=fun[c+1];
                    fun[c+1]=x;
                }
            }
        }//≈≈–Ú
        int num=0;
        for(int d=1;d<n;d++)
        {
            num+=fun[d]-fun[d-1];
        }
        num+=fun[n-1]-fun[0];
        cout<<num<<endl;
    }
}
