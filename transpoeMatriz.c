#include <stdio.h>
#include <stdlib.h>

int main() {
    int sizeL = 5, sizeC = 4;
    int l, c, mat[sizeL][sizeC], trans[sizeC][sizeL];

    srand(time(NULL));

    for(l = 0; l < sizeL; l++){
        for(c = 0; c < sizeC; c++){
            mat[l][c] = rand() % 500;
        }
    }

    printf("\n Matriz gerada: \n");
        for(l = 0; l < sizeL; l++){
        for(c = 0; c < sizeC; c++){
            printf(" %3d ", mat[l][c]);
        }
        printf("\n");
        }

    for(l = 0; l < sizeL; l++){
        for(c = 0; c < sizeC; c++){
            trans[c][l] = mat[l][c];
        }
    }

    printf("\n Transposicao da Matriz: \n");
    for(l = 0; l < sizeC; l++){
        for(c = 0; c < sizeL; c++){
            printf(" %3d ", trans[l][c]);
        }
        printf("\n");
    }

    return 0;
}
