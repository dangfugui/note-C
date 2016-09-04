#include"iostream"
using namespace std;
#include"algorithm"
void test()
{
        long long a;
        int count=0;
        while(cin>>a)
        {
                count++;
                cout<<"Case # "<<count<<":  "<<(a*3)/2+1<<" –ti - hen- shui -"<<endl;
        }
}
int main()
{
        //while(true)
       // {
                test();
        //}
        return 0;
}