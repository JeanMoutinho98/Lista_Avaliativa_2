#include <stdio.h>

int main() {
    int vetor[10]; 
    int tamanho = 10;


    for(int i = 0;i < tamanho; i++){                                        //Define o primeiro vetor.
        scanf("%d", &vetor[i]);
    }


        for(int i = 0; i < tamanho; i++){                                   //Mostra o primeiro vetor.
            printf("%d ", vetor[i]);                                        //Espaço pra ficar na formatação correta.                                 
        }
        printf("\n");                                                       //Apenas pula linha.


    while (tamanho > 1) {                                                   //Faz novos vetores até só sobrar um.
        int novoVetor[tamanho - 1];                                         //Diminui em um os números de elementos do vetor que inicialmente era 10.
        int novoTamanho = 0;

        for (int i = 0; i < tamanho - 1; i++) {                             //Faz a soma dos elementos com os elementos subsequentes.
            int soma = vetor[i] + vetor[i + 1];
            novoVetor[novoTamanho] = soma;
            novoTamanho++;
        }

        for (int i = 0; i < novoTamanho; i++) {                             //Estabelece o tamanho do novo vetor[tamanho - 1].
            printf("%d ", novoVetor[i]);                                    //Espaço pra ficar na formatação correta.
        }

        printf("\n");

        for (int i = 0; i < novoTamanho; i++) {
            vetor[i] = novoVetor[i];
        }
        tamanho = novoTamanho;
    }


    return 0;
}