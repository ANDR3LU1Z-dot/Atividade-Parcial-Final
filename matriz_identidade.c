#include<stdio.h>
#include<stdlib.h>

main(){
    int mat[4][4], i = 0, j = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            if(mat[i] == mat[j]){
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }

    }

    printf("Matriz Identidade:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }


}
