#include <stdio.h>
#define N  1000

//定义一个足够大的数组，数到M退出；n为从某个小孩开始计数; m 为小孩总数

void main()
{
	int m, M,n;
	printf ("Input: m=? \n");
	scanf ("%d",&m);
	printf ("Input: M=? \n");
	scanf ("%d",&M);
	printf ("Input: n=? \n");
	scanf ("%d",&n);
    int i,current = n,last = m -1 ,count = 1;    //last为上一个人的下标， current为当前报数人的下标
    int array[N];                                             //用数组模拟围成一个圈

    for(i = 0; i< m; i++)  { array[i] = (i + 1)%m;}//初始化圈
    while(current != last)
    {
        //如果报数为M, 把current号人移出圈
        if(count == M )
        {
		    printf ("%4d",current);
           array[last] = array[current];//略过被淘汰的人相当于拿出来
            current = array[current];
            count = 1;//要把count还原为1
        }
        last = current;
        current = array[current];  //把当前报数者指向下一个
		} count++;

     printf("%12d \n",current);

}
