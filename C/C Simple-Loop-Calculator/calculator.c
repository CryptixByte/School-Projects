#include <stdio.h>
#include "calculator.h"

/*
I used stackoverflow to figure out how to implement rounding to the second place.
Link: https://stackoverflow.com/questions/1343890/how-do-i-restrict-a-float-value-to-only-two-places-after-the-decimal-point-in-c  
*/

/*
I used geeksforgeeks.org to learn how to put if statements into my code and learned its very similar to C++
Link: https://www.geeksforgeeks.org/c-if-statement/
*/

/*
I used geeksforgeeks.org to learn about how to implement a loop into my code and also learned it was very similar to C++
Link: geeksforgeeks.org/c-loops/
*/
void Calculator() {
double firstNum = 0;
double nextNum = 0;
double continuedNum = 0;
char mathOperator = ' ';
double result = 0;
char loopCondition = 'y';
printf("Simple Math Calculator\n");
printf("Enter the first number: ");
scanf("%lf", &firstNum);
printf("\n");
result = firstNum;
while (loopCondition == 'y' || loopCondition == 'Y') {
	printf("Enter A Operator(+, *, /, -): ");
	scanf(" %c", &mathOperator);
	printf("Enter the next number: ");
	scanf("%lf", &nextNum);
	if (mathOperator == '+') {
		result += nextNum;
		printf("The current result is: %.2f\n", result);
		}

	else if (mathOperator == '-') {
		result -= nextNum;
		printf("The current result is: %.2f\n", result);
		}

	else if (mathOperator == '*') {
		result *= nextNum;
		printf("The current result is: %.2f\n", result);
		}

	else if (mathOperator == '/') {
		if (nextNum == 0) {
			printf("Error: Zero Division Error ");
			break;
			}
		else {
			result /= nextNum;
			printf("The current result is: %.2f\n", result);
			}
	}
	else {
		printf("Error: Operator Input Error\n");
		break;
		}
	printf("Press y to continue | Press n to stop:");
	scanf(" %c", &loopCondition);
	if ( loopCondition == 'n' || loopCondition == 'N') {
		break;
		}
	}


}