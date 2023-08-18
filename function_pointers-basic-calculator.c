#include <stdio.h>
#define operator 

/**
 * Basic Calculator
 */

float sum(float num1, float num2)
{
	return(num1 + num2);
}

float sub(float num1, float num2)
{
	return(num1 - num2);
}

float div(float num1, float num2)
{
	return(num1 / num2);
}

float mult(float num1, float num2)
{
	return(num1 * num2);
}

int main(void)
{
	float(*ptr_funct[operator]) (float,float) = {sum, sub, div, mult};

	int choice;
	float num1, num2;

	printf("Enter operator: '+' for addition, '-' for subtraction, '*' for multiplication, '/' for divition\n");
	scanf("%d", &choice);

	printf("Enter two numbers: \n");
	scanf("%f %f", &num1, &num2);

	printf("The result is: %f", ptr_funct[choice] (num1, num2));

	return 0;
}
