#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int mat[4][4], i = 0, j = 0, soma = 0;
    float media = 0.0 ;
    srand(time(NULL));

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            if(mat[i] < mat[j]){
                mat[i][j] = 0;
            } else if(mat[i] > mat[j]) {
                mat[i][j] = rand() % 10;
                soma = soma + mat[i][j];
            } else {
                mat[i][j] = rand() % 10;
            }
        }

    }


    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }

    media = soma / 6;


      printf("\nA soma dos valores do triangulo inferior e: %d \n", soma);
    printf("\nA media do triangulo inferior e: %f \n", media);
    return(0);
}
