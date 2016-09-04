#include"iostream"
#include"cstring"
using namespace std;
int main()
{
        int p1,p2,p3;
        string str;
        cin>>p1>>p2>>p3;
        cin>>str;
        int num=0;
        int flag[3000]={0};
        for(int i=0;i<str.length();i++)
        {
                if(str[i]=='-')
                {
                        flag[num++]=i;
                }
        }
        if(num==0)
        {
                for(int i=0;i<str.length();i++)
                        cout<<str[i];
                cout<<endl;
                return 0;
        }
        char res[110000];
        long index=0;
        int start=0;
        for(int i=0;i<num;i++)
        {
                int pos=flag[i];
                if(pos==0)
                {
                        res[index++]='-';
                        start=pos+1;
                        continue;
                }
                for(int j=start;j<pos;j++)
                {
                        res[index++]=str[j];
                }
                char s1=str[pos-1];
                char s2=str[pos+1];
                if(((s1>='a'&&s1<='z')&&(s2>='a'&&s2<='z'))||(((s1>='0')&&(s1<='9'))&&((s2>='0')&&(s2<='9'))))
                {
                        if(s2-s1==1)
                        {
                                start=pos+1;
                                continue;
                        }
                        if(s1>=s2)
                        {
                                res[index++]='-';
                                start=pos+1;
                                continue;
                        }
                        if(p3==1)
                        {
                                for(int k=s1+1;k<=s2-1;k++)
                                {
                                        for(int l=0;l<p2;l++)
                                        {
                                                if(p1==1)
                                                {
                                                        res[index++]=(char)k;
                                                }else if(p1==2)
                                                {
                                                        char c=(char)k;
                                                        if(c>='a'&&c<='z')
                                                                c-='a'-'A';
                                                        res[index++]=c;
                                                }else
                                                {
                                                        res[index++]='*';
                                                }
                                        }
                                }
                                start=pos+1;
                                continue;
                        }else
                        {
                                //cout<<"ni"<<endl;
                                for(int k=s2-1;k>=s1+1;k--)
                                {
                                        for(int l=0;l<p2;l++)
                                        {
                                                if(p1==1)
                                                {
                                                        res[index++]=(char)k;
                                                }else if(p1==2)
                                                {
                                                        char c=(char)k;
                                                        if(c>='a'&&c<='z')
                                                                c-='a'-'A';
                                                        res[index++]=c;
                                                }else
                                                {
                                                        res[index++]='*';
                                                }
                                        }
                                }
                                start=pos+1;
                                continue;
                        }
                }else
                {
                        res[index++]=str[pos];
                        start=pos+1;
                        continue;
                }
        }
        for(int i=flag[num-1]+1;i<str.length();i++)
                res[index++]=str[i];
        for(int i=0;i<index;i++)
                cout<<res[i];
        cout<<endl;
        return 0;
}
