#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = malloc(5 * sizeof(int));
    if (v == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nVocê digitou:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", v[i]);

    free(v);
    return 0;
}
