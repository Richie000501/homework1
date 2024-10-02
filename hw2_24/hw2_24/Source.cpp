#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int i , j;
	cin >> i >>j;
	if (i % 2 == 0) {
		cout << i << " is even"<<endl;
	}
	else
	{
		cout << i << " is odd" << endl;
	}
	if (j % 2 == 0) {
		cout << j << " is even" << endl;
	}
	else
	{
		cout << j << " is odd" << endl;
	}
}