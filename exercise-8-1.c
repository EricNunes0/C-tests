#include <stdio.h>

int main() {
    int n1, n2, n3, *pont;
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    printf("Informe o terceiro número: ");
    scanf("%d", &n3);
    pont = &n1;
    printf("1º valor do ponteiro (%p): %d\n", pont, *pont);
    pont = &n2;
    printf("2º valor do ponteiro (%p): %d\n", pont, *pont);
    pont = &n3;
    printf("3º valor do ponteiro (%p): %d\n", pont, *pont);
    return 0;
}