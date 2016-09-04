#include"iostream"
using namespace std;
int main ()
{
    float a;
    cin>>a;
    float c;
    c=a-(int)a;
    if(c>=0.5)
        cout<<(int)a+1<<endl;
    if(c<0.5)
        cout<<(int)a<<endl;
    return 0;

}
