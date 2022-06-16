#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int tamL = 5, tamC = 4;
    int l, c, mat[tamL][tamC], trans[tamC][tamL];

    srand(time(NULL));

    for(l = 0; l < tamL; l ++){
        for(c = 0; c < tamC; c++){
            mat[l][c] = rand() % 10;
        }
    }

    printf("\nMatriz original: \n");

    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            printf("%d ", mat[l][c]);

        }
        printf("\n");
    }


    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            trans[c][l] = mat[l][c];
        }
    }

    printf("\nMatriz Transposta: \n");

    for(l = 0; l < tamC; l++){
        for(c = 0; c < tamL; c++){
            printf("%d ", trans[l][c]);
        }
        printf("\n");
    }


    return 0;

}

