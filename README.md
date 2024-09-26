# Algoritmos de Ordenação em C
Alguns algoritmos de ordenação em C, com seus resumos e alguns comentários sobre o que cada um faz,
em relação a eficiência e complexidade, muda de acordo com cada algoritmo. 

- Todos os algoritmos estão para vetores de números INTEIROS, porém, funciona para float e double.


# Algoritmos Implementados:

-   **Bubble Sort:**
    -   Algoritmo simples, mas ineficiente para grandes conjuntos de dados.
    -   Compara elementos adjacentes e troca se estiverem na ordem errada.
    -   Complexidade de tempo: O(n²) no pior caso.
-   **Insertion Sort:**
    -   Eficiente para conjuntos de dados parcialmente ordenados.
    -   Insere cada elemento em sua posição correta em uma sublista ordenada.
    -   Complexidade de tempo: O(n²) no pior caso, mas pode ser mais eficiente em outros casos.
-   **Merge Sort:**
    -   Divide o array em metades, ordena cada metade recursivamente e depois mescla as metades ordenadas.
    -   Complexidade de tempo: O(n log n) no melhor, pior e caso médio.
-   **Quick Sort:**
    -   Escolhe um pivô e particiona o array em dois subarrays, um com elementos menores que o pivô e outro com elementos maiores.
    -   Chama recursivamente o Quick Sort para os subarrays.
    -   Complexidade de tempo: O(n log n) em média, mas pode degenerar para O(n²) no pior caso.
-   **Bin Sort:**
    -  Coloca cada elemento diretamente em sua posição final no array ordenado. 
    - Eficiente para dados com intervalo de valores conhecido e distribuição uniforme. 
    - Complexidade de tempo: O(n + k) 
    - Limitações: Requer conhecimento prévio do intervalo de valores.
-   **Radix Sort:**
    -  Ordena os elementos processando dígitos individuais.
    - Ideal para ordenar números inteiros com um número fixo de dígitos.
    - Complexidade de tempo: O(nk)
