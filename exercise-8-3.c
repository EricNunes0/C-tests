#include <stdio.h>

int main() {
    int n1, n2, *pont1, *pont2;
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    pont1 = &n2;
    pont2 = &n1;
    printf("n1: %d\nn2: %d", *pont1, *pont2);
    return 0;
}