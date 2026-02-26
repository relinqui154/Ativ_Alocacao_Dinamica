#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Quantos valores quer armazenar? ");
    scanf("%d", &n);

    if (n < 10) n = 10;

    double *v = malloc(n * sizeof(double));
    if (v == NULL) return 1;

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
        v[i] = rand() % 101;

    for (int i = 0; i < 10; i++)
        printf("%.2f ", v[i]);

    free(v);
    return 0;
}
