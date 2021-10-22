#include <stdio.h>
int main(){
	
//1
int x = 5;
int* xPtr = &x;
float y = *xPtr + 3;
int vec[] = {10, 11, 12, 13};

printf ("Value of X: %d\n", x);
printf ("Value of Y: %.2f\n", y);
printf ("address of X: %p\n", &x);
printf ("address of xPtr: %p\n", &xPtr);
printf ("Value of xPtr: %.1f\n", &xPtr);
printf ("address of vec: %p\n", &vec);

int i;
for (i=0; i < sizeof(vec[0]) ; i++){ 
	printf ("Value of Vec %d: %d\n",i , vec[i]);
	}
for (i=0; i < sizeof(vec[0]) ; i++){ 
	printf ("Adress of Vec %d: %p\n",i , &vec[i]);
	}
}

}

