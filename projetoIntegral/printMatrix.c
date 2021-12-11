#include <stdio.h>
void printMatrix(int matrix[num][num][num]){
  printf("\nMatrix is :\n");
    for(int x=0;x<num;x++)
    {
        for(int y=0;y<num;y++)
        {
            for(int z=0;z<num;z++){
                printf("%d\t",matrix[x][y][z]);
            }
            printf("|");
        }
        printf("\n");
    }
}
