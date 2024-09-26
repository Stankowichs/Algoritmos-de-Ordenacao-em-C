#include "sortlib.h"

/*Ordena de acordo com os digitos e suas quantidades, começando pelo digito menos significativo
até o digito mais significativo, ordenando-os dígito por dígito*/

void countingSort(int *array, int size, int expoente){
    int *output = malloc(size * sizeof(int)); 
    int *count = calloc(10, sizeof(int)); //inicializa o contador com todos os valores 0, para os numeros de 0 a 9

    for(int i = 0; i < size; i++) //Frequencia dos digitos
        count[(array[i] / expoente) % 10]++; 

    for(int i = 1; i < 10; i++) //Posições corretas em output
        count[i] += count[i - 1]; 

    for(int i = size - 1; i >= 0; i--){  //Colocando os elementos no array de saída
        output[count[(array[i] / expoente) % 10] - 1] = array[i];
        count[(array[i] / expoente) % 10]--;
    }

    for(int i = 0; i < size; i++) //Copiando os elementos de volta para o array
        array[i] = output[i];

    free(output);
    free(count);
}

void radixSort(int *array, int size){
    //Encontrar o maior elemento para determinar o n° de digitos
    int max = array[0];
    for(int i = 1; i < size; i++){
        if(array[i] > max)
            max = array[i];
    }

    //Ordenando para cada digito, começando pelo digito menos significativo
    for(int expoente = 1; max / expoente > 0; expoente *= 10)
        countingSort(array, size, expoente);
}