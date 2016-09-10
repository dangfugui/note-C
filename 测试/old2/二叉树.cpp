#include<iostream>
#define date int
using namespace std;

    struct tree
    {
        date d;
        tree *l;
        tree *r;

    };
int main()
{
    tree *t,*n=new tree;
    n=t;
    date i;
    while(cin>>i)
    {
        if(i==0)break;
        t->d=i;
        t->l=new tree;
        t=t->l;
    }
    t=n;
    while(t)
    {
        cout<<t->d<<endl;
        t=t->l;
    }


}
