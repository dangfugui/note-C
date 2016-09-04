#include<iostream>  
using namespace std;  
int main()  
{  
    int i,j,x,a[1000]={0},ok=0;  
    cin>>x;  
    for(i=0;i<=x;i++)  
        cin>>a[i];  
    for(j=x;j>=0;j--)  
    {  
        i=x-j;    //a[i]储存系数，j储存指数   
        if(a[i])    //不等于0才输出   
        {  
            if(a[i]>0)    //大于0的情况（需要输出 "+"）   
            {  
                if(!ok)    //判断是否为第一项   
                {  
                    if(a[i]==1)  
                        cout<<"x^"<<j;  
                    else  
                        cout<<a[i]<<"x^"<<j;   
                    ok=1;  
                }  
                else if(j==1)    //指数为1   
                {  
                    if(a[i]==1)  
                        cout<<"+x";  
                    else  
                        cout<<"+"<<a[i]<<"x";   
                }  
                else if(j==0)    //指数为0   
                    cout<<"+"<<a[i];  
                else    //其它情况   
                {  
                    if(a[i]==1)  
                        cout<<"+x^"<<j;  
                    else  
                        cout<<"+"<<a[i]<<"x^"<<j;   
                }  
            }  
            else    //小于0的情况，具体同上   
            {  
                if(!ok)  
                {  
                    if(a[i]==-1)  
                        cout<<"-x^"<<j;  
                    else  
                        cout<<a[i]<<"x^"<<j;   
                    ok=1;  
                }  
                else if(j==1)  
                {  
                    if(a[i]==-1)  
                        cout<<"-x";  
                    else  
                        cout<<a[i]<<"x";   
                }  
                else if(j==0)  
                    cout<<a[i];  
                else  
                {  
                    if(a[i]==-1)  
                        cout<<"-x^"<<j;  
                    else  
                        cout<<a[i]<<"x^"<<j;   
                }  
            }  
        }  
    }  
    //system("pause");  
    return 0;  
}  