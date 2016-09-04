#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
   //ifstream cin("input/5.txt");
    char str[15];
    char aa[11][15];
    char bb[11][15];
    char cc[11][15];
    int a=0,b=0,c=0;
    for(int aaa=0;aaa<11;aaa++){
        strcpy(aa[aaa],"0");
        strcpy(bb[aaa],"0");
        strcpy(cc[aaa],"0");
    }
    int x;
    while(cin>>x>>str){
        //cout<<x<<">"<<str<<endl;
        switch(x){
            case 0:{
                strcpy(aa[a],str);
                a++;
                break;
            }
            case 1:{
                strcpy(bb[b],str);
                b++;
                break;
            }
            case 2:{
                strcpy(cc[c],str);
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
