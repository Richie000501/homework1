#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	int i, j, k, l, m;
	for (i = 1; i <= 5; i++)
	{
		for (j = 4; j >= i; j--) {
			cout << " ";
		}
		for (k = 1; k <= i; k++) {
			cout << "*";
		}
		for (l = 2; l <= i; l++) {
			cout << "*";
		}
		cout << endl;
	}
}