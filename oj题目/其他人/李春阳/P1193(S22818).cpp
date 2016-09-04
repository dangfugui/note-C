#include <iostream> 
using namespace std; 
int main() 
{ 
    int s[3000] = {6,2,5,5,4,5,6,3,7,6}; 
    int a[10] = {6,2,5,5,4,5,6,3,7,6}; 
    for (int i = 10; i < 3000; i++) 
    { 
        int t = i; 
        while (t) 
        { 
            s[i] += a[t%10]; 
            t /= 10; 
        } 
    } 
    int n; 
    cin>>n; 
    n -= 4; 
    int count = 0; 
    for (int i = 0; i <= 1500; i++) 
    { 
         for (int j = 0; j <= 1500; j++) 
         { 
             if (s[i] + s[j] + s[i + j] == n) 
             { 
                 count++; 
             } 
         } 
    } 
    cout<<count<<endl; 
    return 0; 
}

