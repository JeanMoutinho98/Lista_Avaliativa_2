#include <stdio.h>

int main(){
    int i, j;                                                               //i=Linhas, j=Colunas.
    int mat1[2][2] = {1, 2, 3, 4};
    int mat2[2][2] = {5, 6, 7, 8};
    int mat3[2][2];         

   //Apenas para visualização. 
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Mat1[%d][%d]: %d\n", i, j, mat1[i][j]);
        }
        printf("\n");
    }


    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Mat2[%d][%d]: %d\n", i, j, mat2[i][j]);
        }
        printf("\n");
    }

    //Faz a soma das matrizes.
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }


    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Soma[%d][%d]: %d\n", i, j, mat3[i][j]);
        }
        printf("\n");
    }


return 0;
}