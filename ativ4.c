#include <stdio.h>
#include <stdlib.h>

char* aloca(int n) {
    return malloc(n * sizeof(char));
}

int main() {
    int n;
    printf("Tamanho da string: ");
    scanf("%d", &n);

    char *s = aloca(n);
    if (s == NULL) return 1;

    getchar(); // limpa buffer

    printf("Digite a string: ");
    fgets(s, n, stdin);

    printf("Sem vogais: ");
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u' &&
            c!='A' && c!='E' && c!='I' && c!='O' && c!='U')
            putchar(c);
    }

    free(s);
    return 0;
}
