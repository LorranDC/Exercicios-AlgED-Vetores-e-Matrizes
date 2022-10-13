#include <stdio.h>

int main(void)
{
    
    int i, j,  A[3][3] = {1,-1,9,7,14,-8,0,-5,-5},
               B[3][3] = {-1,1,-9,-7,-14,8,0,5,5};
    int result;
    

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {    
             result = A[i][j] + B[i][j];             
        }
    }
    
    if(result == 0)
    {
        printf("\n\n As Matrizes sao opostas!");
    }     
        else
        {
            printf("\n\n As Matrizes nao sao opostas!");
        }
    
    printf("\n\n");

    return 0;    
}

