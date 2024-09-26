#include "sortlib.h"

/*Algoritmo simples, 
Compara elementos adjacentes em uma lista e os troca de lugar se estiverem na ordem errada.*/

void bubbleSort(int *array, int size) {
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){

                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
