#include <iostream>
using namespace std;
long long s[20][20] = {1},jc[11]={0,1,2,6,24,120,720,5040,40320,36288,3628800};
int main()
{
    int n,r;
    cin>>n>>r;
    long long an = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= r; j++)
        {
            s[i][j] = j * s[i - 1][j] + s[i - 1][j - 1];
        }
    cout<<s[n][r] * jc[r]<<endl;
    return 0;
}

