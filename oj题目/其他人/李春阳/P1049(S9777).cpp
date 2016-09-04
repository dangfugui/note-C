#include"iostream"
using namespace std;
int main ()
{
    int n,m;
    int l=1,sum=0;
    bool finish=false;
    cin>>n;
    cin>>m;
    for(int k=1;k<2*m;k++)
    {
        sum+=l;
        if(sum==m)
        {
            finish=true;
        }
        if(sum==n)
            sum=0;
        l++;
    }
    if(finish)
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
        return 0;
}
