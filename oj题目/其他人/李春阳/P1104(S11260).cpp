#include"iostream"
using namespace std;
#include"algorithm"
struct x
{
	long long a;
	long long b;
	long long c;
};
x y[100001];
bool bigger(x m,x n);
int main ()
{
	long long i=0;
	while(cin>>y[i].a>>y[i].b)
	{   
		y[i].c=i;
		i++;
	}
	sort(y,y+i,bigger);
	for(long long j=0;j<i;j++)
	{
		cout<<y[j].a<<" "<<y[j].b<<endl;
	}
	cout<<endl;
	return 0;

}
bool bigger(x m,x n)
{
	if(m.b>n.b)
		return 0;
	if(m.b==n.b&&m.c>n.c)
		return 0;
	else
		return 1;
}