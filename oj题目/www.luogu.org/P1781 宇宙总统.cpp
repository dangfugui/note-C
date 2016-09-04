#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
class boy{
    public:
        int id;
        char num[500];
};
int fun(boy a,boy b){
    if(strlen(a.num)>strlen(b.num)){
        return 0;
    }else if(strlen(a.num)<strlen(b.num)){
        return 1;
    }else{
        if(strcmp(a.num,b.num)==1){
        return 0;
        }else{
            return 1;
        }
    }

}
int main(){
    char a[100],bb[100];

    int n;
    cin>>n;
    boy *b=new boy[n+1];
    for(int a=0;a<n;a++){
        cin>>b[a].num;
        b[a].id=a;
    }
    sort(b,b+n,fun);


    cout<<b[n-1].id+1<<endl;
    cout<<b[n-1].num<<endl;
    return 0;
}

/*
地球历公元6036年，全宇宙准备竞选一个最贤能的人当总统，共有n个非凡拔尖的人竟选总统，现在票数已经统计完毕，请你算出谁能够当上总统。
 输入输出格式 Input/output
输入格式：
president.in
第一行为一个整数n,代表竞选总统的人数。
接下来有n行，分别为第一个候选人到第n个候选人的票数。
输出格式：
president.out
共两行，第一行是一个整数m，为当上总统的人的号数。
第二行是当上总统的人的选票。
*/
