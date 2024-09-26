#include "sortlib.h"

/*Divide os vetores em subconjuntos, até que cada subconjunto seja único, e os junta
de forma recursiva, onde em cada chamada o array resultante esteja ordenado. */

void merge(int *array, int inicio, int meio, int fim) {
    int *temp = malloc(TAMANHO_MAX * sizeof(int)); // Array temporário para armazenar a mesclagem
    int p1 = inicio, p2 = meio + 1, size = fim - inicio + 1;
    int fim1 = 0, fim2 = 0, i, j, k;

    //Loop para mesclar os dois subarrays;
    for(i = 0; i < size; i++) {
        if(!fim1 && !fim2) {
            if(array[p1] < array[p2])
                temp[i] = array[p1++];
            else
                temp[i] = array[p2++];

            if(p1 > meio) fim1 = 1; //dois if's para verificar se o subarray chegou ao fim
            if(p2 > fim) fim2 = 1;
        } else {
            if(!fim1)
                temp[i] = array[p1++];
            else    
                temp[i] = array[p2++];
        }
    }

    //Copia os elementos mesclados de volta ao array original
    for(j = 0, k = inicio; j < size; j++, k++)
        array[k] = temp[j];

    free(temp);
}

//Função recursiva do merge sort
void mergeSort(int *array, int inicio, int fim) {
    if(inicio < fim) {
        int meio = (inicio + fim) / 2; 
        mergeSort(array, inicio, meio); //ordena a primeira metade 
        mergeSort(array, meio + 1, fim); //ordena a segunda metade 
        merge(array, inicio, meio, fim); //mescla as duas metades ordenadas
    }
}
//Na chamada da função, ao declarar o parametro "fim", subtrai 1 