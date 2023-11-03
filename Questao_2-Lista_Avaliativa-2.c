#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){                     
    char time1[20], time2[15];                                      // Nome do time.
    char nomes1[11][30], nomes2[11][30];                            // Nome dos jogadores.
    char posicoes1[11], posicoes2[11];                              // Posições dos jogadores.
    int overalls1[11], overalls2[11];                               // Overall dos jogadores.
    float forca1, forca2;
    
    // Lê o nome do primeiro time.
    fgets(time1, sizeof(time1), stdin);
    time1[strcspn(time1, "\n")] = '\0';                             // Só assim consegui remover o espaço extra.

    // Lê as informações do time 1(Nome dos jogadores; Posição; Overall).
    for (int i = 0; i < 11; i++) {
        scanf(" %29[^;];%c;%d%*c", nomes1[i], &posicoes1[i], &overalls1[i]);
    }

    // Imprime as informações lidas para o time 1.
    for (int i = 0; i < 11; i++) {
        printf("%s;%c;%d\n", i + 1, nomes1[i], posicoes1[i], overalls1[i]);
    }


    // Lê o nome do segundo time.
    fflush(stdin);
    fgets(time2, sizeof(time2), stdin);
    time2[strcspn(time2, "\n")] = '\0'; 

    // Lê as informações do time 2(Nome dos jogadores; Posição; Overall).
    for (int i = 0; i < 11; i++) {
        scanf(" %29[^;];%c;%d%*c", nomes2[i], &posicoes2[i], &overalls2[i]);
    }

    // Imprime as informações lidas para o time 2.
    for (int i = 0; i < 11; i++) {
        printf("%s;%c;%d\n", i + 1, nomes2[i], posicoes2[i], overalls2[i]);
    }


    // Força dos times;;
    forca1 = (8 * overalls1[0] + 10 * (overalls1[1] + overalls1[4]) + 5 * (overalls1[2] + overalls1[3]) + 8 * (overalls1[5] + overalls1[6]) + 11 * (overalls1[7] + overalls1[8]) + 12 * (overalls1[9] + overalls1[10])) / 100.0;    
    forca2 = (8 * overalls2[0] + 10 * (overalls2[1] + overalls2[4]) + 5 * (overalls2[2] + overalls2[3]) + 8 * (overalls2[5] + overalls2[6]) + 11 * (overalls2[7] + overalls2[8]) + 12 * (overalls2[9] + overalls2[10])) / 100.0;    


    if(forca1 > forca2){
        printf("%s eh mais forte\n", time1);
    }
    else if(forca1 < forca2){
        printf("%s eh mais forte\n", time2);
        
    }
    else{
        printf("Os 2 times possuem a mesma forca\n");
    }


    return 0;
}