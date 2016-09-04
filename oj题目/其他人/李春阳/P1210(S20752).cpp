#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
    char d[11][15];
    char f[11][15];
    char g[11][15];
    char str[15];
    int a=0,b=0,c=0;
    for(int aaa=0;aaa<11;aaa++){
        strcpy(d[aaa],"0");
        strcpy(f[aaa],"0");
        strcpy(g[aaa],"0");
    }
    int x;
    while(cin>>x>>str){
        //cout<<x<<">"<<str<<endl;
        switch(x){
            case 0:{
                strcpy(d[a],str);
                a++;
                break;
            }
            case 1:{
                strcpy(f[b],str);
                b++;
                break;
            }
            case 2:{
                strcpy(g[c],str);
                c++;
                break;
            }
        }
    }
    a--;
    b--;
    c--;
    int vv=10;
    while(vv--){
        if(a<0) a+=10;
        if(b<0) b+=10;
        if(c<0) c+=10;

        cout<<d[a]<<' '<<f[b]<<' '<<g[c]<<endl;
        a--;
        b--;
        c--;
    }
    return 0;
}
