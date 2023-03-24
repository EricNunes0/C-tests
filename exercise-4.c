#include <stdio.h>

int main() {
    int max = 10, filaMax = 6, aux = 1, follow, id;
    int fila[max], i, j;
    for(i = 0; i <= max; i++) {
        for(j = 0; j <= max; j++) {
            if(j < i) {
                printf("(%d) ", fila[j]);
            } else {
                printf("(0) ", fila[j]);
            }
        }
        printf("\n1 - Adicionar a fila\n2 - Avançar a fila\nInforme sua próxima ação: ");
        scanf("%d", &follow);
        if(follow == 1) {
            int maxCheck = 0, k;
            for(k = 0; k <= max; k++) {
                if(k < i) {
                    if(fila[k] != 0) {
                        maxCheck++;
                        if(maxCheck >= filaMax) {
                            printf("\nFila cheia!\n");
                            break;
                        }
                    }
                }
            }
            if(k > i) {
                printf("\nInforme o ID do usuário: ");
                scanf("%d", &id);
                fila[i] = id;
            } else {
                i--;
            }
        } else if(follow == 2) {
            for(j = 0; j <= max; j++) {
            if(j < i) {
                printf("[%d] ", fila[j]);
            } else {
                printf("[0] ", fila[j]);
            }
        }
        } else {
            printf("Operação inválida!\n");
            i--;
        }
    }
}
