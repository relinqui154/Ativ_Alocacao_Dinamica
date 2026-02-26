#include <stdio.h>
#include <stdlib.h>

int main() {
    int lot[6], jogo[6];

    printf("Digite os 6 numeros sorteados:\n");
    for (int i = 0; i < 6; i++) scanf("%d", &lot[i]);

    printf("Digite seus 6 numeros:\n");
    for (int i = 0; i < 6; i++) scanf("%d", &jogo[i]);

    int acertos = 0;

    // Contar acertos sem duplicar
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (lot[i] == jogo[j])
                acertos++;

    int *v = malloc(acertos * sizeof(int));
    if (v == NULL) return 1;

    int idx = 0;

    // Guardar acertos evitando duplicar
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (lot[i] == jogo[j]) {
                v[idx++] = lot[i];
                break;
            }

    printf("\nSorteados: ");
    for (int i = 0; i < 6; i++) printf("%d ", lot[i]);

    printf("\nAcertos: ");
    for (int i = 0; i < acertos; i++) printf("%d ", v[i]);

    free(v);
    return 0;
}
