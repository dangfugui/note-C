#include<iostream>
using namespace std;
int main()
{
    int fun[9][9];
    bool temp=true;
    for(int a=0;a<9;a++)
    {
        for(int b=0;b<9;b++)
        {
            cin>>fun[a][b];
        }
    }
    for(int c=0;c<9;c++)
    {
        for(int d=0;d<9;d++)
        {
            for(int e=0;e<9;e++)
            {
                if(d!=e&&fun[c][d]==fun[c][e])
                {
                   temp=false;
                }
            }
        }
    }
    for(int c=0;c<9;c++)
    {
        for(int d=0;d<9;d++)
        {
            for(int e=0;e<9;e++)
            {
                if(d!=e&&fun[e][c]==fun[d][c])
                {
                    temp=false;

                }
            }
        }
    }
    int sum=0;
   for(int i=0;i<9;i+=3)
   {
      for(int j=0;j<9;j+=3)
      {
          sum=fun[i][j]+fun[i][j+1]+fun[i][j+2]+fun[i+1][j]+fun[i+1][j+1]+fun[i+1][j+2]+fun[i+2][j]+fun[i+2][j+1]+fun[i+2][j+2];
          if(sum!=45)
            temp=false;
            sum=0;
      }

   }
   if(temp)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    return 0;
}
