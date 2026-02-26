#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = calloc(1500, sizeof(int));
    if (v == NULL) return 1;

    int zeros = 0;
    for (int i = 0; i < 1500; i++)
        if (v[i] == 0) zeros++;

    printf("Zeros: %d\n", zeros);

    for (int i = 0; i < 1500; i++)
        v[i] = i;

    printf("10 primeiros:\n");
    for (int i = 0; i < 10; i++) printf("%d ", v[i]);

    printf("\n10 ultimos:\n");
    for (int i = 1490; i < 1500; i++) printf("%d ", v[i]);

    free(v);
    return 0;
}
