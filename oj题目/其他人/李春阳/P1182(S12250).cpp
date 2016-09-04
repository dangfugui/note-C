#include<iostream>
#include<algorithm>
using namespace std;

struct student{
	int a,b,c,sum,id;
};

int pan(student x,student y)
{
	if(x.sum>y.sum)
		return 1;
	if(x.sum<y.sum)
		return 0;
	if(x.a>y.a)
		return 1;
	if(x.a<y.a)
		return 0;
	if(x.id>y.id)
		return 0;
	if(x.id<y.id)
		return 1;
}
int main()
{
	int i,n;
	cin>>n;
	student st[305];
	for(i=0;i<n;i++)
	{
		cin>>st[i].a>>st[i].b>>st[i].c;
		st[i].id=i+1;
		st[i].sum=st[i].a+st[i].b+st[i].c;
	}
	sort(st,st+n,pan);
	for(i=0;i<5;i++)
	{
		cout<<st[i].id<<' '<<st[i].sum<<endl;
	}
	return 0;
}