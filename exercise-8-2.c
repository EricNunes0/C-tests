#include <stdio.h>

int main() {
    int cmd = 0;
    printf("⬆ Programa de ponteiros iniciado!\n");
    do {
        int n1, n2, n3;
        printf("Informe o 1º número: ");
        scanf("%d", &n1);
        printf("Informe o 2º número: ");
        scanf("%d", &n2);
        printf("Informe o 3º número: ");
        scanf("%d", &n3);
        printf("🔼 Ordem crescente:\n");
        crescente(n1, n2, n3);
        printf("\n🔽 Ordem decrescente:\n");
        decrescente(n1, n2, n3);
        printf("\n🟡 Deseja reiniciar o programa? (Qualquer tecla - Sim | 2 - Não)\n");
        scanf("%d",&cmd);
        if(cmd != 2) {
            printf("🟢 Programa reiniciado!\n");
        }
    } while (cmd != 2);
    printf("🔴 Programa finalizado!\n");
    return 0;
}

int crescente(int A, int B, int C) {
    int *pontA = &A, *pontB = &B, *pontC = &C;
    if((*pontA < *pontB) && (*pontA < *pontC)) {
        if(*pontB < *pontC) {
            printf("%d - %d - %d", *pontA, *pontB, *pontC);
        } else {
            printf("%d - %d - %d", *pontA, *pontC, *pontB);
        }
    } else {
        if(*pontB < *pontC) {
            if(*pontC < *pontA) {
                printf("%d - %d - %d", *pontB, *pontC, *pontA);
            } else {
                printf("%d - %d - %d", *pontB, *pontA, *pontC);
            }
        } else {
            if(*pontA < *pontB) {
                printf("%d - %d - %d", *pontC, *pontA, *pontB);
            } else {
                printf("%d - %d - %d", *pontC, *pontB, *pontA);
            }
        }
    }
}

int decrescente(int A, int B, int C) {
    int *pontA = &A, *pontB = &B, *pontC = &C;
    if((*pontA < *pontB) && (*pontA < *pontC)) {
        if(*pontB < *pontC) {
            printf("%d - %d - %d", *pontC, *pontB, *pontA);
        } else {
            printf("%d - %d - %d", *pontB, *pontC, *pontA);
        }
    } else {
        if(*pontB < *pontC) {
            if(*pontC < *pontA) {
                printf("%d - %d - %d", *pontA, *pontC, *pontB);
            } else {
                printf("%d - %d - %d", *pontC, *pontA, *pontB);
            }
        } else {
            if(*pontA < *pontB) {
                printf("%d - %d - %d", *pontB, *pontA, *pontC);
            } else {
                printf("%d - %d - %d", *pontA, *pontB, *pontC);
            }
        }
    }
}