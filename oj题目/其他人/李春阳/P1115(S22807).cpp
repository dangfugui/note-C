#include"iostream"
#include"cmath"
using namespace std;
struct student
{
	char name[20];
	int average;
	int pingyi;
	char isGanbu;
	char isSheng;
	int num;
};
int main()
{
	struct student stu[110];
	int total[110]={0};
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].average>>stu[i].pingyi>>stu[i].isGanbu>>stu[i].isSheng>>stu[i].num;
	}
	for(int j=0;j<n;j++)
	{
		student s=stu[j];
		if(s.average>80&&s.num>=1)
		{
			total[j]+=8000;
		}
		if(s.average>85&&s.pingyi>80)
		{
			total[j]+=4000;
		}
		if(s.average>90)
		{
			total[j]+=2000;
		}
		if(s.average>85&&s.isSheng=='Y')
		{
			total[j]+=1000;
		}
		if(s.pingyi>80&&s.isGanbu=='Y')
		{
			total[j]+=850;
		}
	}
	int max=0;
	int sum=total[0];
	for(int j=1;j<n;j++)
	{
		sum+=total[j];
		if(total[j]>total[max])
		{
			max=j;
		}
	}
	cout<<stu[max].name<<endl;
	cout<<total[max]<<endl;
	cout<<sum<<endl;
	//system("pause");
	return 0;
}