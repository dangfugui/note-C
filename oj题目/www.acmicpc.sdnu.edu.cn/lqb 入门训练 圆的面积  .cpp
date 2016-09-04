#include<iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;
int main()
{
   long double s,r;
    cin>>r;
    s=r*r*3.14159265358979323;
    cout<<fixed<<setprecision(7) <<s<< endl;
    return 0;
}
