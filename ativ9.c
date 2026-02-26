#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = NULL, n = 0, x;

    while (1) {
        scanf("%d", &x);
        if (x < 0) break;

        int *temp = realloc(v, (n + 1) * sizeof(int));
        if (temp == NULL) {
            free(v);
            return 1;
        }

        v = temp;
        v[n] = x;
        n++;
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    free(v);
    return 0;
}
