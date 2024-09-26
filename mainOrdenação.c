#include "sortlib.h" 

int *createRandomArray(int *array) {
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o array com valores aleatórios
    for (int i = 0; i < TAMANHO_MAX; i++) {
        array[i] = rand() % 100; // Valores aleatórios de 0 a 99
    }

    return array;
}

void imprimirArray(int *array) {
    for(int i = 0; i < TAMANHO_MAX; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int *array = malloc(TAMANHO_MAX * sizeof(int));
    createRandomArray(array);
    printf("Array original: ");
    imprimirArray(array);

    //Chamar a função do algoritmo de ordenação selecionado

    printf("Array ordenado: ");
    imprimirArray(array);

    free(array);
    return 0;
}
