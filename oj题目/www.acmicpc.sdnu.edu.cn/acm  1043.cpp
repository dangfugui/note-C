#include <iostream>
using namespace std;

int main()
{
	int bags[1002]={0};
	int values[1002]={0};
	int weights[1002]={0};
	int bag,kind,max=0;
	cin>>bag>>kind;
	while(kind--)
	{
		int weight,value;
		cin>>weight>>value;
		for(int i=0;i<=bag;i++)
		{
			if(i-weight>=0)
			{
				if(bags[i]<bags[i-weight]+value)
				{
					bags[i]=bags[i-weight]+value;
					if(max<bags[i])
						max=bags[i];
				}
			}
		}
	}
	cout<<max<<endl;



        return 0;
}