#include<iostream>  //输入输出
using namespace std;
int main(){
    long n;
    cin>>n;
    long *s=new long[n+5];
    for(long a=0;a<n;a++){
        cin>>s[a];
    }
    long ans=0;
    for(long i=0;i<n;i++){
        long p=i;
        long num=0;
        while(true){
            p=(p+1)%n;
            if(p=i-1){
                break;
            }
            if(i==0&&p==(n-1)){
                break;
            }
            if(s[p]>s[i]){
                break;
            }else{

                if(p==i+1||p==i-1||p==i){
                    continue;
                }
                if(i==0&&p==n-1){
                    continue;
                }

                num++;
            }
        }
        ans=ans+num;
        cout<<i<<":"<<ans<<endl;
    }
	return 0;
}
