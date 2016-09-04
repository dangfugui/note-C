#include <iostream>
#include<fstream>
    //ifstream fin("in.file");
    //ofstream fout("out.file");
using namespace std;

int main(){
        int t ;
        ifstream fin("input/3.in");
        ofstream fout("output/33.out");

        fin>>t;
        while(t--){
                int n;
                fin>>n;
                long *dui=new long[n+1];
                int in=1,out=0;
                while(n--){
                                cout<<t<<" >>>"<<n<<endl;


                        char m[6];
                        fin>>m;
                        switch(m[1]){
                            case 'U' :{
                                long aa;
                                fin>>aa;
                                dui[in]=aa;
                                in++;
                                break;
                            }case 'O':{
                                if(out+1==in){

                                }else{
                                        out++;
                                }
                                break;
                            }case 'I':{
                                for(int e=out+1;e<in;e++){
                                        dui[e]=-dui[e];
                                }
                                break;
                            }case 'A':{
                                    if(out+1!=in){
                                        long max=dui[out+1];
                                        for(int i=out+1;i<in;i++){
                                                if(dui[i]>max)max=dui[i];
                                        }

                                        fout<<max<<endl;
                                    }else{
                                        fout<<endl;
                                    }
                                break;
                            }
                        }
                }
        }

        return 0;
}
