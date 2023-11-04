#include <stdio.h>                                                  // Se não funcionar no Marvin só pode ser problema de formatação na saída.
#include <stdlib.h>
#include <string.h>

int main(){
    int mat1[4][4], mat2[4][4], mat_Resultado[4][4];
    int linhas1, colunas1, linhas2, colunas2, linhas_Resultado, colunas_Resultado;
    char operacao[10];
    

    for(linhas1 = 0; linhas1 < 4; linhas1++){
        for(colunas1 = 0; colunas1 < 4; colunas1++){
            scanf("%d", &mat1[linhas1][colunas1]);
        }
    }


    for(linhas2 = 0; linhas2 < 4; linhas2++){
        for(colunas2 = 0; colunas2 < 4; colunas2++){
            scanf("%d", &mat2[linhas2][colunas2]);
        }
    }
                           
    // Escolhe a operação a ser feita.
    fflush(stdin);                                                  // Para poder usar o fgets depois de scanf.
    fgets(operacao, sizeof(operacao), stdin);
    operacao[strcspn(operacao, "\n")] = 0;                          // Remove o \n aparentemente.

    
    if(strcmp(operacao, "soma") == 0){
        // Faz a soma das matrizes.
        for(linhas_Resultado = 0; linhas_Resultado < 4; linhas_Resultado++){
            for(colunas_Resultado = 0; colunas_Resultado < 4; colunas_Resultado++){
                mat_Resultado[linhas_Resultado][colunas_Resultado] = mat1[linhas_Resultado][colunas_Resultado] + mat2[linhas_Resultado][colunas_Resultado];
            }
        }
    }
    else if(strcmp(operacao, "sub") == 0){
        // Subtrai as Matrizes.
        for(linhas_Resultado = 0; linhas_Resultado < 4; linhas_Resultado++){
            for(colunas_Resultado = 0; colunas_Resultado < 4; colunas_Resultado++){
                mat_Resultado[linhas_Resultado][colunas_Resultado] = mat1[linhas_Resultado][colunas_Resultado] - mat2[linhas_Resultado][colunas_Resultado];
            }
        }
    }
    else if(strcmp(operacao, "mult") == 0){
        // Multiplica as Matrizes. 
        for(linhas_Resultado = 0; linhas_Resultado < 4; linhas_Resultado++){
            for(colunas_Resultado = 0; colunas_Resultado < 4; colunas_Resultado++){
                mat_Resultado[linhas_Resultado][colunas_Resultado] = 0;
                for(int k = 0; k < 4; k++){
                  mat_Resultado[linhas_Resultado][colunas_Resultado]  += mat1[linhas_Resultado][k] * mat2[k][colunas_Resultado]; 
                }
            }
        }
    }

    // Imprime os resultados.
    for(linhas_Resultado= 0; linhas_Resultado < 4; linhas_Resultado++){
            for(colunas_Resultado = 0; colunas_Resultado < 4; colunas_Resultado++){
                printf("%2d ", mat_Resultado[linhas_Resultado][colunas_Resultado]);
            }
                printf("\n");
        }
        printf("\n");
    /*printf("Matriz 1:\n");
    for(linhas1= 0; linhas1 < 4; linhas1++){
        for(colunas1 = 0; colunas1 < 4; colunas1++){
            printf("%2d ", mat1[linhas1][colunas1]);
        }
            printf("\n");
    }
    printf("Matriz 2:\n");
    for(linhas2= 0; linhas2 < 4; linhas2++){
        for(colunas2 = 0; colunas2 < 4; colunas2++){
            printf("%2d ", mat2[linhas2][colunas2]);
        }
            printf("\n");
    }*/


    return 0;
}