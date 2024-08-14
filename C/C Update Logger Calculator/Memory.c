#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Memory.h"

void welcomeMsg() 
{
	printf("\n");
	printf("Marcs Log Tool & Calculator\n");
	printf("-----------------------------------------------------\n");
	printf("This Program Can Append A New Log To The Current updateLog.txt file\n");
	printf("Or Can Read The Current Logs In updateLog.txt\n");
	printf("After Reading Or Appending Logs You Can Access The Calculator\n");
	printf("-----------------------------------------------------\n");
}
	
char userInput()
{
	char fileQuestion = ' ';
	printf("Would you like to append(A) a new log or read(R) the current logs?(R/A):");
	scanf(" %c", &fileQuestion);
	printf("-------------------------------------------------------------------\n");
	return fileQuestion;
}
	

void fileEditor()
{
	char userGuidance = userInput();
	if ( userGuidance == 'A' || userGuidance == 'a' ) 
	{
		printf("Now appending updateLogs.txt Enter } To Exit\n");
		FILE *updateLogs = fopen("updateLogs.txt", "a");
		if (!updateLogs) 
		{
			printf("Couldn't open the file eodLogs.txt");
			exit(EXIT_FAILURE);
		}
		char buffer[1024];
		bool appendLoop = true;
		while (appendLoop)
		{
			fgets(buffer, 1024, stdin);
			if ( strcmp(buffer, "}\n") == 0) 
			{ 
				appendLoop = false;
			}
			else 
			{
				fputs(buffer, updateLogs);
			}
		}
		printf("Logs Appended\n");
		fclose(updateLogs);
		return;
	}
	else if ( userGuidance == 'R' || userGuidance == 'r' ) 
	{
		printf("Now Reading updateLogs\n");
		printf("----------------------\n");
		FILE *updateLogs = fopen("updateLogs.txt", "r");
		if (!updateLogs) 
		{
			printf("Couldn't open the file eodLogs.txt");
			exit(EXIT_FAILURE);
		}
		char fileLine[1024];
		while (fgets(fileLine, 1024, updateLogs)) 
		{
			printf("%s", fileLine);
		}
		printf("----------------------\n");
		fclose(updateLogs);
	}
	else 
	{
		printf("\n");
		printf("Invalid Input Please Press R to read or A to append\n");
	}
	
}

void Calculator() {
	double *numbers = NULL;
	int count;
	int i;
	double nextNum = 0;
	char mathOperator = ' ';
	double result = 0;
	char loopCondition = 'y';
	printf("Simple Math Calculator\n");
	printf("How many numbers will you provide? ");
	scanf(" %d", &count);
	numbers = malloc(count * sizeof(numbers[0]));
	printf("Enter the first number: ");
	scanf("%lf", &result);
	printf("\n");
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
				free(numbers);
				break;
			}
			else {
				result /= nextNum;
				printf("The current result is: %.2f\n", result);
			}
		}
		else {
			printf("Error: Operator Input Error\n");
			free(numbers);
			break;
			}
		
		printf("Press y to continue | Press n to stop:");
		scanf(" %c", &loopCondition);
		if ( loopCondition == 'n' || loopCondition == 'N') {
			free(numbers);
			break;
		}
		
	}		
		
	
}
	
	
	
