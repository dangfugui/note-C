#include"iostream"
#include"cstring"
using namespace std;
int main()
{
        string n;
        int p,len;
        while(cin>>n>>p)
        {
                len=n.length();
        int s[110000];
        long index=0;
        long start=0;
        //cout<<len<<endl;
        for(int i=1;i<=len-p;i++)
        {
                int max=-1;
                for(int j=start;j<=p+i-1;j++)
                {
                        //cout<<n[j]-'0'<<endl;
                        if((n[j]-'0')>max)
                        {
                                max=n[j]-'0';
                                start=j+1;
                                //cout<<"start:"<<start<<endl;
                        }
                }
                //start++;
                s[index++]=max;
        }
        s[index]='\0';
        for(int i=0;i<index;i++)
                cout<<s[i];
        cout<<endl;
        }
        return 0;
}
