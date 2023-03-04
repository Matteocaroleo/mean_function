#include "mean.h"
#include <stdio.h>

int main (){
	int a,b =0;	//Operand used for mean
	printf("This program computes the mean of two integers:\nType the first number: ");
	scanf("%i",&a);
	printf("\nType the second number: ");
	scanf("%i",&b);
	printf("\nRes : %f\n", mean(a,b));
	return 0;
}
