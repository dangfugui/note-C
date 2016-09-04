#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
 //  ifstream cin("input/5.txt");
    long long str;
    long long aa[11]={0};
    long long bb[11]={0};
    long long cc[11]={0};
    int a=0,b=0,c=0;

    int x;
    while(cin>>x>>str){

        switch(x){
            case 0:{
                aa[a]=str;
                a++;
                break;
            }
            case 1:{
                bb[b]=str;
                b++;
                break;
            }
            case 2:{
                (cc[c]=str);
                c++;
                break;
            }
        }
    }
    a--;
    b--;
    c--;
    int i=10;
    while(i--){
        if(a<0) a+=10;
        if(b<0) b+=10;
        if(c<0) c+=10;

        cout<<aa[a]<<' '<<bb[b]<<' '<<cc[c]<<endl;
        a--;
        b--;
        c--;
    }
        return 0;
}
