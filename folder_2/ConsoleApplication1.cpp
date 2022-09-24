#include<stdio.h>
#include<cstdlib>
#include<Windows.h>
#include<cmath>
#include<iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, k;
	cout << ("k=");
	cin >> k;
	n = 0;
	for (int i = 1; i < sqrt(k); i++)
	{
		if (k % i == 0) n++;
	}
	if (n == 1) cout << ("1");
	else cout << ("0");


	return 0;
	system("pause");
}