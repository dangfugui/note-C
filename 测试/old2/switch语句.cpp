#include<stdio.h>

int main()
{
	char n;
	scanf("%c",&n);
	for(char out = 'A'; out <= n; out++)
	{
		for(int i=0;i<n-out;i++) printf(" ");
		for(char in = 'A';in <= out; in++) printf("%c",in);
		for(char in =out-1;in>='A';in--) printf("%c",in);
		printf("\n");
	}
	return 0;
}