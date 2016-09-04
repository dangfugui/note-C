#include"iostream"
using namespace std;
int main ()
{
    int counts=0;
    int a;
    while(cin>>a)
    {
        if(a==0)
            break;
        else

       {

        while(a!=1)
        {
            if(a%2==0)
            {
                a=a/2;
                counts++;
            }
            else
            {
                a=a*3+1;
                a=a/2;
                counts++;
            }
        }
        cout<<counts<<endl;
        counts=0;
    }
    }

    return 0;
}
