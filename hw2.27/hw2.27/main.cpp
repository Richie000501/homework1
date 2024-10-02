#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	int i;
	int j;
	int k;
	cin >> i >> j >> k;
	if (i >= j && i >= k) {
		printf("%d is the largest\n", i);
	}
	else if (i <= j && i <= k) {
		printf("%d is the smallest\n", i);
	}
	if (j >= i && j >= k) {
		printf("%d is the largest\n", j);
	}
	else if (i >= j && k >= j) {
		printf("%d is the smallest\n", j);
	}
	if (k >= i && k >= j) {
		printf("%d is the largest\n", k);
	}
	else if (i >= k && j >= k) {
		printf("%d is the smallest\n", k);
	}
}