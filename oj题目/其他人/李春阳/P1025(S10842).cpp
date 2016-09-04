#include"iostream"
using namespace std;
    bool can=false;
  	int xx[]={1,1,-1,-1,2,2,-2,-2};
	int yy[]={2,-2,2,-2,1,-1,1,-1};
	int stx,sty,edx,edy;
void run(int x,int y,int r);
int main ()
{  
   cin>>stx>>sty;
   cin>>edx>>edy;
   run(stx,sty,0);
   if(can)
	   cout<<"Y"<<endl;
   else
	   cout<<"N"<<endl;
   return 0;
   
}
void run(int x,int y,int r)
{   

    if(r>4) 
	return;
    if(edx==x&&edy==y)
	{
     can=true;
	 return;
    }
    for(int i=0;i<8;i++)
	    run(x+xx[i],y+yy[i],r+1);
}