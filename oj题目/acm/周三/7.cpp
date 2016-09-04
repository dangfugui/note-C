#include<stdio.h>
#include<iostream>
using namespace std;

int main()

{

long long input,i,n,flag,x=0;

double a;//等差数列的首项不一定为整数
while(cin>>input){
flag=0;
for(n=2;n<=input;n++)

{

a=(2*input+n-n*n)/(2.0*n);//求的首项

if(long(a)==a&&a>0)//如果为整整数，则满足要求

{



x++;
flag++;//flag记录满足要求的数列数

}

}

if(flag==0)   //flag初始为0，通过上面的循环，如果有满足的在则不为0，为0则说明不能写成等差数列
        cout<<-1<<endl;
        else
                cout<<flag<<endl;
}

}
