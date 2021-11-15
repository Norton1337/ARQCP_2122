#include <stdio.h>
#include "asm.h"

int num1=5;
int num2=6;

int main(void){

	int testSum = sum();
	printf("sum = %d\n",testSum);
	
	int testSubtraction = subtraction();
	printf("subtraction = %d\n",testSubtraction);
	
	int testMultiplication = multiplication();
	printf("multiplication = %d\n",testMultiplication);
	
	int testDivision = division();
	printf("division = %d\n",testDivision);
	
	int testModulus= modulus();
	printf("modulus = %d\n",testModulus);
	
	int testPowerOf2= powerOf2();
	printf("powerOf2 = %d\n",testPowerOf2);
	
	int testPowerOf3= powerOf3();
	printf("powerOf3 = %d\n",testPowerOf3);
	
}
