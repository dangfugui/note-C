#include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
     int num[103]={0};
     int n;
     cin>>n;
     char str[103][53]={0};
     for (int i=0;i<n;i++)
     {
         cin>>str[i];
     }   
     char s[53]; 
     for (int j=0;j<n;j++) 
     {     
         int g;  
         cin>>s;      
     for (g=0;g<n;g++) 
     {        
         if (!strcmp(str[g],s))
         {   
             break;   
         }     
     }   
     int qian,ji;
     int pingjun; 
     int sheng;
     cin>>qian>>ji;    
     if (ji) 
     {         
         pingjun = qian / ji;
         sheng=qian-pingjun*ji;
         num[g]=num[g]-qian+sheng; 
     for (int k=0;k<ji;k++)
     {        
         cin>>s;  
     for (int l=0;l<n;l++)
     {      
         if (!strcmp(str[l],s))
         {      
             num[l]+=pingjun;  
         }           
     }              
     }
     }
     }
     for (int x=0;x<n;x++) 
     {       
         cout<<str[x]<<" "<<num[x]<<endl;
     }  
     return 0;
 }