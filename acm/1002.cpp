#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	unsigned long x,y,i,sum=0;
	cin>>i;
	for(x=1;x<=i;x++)
    {
        for(int a=2;a<=sqrt(x);a++)
        {
            if(x%a==0)
            {
                if(sqrt(x)==x/a)
                    sum++;
                else
                    break;
            }
        }
    }
    cout<<sum<<endl;
        return 0;
}
