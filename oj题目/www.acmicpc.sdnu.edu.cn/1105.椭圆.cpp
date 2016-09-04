#include<cstdio>
#include<iostream>
using namespace std;
#include<cmath>
#define PI 3.141592654
int main()
{
    int c,j,k;
    double a,b,s;
    cin>>c>>j>>k;
    a=(double)(c*k)/j;
    b=sqrt(a*a-c*c);
    s=PI*a*b;
    printf("%.3f",s);
    return 0;
}
