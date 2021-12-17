#include <stdio.h>
#include "rotate_left.h"
#include "rotate_right.h"

int main(void){
	
	int resRight = rotate_right(5,3);
	printf("right = %d\n",resRight);
	
	int resLeft = rotate_left(5,3);
	printf("left = %d\n",resLeft);
}
