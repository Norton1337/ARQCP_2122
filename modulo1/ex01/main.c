#include <stdio.h>

int main(){

	int x = 5;
	int* xPtr = &x;
	float y = *xPtr + 3;
	int vec[] = {10, 11, 12, 13};
	
	printf("x = %d\n",x);
	printf("y = %f\n\n",y);
	
	printf("&x = %p\n",&x);
	printf("&xPtr = %p\n\n",&xPtr);
	
	printf("xPtr = %d\n\n", *xPtr);
	
	printf("&vec = %p\n\n",&vec);
	
	printf("vec[0] = %d\n",vec[0]);
	printf("vec[1] = %d\n",vec[1]);
	printf("vec[2] = %d\n",vec[2]);
	printf("vec[3] = %d\n\n",vec[3]);
	
	printf("&vec[0] = %p\n",&vec[0]);
	printf("&vec[1] = %p\n",&vec[1]);
	printf("&vec[2] = %p\n",&vec[2]);
	printf("&vec[3] = %p\n",&vec[3]);

	//b) the address of vec points to the start of its values, vec[0] has the same value as vec.
	//   an int occupies 4bytes and each address of vec (vec[0], vec[1], ...) is 4 bytes apart.
	
	//c) the address would be different as the allocation of memory of each computer varies.
}
