#include <stdio.h>
#include <stdlib.h>
#include "linkage.h"

int main(){
	
	char operator;
	double firstNum, secondNum = 0;
	double globalResult;
	double localResult;
	printf("Marcs Simple Calculator\n");
	printf("--------\n");
	printf("Enter An Operator(+, -, /, *): ");
	scanf("%c", &operator);
	printf("Enter Number One: ");
	scanf("%lf", &firstNum);
	printf("Enter Number Two: ");
	scanf("%lf", &secondNum);
	globalResult = calculator(operator, firstNum, secondNum);
	printf("The result is: %.2f\n", globalResult);
	
}
