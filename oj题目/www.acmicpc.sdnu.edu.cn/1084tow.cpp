#include"iostream"
#include<fstream>
using namespace std;
int main()
{
    ofstream cout("1084.txt");
         long long bs[100001];
        bs[1]=1;
        bs[2]=2;
        bs[3]=4;
        for(int i=4;i<=100000;i++){
            bs[i]=bs[i-1]+bs[i-2]+bs[i-3];
            bs[i]%=1000000007;
        }
        long n=1;
        while(n<1000){
            //[n=Integer.parseInt(scan.nextLine())
            cout<<bs[n]<<endl;
            n++;
        }
        //scan.close();
        return 0;
}
