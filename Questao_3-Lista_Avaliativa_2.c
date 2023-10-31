#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat1[4][4], mat2[4][4], mat3[4][4], /*mat4[4][4]*/mat5[4][4];
    int linhas1, colunas1, linhas2, colunas2, linhas3, colunas3/*,linhas_4, colunas4*/;
    int soma = 0;
    int i, j, k;
    char operacao[12];
    /*
    char string_soma[4] = "soma";
    char subtracao[9] = "subtracao";
    char multiplicacao[12] = "multiplicacao";
    */


    for(linhas1 = 0; linhas1 < 4; linhas1++){
        for(int colunas1 = 0; colunas1 < 4; colunas1++){
            printf("Digite o valor da matriz 1[%d][%d]:", linhas1, colunas1);
            scanf("%d", &mat1[linhas1][colunas1]);
        }
    }


    for(linhas1 = 0; linhas1 < 4; linhas1++){
        for(int colunas1 = 0; colunas1 < 4; colunas1++){
            printf("%d ", mat1[linhas1][colunas1]);
        }
        printf("\n");  
    } 


    for(linhas2 = 0; linhas2 < 4; linhas2++){
        for(int colunas2 = 0; colunas2 < 4; colunas2++){
            printf("Digite o valor da matriz 2[%d][%d]:", linhas2, colunas2);
            scanf("%d", &mat2[linhas2][colunas2]);
        }
    }


    for(linhas2 = 0; linhas2 < 4; linhas2++){
        for(int colunas2 = 0; colunas2 < 4; colunas2++){
            printf("%d ", mat2[linhas2][colunas2]);
        }
        printf("\n");  
    } 


    // Escolhe a operação a ser feita.
    printf("Insira a operacao a ser feita:\n");
    fgets(operacao, 20, stdin);
    printf("Operacao escolhida: %s", operacao);
    /*if(strcmp(operacao, string_soma) == 0){
        printf("Voce escolheu soma\n");
        // Puxar soma das matrizes;
    }
    else if(strcmp(operacao, subtracao) == 0){
        printf("Voce escolheu subtracao\n");
        // Puxar subtração das matrizes;
    }
    else if(strcmp(operacao, multiplicacao) == 0){
        printf("Voce escolheu soma\n");
        // Puxar multiplição das matrizes;
    }
    else{
        printf("Erro!\nPor favor escolha uma operacao valida.");
    }
    */

    // Faz a soma das matrizes.
    printf("Soma das Matrizes:\n");
    for(linhas3 = 0; linhas3 < 4; linhas3++){
        for(colunas3 = 0; colunas3 < 4; colunas3++){
            mat3[linhas3][colunas3] = mat1[linhas3][colunas3] + mat2[linhas3][colunas3];
        }
    }


    for(linhas3 = 0; linhas3 < 4; linhas3++){
        for(colunas3 = 0; colunas3 < 4; colunas3++){
            printf("%d ", mat3[linhas3][colunas3]);
        }
        printf("\n");
    }


    /*Subtrai as Matrizes.
    printf("Subtracao das Matrizes:\n");
    for(linhas4 = 0; linhas4 < 4; linhas4++){
        for(linhas4 = 0; linhas4 < 4; linhas4++){
            mat4[linhas4][linhas4] = mat1[linhas4][linhas4] - mat2[linhas4][linhas4];
        }
    }


    for(linhas4 = 0; linhas4 < 4; linhas4){
        for(linhas4 = 0; linhas4 < 4; linhas4++){
            printf("%d ", mat_Subtracao[linhas4][linhas4]);
        }
        printf("\n");
    }*/

    // Multiplica as Matrizes. 
    printf("Multiplica as Matrizes:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            soma = 0;
           for(k= 0; k < 4; k++){
            soma += mat1[i][k] * mat2[k][j];
           }
           mat5[i][j] = soma;
        }
    }


    for(i= 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", mat5[i][j]);
        }
        printf("\n");
    }


    return 0;
}