#include <stdio.h>
#include <string.h>


int main(void){
	/*
	union union_u1{
		char vec[32];
		float a;
		int b;		
	} u;
	
	union union_u1 * ptr = &u;
	strcpy(ptr->vec, "arquitectura de computadores" );
	printf( "[1]=%s\n", ptr->vec);
	ptr->a = 123.5;
	printf( "[2]=%f\n", ptr->a);
	ptr->b = 2;
	printf( "[3]=%d\n", ptr->b);

	printf( "[1]=%s\n", ptr->vec);
	printf( "[2]=%f\n", ptr->a);
	printf( "[3]=%d\n", ptr->b);
	*/
	struct struct_s1{
		char vec[32];
		float a;
		int b;		
	} s;
	
	struct struct_s1 * ptr = &s;
	strcpy(ptr->vec, "arquitectura de computadores" );
	printf( "[1]=%s\n", ptr->vec);
	ptr->a = 123.5;
	printf( "[2]=%f\n", ptr->a);
	ptr->b = 2;
	printf( "[3]=%d\n", ptr->b);

	printf( "[1]=%s\n", ptr->vec);
	printf( "[2]=%f\n", ptr->a);
	printf( "[3]=%d\n", ptr->b);


	/*
	 * Each element of struct has each own memory space
	 * This is not the case with unions, only 1 element
	 * may use the memory at a time 
	 * 
	 */
	return 0;
}
