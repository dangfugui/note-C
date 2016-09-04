#include<iostream>
using namespace std;
int main()
{
    int sum=0,high,apple[11];
    for(int a=1;a<=10;a++)
        cin>>apple[a];
    cin>>high;
    for(int b=1;b<=10;b++)
        if(apple[b]<=high+30)
            sum++;
    cout<<sum<<endl;
    return 0;
}
