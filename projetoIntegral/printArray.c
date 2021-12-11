#include <stdio.h>
void printArray(int arr[]){
    printf("[");
    for(int i = 0; i < elemSize; i++)
      printf("%d ", arr[i]);
    printf("]\n");
}
