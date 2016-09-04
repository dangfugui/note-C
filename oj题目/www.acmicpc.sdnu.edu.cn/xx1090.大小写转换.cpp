#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;

	while(getline(cin,str,'\n'))
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(i==0&&str[0]>='a'&&str[0]<='z')
            {
                str[i]-=32;
            }
            if(str[i-1]==' '&&str[i]>='a'&&str[i]<='z')
            {
				//i++;
                str[i]-=32;
            }
        }
        cout<<str<<endl;


    }
    return 0;
}
