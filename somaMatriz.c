#include <stdio.h>
#include <stdlib.h>

int main() {

    int size    = 3;
    int i, j, mat[size][size];
    int result1 = 0;
    int result2 = 0;


    srand(time(NULL));
   
    for(i = 0; i < size; i++){
        for(j = 0;  j < size; j++){
            mat[i][j] = rand() % 100;
        }
    }

   for(i = 0; i < size; i++){
       for(j = 0; j < size; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\nDiagonal Principal: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", mat[i][i]);
    }

    printf("\n\nSoma Diagonal Principal: ");
    for(i=0;i < size ;i++)
    {
        result1 += mat[i][i];    
    }
    printf("%d", result1);
               
    

    printf("\n\nDiagonal Secundaria: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", mat[i][size - 1 - i]);
    }

    printf("\n\nSoma Diagonal Secundaria: ");
    for(i = 0; i < size; i++)
    {
        result2 += mat[i][size - 1 - i];
    }    
    printf("%d", result2);
    


    printf("\n\n");

    return 0;
}
