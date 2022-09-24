#include<stdio.h>
#include<cstdlib>
#include<Windows.h>
#include<cmath>
#include<iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	
	cout << ("\n начало работы\n ");

	int i, j, N;
	float a;
	double S = 0;
	cout << ("\nвведите N: ");
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a = 0.1 * i + 0.2 * j;
			S += sin(a);
		}
	}
	cout << ("\nвыражение будет равно= ") << S;

	return 0;
	system("pause");
}
