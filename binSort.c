#include "sortlib.h"

/*Algoritmo extremamente limitado, onde so consegue ordenar numeros NATURAIS, sem repetições,
e no intervalo: [0, size - 1]*/

void binSort(int *array, int size){
    for(int i = 0; i < size; i++){
        while(array[i] != i && array[i] > 0 && array[i] < size){ //Enquanto o elemento atual não estiver na posição correta
            int correctIndex = array[i]; //Obtem o índice correto para o elemento atual

            int temp = array[correctIndex]; //Troca o elemento atual com o elemento na posição correta
            array[correctIndex] = array[i];
            array[i] = temp;
        }
    }
}