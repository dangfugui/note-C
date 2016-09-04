#include<iostream>
using namespace std;
int main()
{
	int i,a,b,c=0,d=0,n,m,mix,;
	cin>>n;
	m=n;
	cin>>a>>b;
	for(i=1;i<n;i++)
    {
        cin>>c>>d;
        if(c<=a&&d>=a)
        {
            a=c;
            m--;



        }
        if(c<=b&&d>=b)
        {
            b=d;
            m--;

        }
        if(c<=a&&d>=b)
        {
            a=c;
            b=d;
            m--;
        }

        if(c>=a&&d<=b)
        {

            m--;
        }
    }

    cout<<m<<endl;
	return 0;
}
