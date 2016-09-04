#include"iostream"
using namespace std;
#include"cstring"
int main()
{
    char fun[10001];
    while(cin>>fun)
    {
        int boy=0;
        int girl=0;
        for(int a=0;a<strlen(fun);a++)
        {
            if(fun[a]=='G')
                girl++;
            if(fun[a]=='B')
                boy++;
        }
        if(boy==girl)
        {
            for(int a1=0;a1<boy;a1++)
                cout<<'B'<<'G';
            cout<<endl;
        }
        else if(boy-girl==1)
        {
            for(int b1=0;b1<girl;b1++)
                cout<<'B'<<'G';
            cout<<'B'<<endl;
        }
        else if(girl-boy==1)
        {
            for(int c=0;c<boy;c++)
                cout<<'G'<<'B';
            cout<<'G'<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
