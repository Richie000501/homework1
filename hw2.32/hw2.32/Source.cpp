#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	float weight,height,BMI;
	printf("輸入你的體重");
	cin >> weight;
	printf("輸入你的身高");
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