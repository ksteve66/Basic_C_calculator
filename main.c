#include <stdio.h>
#include <stdlib.h>

/**
* main.c
* Basic calculator (+, -, *, /)
*/

int main(void)
{
	char op;
	double num1, num2;

	printf("enter an operator between (+, -, *, /): ");
	scanf("%c", &op);

	printf("enter the first number: ");
	scanf("%lf", &num1);

	printf("enter the second number: ");
	scanf("%lf", &num2);

	switch (op)
	{
		case '+':
			printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
			break;
		case '-':
			printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
			break;
		case '*':
			printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
			break;
		case '/':
			printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
			break;

		/*when operator used does not match those in the bracket*/
		default:
			printf("Error! operator does not match any of those in the bracket \n");
		} return 0;
}
