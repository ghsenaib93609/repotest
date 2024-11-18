// eu fiz merda
// Função para trocar dois elementos no array

// Particiona o array em duas partes
int particionar(int array[], int inicio, int fim) {
int pivot = array[fim]; // Escolhemos o último elemento como pivô
int i = inicio - 1; // Índice do menor elemento
for (int j = inicio; j &lt; fim; j++) { // Percorre o array do início até antes do pivô.
if (array[j] &lt;= pivot) { // Se o elemento for menor ou igual ao pivô..
i++; // Avança a posição dos menores.
trocar(&amp;array[i], &amp;array[j]); // Troca o elemento atual com o elemento da posição &#39;i&#39;
}
}
trocar(&amp;array[i ], &amp;array[fim]); // Coloca o pivô na posição correta
return i + 1; // Retorna o índice do pivô para continuar a separação.
}

/// funcao quick sort
void quickSort(int array[], int i, fim) {
if (inicio &lt; fim) { // Base da recursão: para quando a lista tiver 1 ou 0 elementos.
int pivotIndex = particionar(array, inicio, fim); // Particiona o array e obtém o índice do
pivô.
quickSort(array, inicio, pivotIndex - 1); // Ordena a parte à esquerda do pivô.
quickSort(array, pivotIndex + 1, fim); // Ordena a parte à direita do pivô.
}
}

// Função para imprimir o array
void imprimirArray(int array[], int tamanho) {
for (int i = 0; i &lt; tamanho; i++) { // Percorre todos os elementos do array.
printf(&quot;%d &quot;, array[i]); // Imprime cada elemento seguido de um espaço.
}
printf(&quot;\n&quot;); // Quebra a linha após imprimir todos os elementos.

}

}
int main() {
int array[] = {10, 3, 5, 7, 2, 8, 1}; // Define o array para ser ordenado.
int tamanho = sizeof(array) / sizeof(array[0]); // Calcula o número de elementos no array.
printf(&quot;Array original: &quot;);
 // Mostra o array após a ordenação.
return -1; // Indica que o programa terminou com sucesso.
}