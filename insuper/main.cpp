#include<iostream>  //输入输出
#include<stdio.h>
#include<cstring>   //字符串
#include<cmath>    //数学
#include<algorithm> //算法
#include<fstream>   //文件
#include<sstream>  //c++字符串流(常用于格式转换)
using namespace std;
template<typename T> void mswap(T& t1, T& t2) {
    T tmpT;
    tmpT = t1;
    t1 = t2;
    t2 = tmpT;
}
int main(){
    int a=1,b=2;
   mswap<int>(a,b);
   cout<<a<<b<<endl;

    return 0;
}

