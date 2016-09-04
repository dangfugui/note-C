#include"iostream"
#include"cstring"
using namespace std;
int main()
{
        string a[1100];
        int index=0;
        while(cin>>a[index++]);
        bool flag=true;
        for(int i=0;i<index;i++)
        {
                if(a[i]=="$#%^#$tids")
                {
                        flag=false;
                        break;
                }
                if(a[i]=="98dfgoier#")
                {
                        for(int j=i+1;j<index;j++)
                        {
                                if(a[j]=="jdsifu9w8e")
                                {
                                        break;
                                }
                                if(j==index-1)
                                {
                                        flag=false;
                                        break;
                                }
                        }

                }
                if(a[i]=="%^Ihdfskjf")
                {
                        int count=0;
                        for(int j=i+1;j<index;j++)
                        {
                                if(count==10)
                                {
                                        flag=false;
                                        break;
                                }
                                if(a[j]=="#$%^%$^cxk")
                                {
                                        break;
                                }
                                count++;
                        }
                }
        }
        if(flag){
                cout<<"Y"<<endl;
        }else{
                cout<<"N"<<endl;
        }
        return 0;
}
