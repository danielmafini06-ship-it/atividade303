#include <stdio.h>

int main() {
    int v[] = {101, 102, 103, 104, 105, 99};
    int n = 6;
    int comparacoes = 0;
    for (int i = 1; i < n; i++) {
        int chave = v[i];
        int j = i - 1;
        while (j >= 0) {
            comparacoes++;
            if (v[j] > chave) {
                v[j + 1] = v[j];
                j--;
            } else {
                break;
            }
        }
        v[j + 1] = chave;
    }
    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\nTotal de comparacoes: %d\n", comparacoes);
    return 0;
}
