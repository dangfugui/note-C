#include"iostream"
using namespace std;
#include"cstdio"
#include"cmath"
#define PI 3.141592654
int main ()
{
	int c,j,k;
	cin>>c>>j>>k;
	double a,b;
    a=(double)(c*k)/j;
	b=sqrt(a*a-c*c);
	double s;
	s=PI*a*b;
    printf("%.3f\n",s);
	return 0;
}