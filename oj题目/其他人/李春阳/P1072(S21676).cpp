#include"iostream"
using namespace std;
int plus1(int x)
{
        if(x==1)
        {
                cout<<"[plus1(1) output]Begin invoke plus1(1)"<<endl;
                cout<<"[plus1(1) output]return plus1(1) = 1"<<endl;
                return 1;
        }
        else
        {
                cout<<"[plus1("<<x<<") output]Begin invoke plus1("<<x<<")"<<endl;
                cout<<"[plus1("<<x<<") output]I want to calculate plus1("<<x<<"), require "<<x<<" and the value of plus1("<<x-1<<"),so I need to invoke plus1("<<x-1<<")"<<endl;
                int xx=plus1(x-1);
                cout<<"[plus1("<<x<<") output]I got the value of plus1("<<x-1<<"), and plus it to "<<x<<"then return"<<xx+x<<endl;
                return xx+x;
        }
}
int main()
{
        int n;
        cin>>n;
        int res=plus1(n);
        cout<<res<<endl;
        return 0;
}
