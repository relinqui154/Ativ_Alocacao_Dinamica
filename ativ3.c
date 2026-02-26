#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pares = 0, impares = 0;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));
    if (v == NULL) return 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) pares++;
        else impares++;
    }

    printf("Pares: %d\nImpares: %d\n", pares, impares);

    free(v);
    return 0;
}
