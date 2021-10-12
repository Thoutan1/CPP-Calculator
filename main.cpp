#include <iostream>
#include <string>
#include "Module/main.h"

using namespace std;

int main(){
	
	int num1, num2;
	char options;
	
	printf("Enter operator: +, -, *, /: ");
	scanf("%s", &options);

	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	
	Calculation(num1, num2, options);

	return 0;
}