#include <stdio.h>
#define N  1000

//����һ���㹻������飬����M�˳���nΪ��ĳ��С����ʼ����; m ΪС������

void main()
{
	int m, M,n;
	printf ("Input: m=? \n");
	scanf ("%d",&m);
	printf ("Input: M=? \n");
	scanf ("%d",&M);
	printf ("Input: n=? \n");
	scanf ("%d",&n);
    int i,current = n,last = m -1 ,count = 1;    //lastΪ��һ���˵��±꣬ currentΪ��ǰ�����˵��±�
    int array[N];                                             //������ģ��Χ��һ��Ȧ

    for(i = 0; i< m; i++)  { array[i] = (i + 1)%m;}//��ʼ��Ȧ
    while(current != last)
    {
        //�������ΪM, ��current�����Ƴ�Ȧ
        if(count == M )
        {
		    printf ("%4d",current);
           array[last] = array[current];//�Թ�����̭�����൱���ó���
            current = array[current];
            count = 1;//Ҫ��count��ԭΪ1
        }
        last = current;
        current = array[current];  //�ѵ�ǰ������ָ����һ��
		} count++;

     printf("%12d \n",current);

}
