#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long a[1010],sum[1010];
    long long n,max;
    while (cin >> n)
    {
        if(n == 0) return 0;
        for (int i=0;i<n;i++)
                cin >> a[i];
        sum[0]=a[0];
        for (int i=0;i<n;i++)
        {
            max=0;
            for (int j=0;j<i;j++)
            {
                if (a[i]>a[j])
                {
                    if (max<sum[j])
                    max=sum[j];
                }
            }
            sum[i]=a[i]+max;
        }
        long long ans=0;
        for (int i=0;i<n;i++)
        {
            if (ans<sum[i])
            ans=sum[i];
        }
       cout << ans <<endl;
    }
    return 0;
}
