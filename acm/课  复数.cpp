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
void multiply(plural &r3,plural r2,plural r1)��
{
    r3.a=r1.a*r2.a-r1.b*r2.b;
    r3.b=r1.a*r2.b+r1.b*r2.a;
}
void get(plural &r5)
{
    cout<<"�����븴����\n";
    cin>>r5.a>>r5.b;
}
void put(plural r6)
{
    if(r6.b>=0)
    {
        cout<<"�õ��ĸ���Ϊ��"<<r6.a<<"+"<<r6.b<<"i\n";
    }
    else
    {
        r6.b=-r6.b;
        cout<<"�õ��ĸ���Ϊ��"<<r6.a<<"-"<<r6.b<<"i\n";
    }
}




int main()
{
    plural x,y,z;
    char c;
    cout<<"����Ҫ�������������ļ��㡣\n\n";
    get(x);
    get(y);
    cout<<"ѡ��Ҫ���еļ��㣺\n";
    cin>>c;
   b: switch(c)
    {
        case '+': add(z,x,y);break;
        case '-': cut(z,x,y);break;
        case '*': multiply(z,x,y);break;
        default : cout<<"������������������";goto b;
    }
    put(z);
}
