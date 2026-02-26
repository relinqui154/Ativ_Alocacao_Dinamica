#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, count = 0;

    printf("N: ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));
    if (v == NULL) return 1;

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("X: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
        if (v[i] % x == 0) count++;

    printf("Existem %d múltiplos de %d.\n", count, x);

    free(v);
    return 0;
}
