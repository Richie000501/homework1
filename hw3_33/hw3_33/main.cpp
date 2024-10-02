#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d, e ,money;
	cout<<"請輸入一整天的總里數";
	cin >> a;
	cout<<"汽油一公升多少錢";
	cin >> b;
	cout<<"平均一公升能行駛多少公里";
	cin >> c;
	cout<<"一天的停車費";
	cin >> d;
	cout<<"一天的通行費(過路費)";
	cin >> e;
	money = a / c * b + d + e;
	cout <<"一天總車馬費為" << money;

}