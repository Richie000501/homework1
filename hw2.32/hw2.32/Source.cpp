#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	float weight,height,BMI;
	printf("��J�A���魫");
	cin >> weight;
	printf("��J�A������");
	cin >> height;
	BMI = weight / (height * height/10000);
	printf("your BMI is %f\n", BMI);
	if (BMI <= 18.5) {
		printf("your weight is underweight");
	}
	else if (BMI > 18.5 ) {
		printf("your weight is normal");
	}
	else if (BMI > 24.9 ) {
		printf("your weight is overweight");
	}
	else if (BMI > 29.9) {
		printf("your weight is obese");
	}
}