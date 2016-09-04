#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char name[101][21];
	int *results=new int[n+1];//成绩
	int *review=new int[n+1];//评议
	char *cadres=new char[n+1];//干部
	char *west=new char[n+1];//西部
	int *paper=new int[n+1];//论文
	int *money=new int[n+1];
	memset(money,0,sizeof(money)*(n+1));
	for(int i=0;i<n;i++){
		cin>>name[i]>>results[i]>>review[i]>>cadres[i]>>west[i]>>paper[i];
	}
	for(int ii=0;ii<n;ii++){
		//cout<<name[ii]<<results[ii]<<review[ii]<<cadres[ii]<<west[ii]<<paper[ii];
		if(results[ii]>80&&paper[ii]>0)
			money[ii]+=8000;
		if(results[ii]>85&&review[ii]>80)
			money[ii]+=4000;
		if(results[ii]>90)
			money[ii]+=2000;
		if(results[ii]>85&&west[ii]=='Y')
			money[ii]+=1000;
		if(review[ii]>80&&cadres[ii]=='Y')
			money[ii]+=850;
	}
	int sum=0,max=0,p;
	for(int a=0;a<n;a++){
		sum+=money[a];
		if(money[a]>max){
			max=money[a];
			p=a;
		}
	}
	cout<<name[p]<<endl;
	cout<<money[p]<<endl;
	cout<<sum<<endl;
	return 0;
}



/*
http://www.rqnoj.cn/problem/16
题目描述
　　某校的惯例是在每学期的期末考试之后发放奖学金。发放的奖学金共有五种，获取的条件各自不同：
　　1) 院士奖学金，每人8000元，期末平均成绩高于80分（>80），并且在本学期内发表1篇或1篇以上论文的学生均可获得；
　　2) 五四奖学金，每人4000元，期末平均成绩高于85分（>85），并且班级评议成绩高于80分（>80）的学生均可获得；
　　3) 成绩优秀奖，每人2000元，期末平均成绩高于90分（>90）的学生均可获得；
　　4) 西部奖学金，每人1000元，期末平均成绩高于85分（>85）的西部省份学生均可获得；
　　5) 班级贡献奖，每人850元，班级评议成绩高于80分（>80）的学生干部均可获得；
　　只要符合条件就可以得奖，每项奖学金的获奖人数没有限制，每名学生也可以同时获得多项奖学金。例如姚林的期末平均成绩是87分，班级评议成绩82分，同时他还是一位学生干部，那么他可以同时获得五四奖学金和班级贡献奖，奖金总数是4850元。
　　现在给出若干学生的相关数据，请计算哪些同学获得的奖金总数最高（假设总有同学能满足获得奖学金的条件）。
输入格式
　输入的第一行是一个整数N（1 <= N <= 100），表示学生的总数。接下来的N行每行是一位学生的数据，从左向右依次是姓名，期末平均成绩，班级评议成绩，是否是学生干部，是否是西部省份学生，以及发表的论文数。姓名是由大小写英文字母组成的长度不超过20的字符串（不含空格）；期末平均成绩和班级评议成绩都是0到100之间的整数（包括0和100）；是否是学生干部和是否是西部省份学生分别用一个字符表示，Y表示是，N表示不是；发表的论文数是0到10的整数（包括0和10）。每两个相邻数据项之间用一个空格分隔。
输出格式
　　输出包括三行，第一行是获得最多奖金的学生的姓名，第二行是这名学生获得的奖金总数。如果有两位或两位以上的学生获得的奖金最多，输出他们之中在输入文件中出现最早的学生的姓名。第三行是这N个学生获得的奖学金的总数。
*/