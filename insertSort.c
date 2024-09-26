#include "sortlib.h" 

/*O InsertSort funciona de forma similar a como organizaríamos um baralho de cartas:
pegamos uma carta por vez e a inserimos na posição correta em relação às cartas já ordenadas.*/

void insertSort(int *array, int size) {
    for(int i = 1; i < size; i++) {
        int key = array[i]; //Armazena o elemento atual em uma variavel temporária

        //Encontra a posição correta para a chave
        int j = i - 1;
        while(j >= 0 && array[j] > key) {
            //Desloca os elementos para a direita para criar espaço para a chave
            array[j + 1] = array[j];
            j--;
        }
        //Insere a chave na posição correta
        array[j + 1] = key;
    }
}