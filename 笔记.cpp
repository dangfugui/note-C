#include<iostream>  //输入输出
#include<stdio.h>
#include<cstring>   //字符串
#include<cmath>    //数学
#include<algorithm> //算法
#include<fstream>   //文件
#include<sstream>  //c++字符串流(常用于格式转换)

#include<vector>    //变长数组
#include<set>       //set集合 内没有相同的值
//#include"out.cpp"
#define pai 3.1415926
using namespace std;

char mychar[1024]="mychar[1024]";int myint=10;
class name{//对象 name a;a.add();
public:     void add(){total++;};
private:    int total=0;
};
struct box{//结构体 box b;b.length=10;
    double length,width,height;
};
/*my_c()*//*my_c()*//*my_c()*//*my_c()*//*my_c()*/
void my_c(){
    //int=4 float=4 double=8 long double=10
    const double PI=3.1415926;  //常量 只能赋值一次8
    static char char_in[1024]; //静态变量    都能改变值
    register int count_often=100;    //寄存器遍历  常用4
    extern int outfile;//外部变量    已经在其他文件中定义
    int *change=new int[count_often];
    int **mlist  =new int*[count_often+1];//动态数组
        mlist[0]=new int[7];
//循环  嵌套
    for(int i=0;i<1;i++){
        continue;//跳过本次循环
    }
    while(true){
       break; //跳出循环
    }
    do{}while(false);
//选择语句 分支
    if(0){}else if(1){}else{};
    switch(count_often){case 0:break;default:break;}
    if(strlen(char_in)>100){
        cin>>char_in;
        cin.getline(char_in,sizeof(char_in),'\n');
//占位符%c字符 %s字符串 %a浮点 %d整型 %(3.2)f,%e,%g 实数,小数形式或指数
//%o八进制 %x十六进制 %i 读入十进制，八进制，十六进制整数
        scanf("%s",&char_in);           //输入 比较快
        printf("%s----%3.4d\n",char_in,PI);
    }
    return; //函数返回值，结束函数
}


/*my_char()*//*my_char()*//*my_char()*//*my_char()*/
void my_char(){
    //<cstring><string.h>
    char aaa[100]="aaaaa";
    char bbb[100]="bb";
    strlen(aaa);           //长度
    strcpy(aaa,bbb);       //复制
    strcat(aaa,bbb);       //加到
    strcmp(aaa,bbb);       //比较-1  0  1
    memset(aaa,0,sizeof(aaa));//置0
    string s = "string to char";       //string转char*
    char *c=new char[s.length()+1];
    strcpy(c,s.c_str());
}

/*my_string()*//*my_string()*//*my_string()*/
void my_string(){
    string str="this is string";
    string b="ef";
    char* ch="char* to string";//char c[] 转string
    string ch_str(ch);  ch_str=ch;
    int look=str.find(b);    //查找
    str.length();         //长度
    str.size();           //长度
    str=b.substr(1,2);    //取子串
    if(false)
    getline(cin,str,'\n');//输入行  可接受空格 getline(cin,a);
}


/*math()*//*math()*//*math()*//*math()*//*math()*/
void math(){
    //#include<cmath>
	fabs(-5);				//绝对值
	sqrt(4);				//根号
	pow(10,3);				//指数
}

int mymin(int a,int b){if(a<b) return 1;else return 0;}
/*algorithm()*//*algorithm()*//*algorithm()*//*algorithm()*/
void algorithm(){
    //<algorithm>
    rand()%11;   //0-11随机数
    int a[]={3,2,1};
    sort(a,a+sizeof(a)/sizeof(int),mymin);//排序
    cout<<"lower_bound:"<<lower_bound(a,a+sizeof(a),3)-a<<endl;//返回序列中第一个大于或等于“3”的地址
    next_permutation(a,a+sizeof(a)/sizeof(int));//STL全排列函数  n为数组长度 当遍历完后返回false
    //如果存在a之后的排列，就返回true。如果a是最后一个排列没有后继，返回false字典升序排序的最大值

    /*do{
        for(int i=0;i<sizeof(a)/sizeof(int);i++){cout<<a[i]<<",";}cout<<endl;
     }while(next_permutation(a,a+sizeof(a)/sizeof(int)));*/
}

/*file()*//*file()*//*file()*//*file()*/
void file(){
    //#include<fstream>
    ifstream fin("input.txt");      //in-fstream写入流
    ofstream fout("output/out.txt");//out-fstream写出流
    fin.getline(mychar,sizeof(mychar),'\n');
    fout<<mychar<<endl;

    FILE* f_in=fopen("input.txt","r");
    FILE* f_out=fopen("output/out.txt","w++");
    fscanf(f_in,"%s",&mychar);
    fprintf(f_out,"fprintf:\n%s",mychar);
}

/*sstream()字符串流*//*sstream()字符串流*//*sstream()字符串流*/
void sstream(){
    //#includde<sstream>c++字符串流(常用于格式转换)
   // sprintf(mychar,"%d",myint);//#include<stdio.h> int转char*
    //sscanf(mychar,"%d",&myint);//char写入int
    stringstream strstream;            //#c
    strstream<<mychar;                  //把字符串读到流里
    strstream>>myint;
    cout<<"strstream.str():"<<strstream.str()<<endl;        //把流转换成字符串
    strstream.clear();//在进行多次转换前，必须清除stream
}
/////////泛型/////
template<typename T> void mswap(T& t1, T& t2) {
    T tmpT;tmpT = t1;t1 = t2;t2 = tmpT;
}
void STL(){
    mswap<int>(myint,myint);    //模板的使用
    vector<int> vec;            //变长数组  #include<vector>
    vec.reserve(15);            //设置长度
    for(int i=0; i<10; i++) vec.push_back(i); //把i加到数组尾
    vec[11]=11;         //赋值(非法赋值 不改变vec.size()值)
    vec.pop_back();     //删除vec尾部
    //vec.erase(2);     //删除位置在1-2的数据
    cout<<"vec.at(n):"<<vec.at(7)<<endl;//n所指的数据，越界抛出out_of_range

    set <int> st{1,2,3,4,5};    //#include<set> set集合 内没有相同的值
    st.insert(5);               //已经存在5，不会插入
    st.erase(3);                //删除键值为6的元素
    set<int>::iterator it;      //定义前向迭代器
    it = st.find(4);             //利用迭代器查找键值为4的元素返回迭代器位置找不到返回st.end();
    for(it = st.begin(); it != st.end(); it++)  //利用迭代器序遍历集合中的所有元素
        cout << *it << " ";cout << endl;
}

/*main()*//*main()*//*main()*//*main()*//*main()*/
int main(){

    my_c();     //C语言基础
    my_char();  //字符串
    my_string();//string
    algorithm();//算法
    file();     //文件
    sstream();  //c++字符串流(常用于格式转换)
    STL();
    mswap<int>(a,b);
    cout<<"笔记检测完毕"<<endl;
    return 0;
}




