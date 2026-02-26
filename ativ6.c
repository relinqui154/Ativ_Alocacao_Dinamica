#include <stdio.h>
#include <stdlib.h>

int main() {
    int bytes;
    printf("Quantos bytes deseja alocar (multiplo de %ld)? ", sizeof(int));
    scanf("%d", &bytes);

    if (bytes % sizeof(int) != 0) {
        printf("Valor inválido!\n");
        return 1;
    }

    int tamanho = bytes / sizeof(int);
    int *mem = calloc(tamanho, sizeof(int));
    if (mem == NULL) return 1;

    int opc, pos, val;

    do {
        printf("\n1 - Inserir valor\n2 - Consultar valor\n0 - Sair\n");
        scanf("%d", &opc);

        if (opc == 1) {
            printf("Posição: ");
            scanf("%d", &pos);
            if (pos >= 0 && pos < tamanho) {
                printf("Valor: ");
                scanf("%d", &val);
                mem[pos] = val;
            }
        }
        else if (opc == 2) {
            printf("Posição: ");
            scanf("%d", &pos);
            if (pos >= 0 && pos < tamanho)
                printf("Valor = %d\n", mem[pos]);
        }
    } while (opc != 0);

    free(mem);
    return 0;
}
