#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	int i, j;
	cin >> i >> j;
	if (i % j == 0)
	{
		cout << i << " is a mulitple of the "<<j;
	}
	else
	{
		cout<< i << " is not a mulitple of the " << j;
	}
}