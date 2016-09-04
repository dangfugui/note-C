#include<iostream>
#include"cstdio"
#include"algorithm"
using namespace std;
int main()
{
 int w,n,sum,i,j;
 int a[30001];
 scanf("%d",&w);
 //while(w!=0)
 //{
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  sort(a,a+n);
  i=0,j=n-1;
  sum=0;
  if(a[i]>=w)
   printf("%d",n);
  else
  {
   while(i<=j)
   {
    if(i==j){sum++;break;}
    else if(a[i]+a[j]<=w){ sum++;i++;j--;}
    else if(a[i]>=w){sum+=j-i;break;}
    else{sum++;j--;}
   }
   printf("%d\n",sum);
  }
  //scanf("%d",&w);
// }
 return 0;
}
