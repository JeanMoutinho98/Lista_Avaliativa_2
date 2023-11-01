#include <stdio.h>                                                  // Se não funcionar no Marvin só pode ser problema de formatação na saída.
#include <stdlib.h>

int main(){
    int mat1[4][4], mat2[4][4], mat_soma[4][4], mat_sub[4][4], mat_mult[4][4];
    int linhas1, colunas1, linhas2, colunas2, linhas_Soma, colunas_soma, linhas_sub, colunas_sub, linhas_mult, colunas_mult, elementos_mult;
    int soma = 0;
    char operacao[10];


    for(linhas1 = 0; linhas1 < 4; linhas1++){
        for(int colunas1 = 0; colunas1 < 4; colunas1++){
            printf("Digite o valor da matriz 1[%d][%d]:", linhas1, colunas1);
            scanf("%d", &mat1[linhas1][colunas1]);
        }
    }


    for(linhas1 = 0; linhas1 < 4; linhas1++){
        for(int colunas1 = 0; colunas1 < 4; colunas1++){
            printf("%4d ", mat1[linhas1][colunas1]);
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
            printf("%4d ", mat2[linhas2][colunas2]);
        }
        printf("\n");  
    } 
                               
    // Escolhe a operação a ser feita.
    fflush(stdin);                                                  // Para poder usar o fgets depois de scanf.
    printf("Insira a operacao a ser feita:\n");
    fgets(operacao, sizeof(operacao), stdin);
    operacao[strcspn(operacao, "\n")] = 0;                          // Remove o \n aparentemente.

    
    if(strcmp(operacao, "soma") == 0){
        printf("Voce escolheu soma\n");
        // Faz a soma das matrizes.
        printf("Soma das Matrizes:\n");
        for(linhas_Soma = 0; linhas_Soma < 4; linhas_Soma++){
            for(colunas_soma = 0; colunas_soma < 4; colunas_soma++){
                mat_soma[linhas_Soma][colunas_soma] = mat1[linhas_Soma][colunas_soma] + mat2[linhas_Soma][colunas_soma];
            }
        }
        for(linhas_Soma = 0; linhas_Soma < 4; linhas_Soma++){
            for(colunas_soma = 0; colunas_soma < 4; colunas_soma++){
                printf("%4d ", mat_soma[linhas_Soma][colunas_soma]);
            }
            printf("\n");
        }
    }
    else if(strcmp(operacao, "sub") == 0){
        printf("Voce escolheu subtracao\n");
        // Subtrai as Matrizes.
        printf("Subtracao das Matrizes:\n");
        for(linhas_sub = 0; linhas_sub < 4; linhas_sub++){
            for(colunas_sub = 0; colunas_sub < 4; colunas_sub++){
                mat_sub[linhas_sub][colunas_sub] = mat1[linhas_sub][colunas_sub] - mat2[linhas_sub][colunas_sub];
            }
        }
        for(linhas_sub = 0; linhas_sub < 4; linhas_sub++){
            for(colunas_sub = 0; colunas_sub < 4; colunas_sub++){
                printf("%4d ", mat_sub[linhas_sub][colunas_sub]);
            }
            printf("\n");
        }
    }
    else if(strcmp(operacao, "mult") == 0){
        printf("Voce escolheu multiplicacao\n");
        // Multiplica as Matrizes. 
        printf("Multiplica as Matrizes:\n");
        for(linhas_mult = 0; linhas_mult < 4; linhas_mult++){
            for(colunas_mult = 0; colunas_mult < 4; colunas_mult++){
                soma = 0;
                for(elementos_mult= 0; elementos_mult < 4; elementos_mult++){
                    soma += mat1[linhas_mult][elementos_mult] * mat2[elementos_mult][colunas_mult];
                }
                        mat_mult[linhas_mult][colunas_mult] = soma;
            }
        }
        for(linhas_mult= 0; linhas_mult < 4; linhas_mult++){
            for(colunas_mult = 0; colunas_mult < 4; colunas_mult++){
                printf("%4d ", mat_mult[linhas_mult][colunas_mult]);
            }
                printf("\n");
        }
    }
    else{
        printf("Erro!\nPor favor escolha uma operacao valida.");
    }


    return 0;
}