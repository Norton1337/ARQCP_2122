#include <stdio.h>
#include "asm.h"

int code=0;
int currentSalary=0;

int main(void){

	int testNewSalary = new_salary();
	
	printf("new_salary = %hhd\n", testNewSalary);
}
