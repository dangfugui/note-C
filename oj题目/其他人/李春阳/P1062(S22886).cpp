#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
struct matrix
{
    long long a[2][2];
};
matrix mul(matrix &x, matrix &y)
{
    matrix res;
    long long sum;
    for(long long i=0; i<2; i++)
    for(long long j=0; j<2; j++)
    {
        sum = 0;
        for(long long k=0; k<2; k++)
        sum += x.a[i][k]*y.a[k][j];
        sum%=1000000007;
        res.a[i][j] = sum;
    }
    x = res;
    return x;
}
matrix pow(matrix x, long long e)
{
    matrix ans, temp;
    if(e == 0)
    {
        ans.a[0][0]=1;
        ans.a[0][1]=0;
        ans.a[1][0]=0;
        ans.a[1][1]=1;
        return ans;
    }
    if(e == 1)
    return x;
    temp = pow(x, e>>1);
    ans = mul(temp, temp);
    if(e&1)
    ans = mul(ans,x);
    return ans;

}
int main()
{
    long long n;
    matrix ans;
    matrix base ={{1,1,1,0}};
    while(~scanf("%lld", &n))
    {
        if(!n) printf("0\n");
        else
        {
            ans = pow(base, n-1);
            printf("%d\n",ans.a[0][0]%1000000007);
        }
    }
//system("pause");
return 0;
}
