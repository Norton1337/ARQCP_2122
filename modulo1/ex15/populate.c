#include <stdlib.h>
void populate( int *vec , int num, int limit){

	srand(423);
	for(int i=0;i<num;i++){
		*(vec+i)=(rand() % (limit +1));
	}
}
