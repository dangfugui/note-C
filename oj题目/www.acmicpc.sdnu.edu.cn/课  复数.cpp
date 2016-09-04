#include<iostream>
using namespace std;
class plural{
public:
    float a;
    float b;
    void add(plural r3,plural r2,plural r1);
    void cut(plural r3,plural r2,plural r1);
    void multiply(plural r3,plural r2,plural r1);
    void get(plural r5);
    void put(plural r6);
private:


};
void add(plural &r3,plural r2,plural r1)
{
    r3.a=r2.a+r1.a;
    r3.b=r2.b+r1.b;
}
void cut(plural &r3,plural r2,plural r1)
{
    r3.a=r2.a-r1.a;
    r3.b=r2.b-r1.b;
}
void multiply(plural &r3,plural r2,plural r1)啊
{
    r3.a=r1.a*r2.a-r1.b*r2.b;
    r3.b=r1.a*r2.b+r1.b*r2.a;
}
void get(plural &r5)
{
    cout<<"请输入复数：\n";
    cin>>r5.a>>r5.b;
}
void put(plural r6)
{
    if(r6.b>=0)
    {
        cout<<"得到的复数为："<<r6.a<<"+"<<r6.b<<"i\n";
    }
    else
    {
        r6.b=-r6.b;
        cout<<"得到的复数为："<<r6.a<<"-"<<r6.b<<"i\n";
    }
}




int main()
{
    plural x,y,z;
    char c;
    cout<<"我们要进行两个复数的计算。\n\n";
    get(x);
    get(y);
    cout<<"选择要进行的计算：\n";
    cin>>c;
   b: switch(c)
    {
        case '+': add(z,x,y);break;
        case '-': cut(z,x,y);break;
        case '*': multiply(z,x,y);break;
        default : cout<<"输入有误请重新输入";goto b;
    }
    put(z);
}
