#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[100]={'\0'};
    int n;
    cin>>n>>str;
    for(int a=0;a<strlen(str);a++){
        str[a]=((str[a]-'a')+n)%26+'a';
    }
    cout<<str<<endl;
    return 0;
}
