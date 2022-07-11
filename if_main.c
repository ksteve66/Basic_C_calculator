#include <stdio.h>
#include <stdlib.h>

/**
* main - performs basic maths functions; add, subtract,  multipliply and divide
* Return: 0
*/

int main(void)
{
	double num1;
	double num2;
	char op;

	printf("Enter a number: ");
	scanf("%lf", &num1);
	printf("Enter an operator: ");
	scanf(" %c", &op);
	printf("Enter a number: ");
	scanf("%lf", &num2);

	if (op == '+')
	{
		printf("The sum of the numbers is: %lf", num1 + num2);
	}
	else if (op == '-')
	{
		printf("The defference of the numbers is: %lf", num1 - num2);
	}
	else if (op == '*')
	{
		printf("The multiple of the numbers is: %lf", num1 * num2);
	}
	else if (op == '/')
	{
		printf("The quotient of the numbers is: %lf", num1 / num2);
	}
	else
	{
		printf("Your operator is not correct! \nTry again.");
	} return 0;
}
