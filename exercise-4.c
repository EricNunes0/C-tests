#include <stdio.h>

int main() {
    int max = 100, filaMax = 6, aux = 1, follow, id;
    int fila[max], i, j;
    for(i = 0; i <= max; i++) {
        for(j = 0; j <= max; j++) {
            if(j < i) {
                printf("(%d) ", fila[i]);
            } else {
                printf("(null) ", fila[i]);
            }
        }
        printf("\nDeseja inserir um novo usuário na fila? (1 - Sim) ");
        scanf("%d", &follow);
        if(follow == 1) {
            printf("Informe o ID do usuário: ");
            scanf("%d", &id);
            fila[i] = id;
        }
    }
}
