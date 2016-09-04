#include"iostream"
#include"cstring"
#include"algorithm"
using namespace std;
struct s
{
        int times;
        char alpha;
};
bool comp(struct s s1,struct s s2)
{
        if(s1.times<s2.times)
        {
                return false;
        }else if(s1.times>s2.times)
        {
                return true;
        }else
        {
                if(s1.alpha>s2.alpha)
                        return false;
                return true;
        }
}
char c[110000];
int main()
{
        while(cin>>c)
        {
                struct s ss[26];
                struct s temp;
                temp.times=0;
                temp.alpha=' ';
                for(int i=0;i<26;i++)
                        ss[i]=temp;
                int len=0;
                for(long i=0;i<strlen(c);i++)
                {
                        //cout<<c[i]<<endl;
                        char al=c[i];
                        if(al>='a'&&al<='z')
                        {
                                al-=32;
                        }
                        if(!(al>='A'&&al<='Z'))
                                continue;
                        //cout<<al<<endl;
                        bool flag=false;
                        for(int j=0;j<len;j++)
                        {
                                if(ss[j].alpha==al)
                                {
                                        ss[j].times++;
                                        flag=true;
                                        break;
                                }
                        }
                        if(!flag)
                        {
                                ss[len].times=1;
                                ss[len++].alpha=al;
                        }
                }
                /*for(int j=0;j<len;j++)
                        cout<<ss[j].times<<" "<<ss[j].alpha<<endl;*/
                sort(ss,ss+len,comp);
                for(int k=0;k<len;k++)
                {
                        cout<<ss[k].alpha<<" "<<ss[k].times<<endl;
                }
                cout<<"---"<<endl;

        }
        return 0;
}
