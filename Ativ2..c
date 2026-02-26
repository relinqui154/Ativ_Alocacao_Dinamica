#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));
    if (v == NULL) return 1;

    for (int i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    free(v);
    return 0;
}
