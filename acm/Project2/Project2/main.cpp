#include <iostream>
using namespace std;
int main()
{
	int i, min, a, b, sum,size;
	cin >> a >> b; 

		size = a;
	int *p = new int[size];
	min = b;

	for (i = 0, sum = 0; i<size; i++)
	{
		cin >> p[i];
		if (p[i]>min)
			sum = sum + p[i];
	}

	cout << sum << '\n';
	return 0;//

}

