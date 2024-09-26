#include "sortlib.h"

/* Escolhemos um pivô que divide o array em duas partes
   um lado com números menores que o pivô e o outro lado com números maiores que o pivô.
   Depois, chamamos recursivamente o QuickSort para ordenar os subarrays criados até que todo o array esteja ordenado. */

int particiona(int *array, int inicio, int fim) {
    int pivo = (array[inicio] + array[fim] + array[(inicio + fim) / 2]) / 3; // Escolha do pivô como a média dos extremos e do meio do array

    // Loop para dividir os números em relação ao pivô
    while(inicio < fim) {
        while(inicio < fim && array[inicio] <= pivo)
            inicio++;
        while(inicio < fim && array[fim] > pivo)
            fim--;

        // Troca os elementos
        if(inicio < fim) {  // Verifica se os índices ainda são válidos para evitar troca desnecessária
            int aux = array[inicio];
            array[inicio] = array[fim];
            array[fim] = aux;
        }
    }

    return inicio; // Retorna o índice onde o pivô divide o array
}

void quickSort(int *array, int inicio, int fim) {
    if(inicio < fim) {
        int pos = particiona(array, inicio, fim); // Particiona o array
        // Chamadas recursivas para ordenar os subarrays
        quickSort(array, inicio, pos - 1); // Ordena o subarray à esquerda do pivô
        quickSort(array, pos, fim); // Ordena o subarray à direita do pivô
    }
}