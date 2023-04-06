#include <stdio.h>

int main() {
    int max = 10, filaMax = 6, aux = 1, follow, id;
    int fila[max], i, j;
    for(i = 0; i <= max; i++) {
        printf("◤━━━━━━━━━━━━━━━━━━━━━━━━◥\n");
        for(j = 0; j <= max; j++) {
            if(j < i) {
                printf("(%d) ", fila[j]);
            } else {
                printf("(0) ", fila[j]);
            }
        }
        printf("\n◣━━━━━━━━━━━━━━━━━━━━━━━━◢\n");
        printf("\n👤 1 - Adicionar a fila;\n⏪ 2 - Avançar a fila;\n🛑 3 - Encerrar fila;\nInforme sua próxima ação: ");
        scanf("%d", &follow);
        if(follow == 1) {
            int maxCheck = 0, k;
            for(k = 0; k <= max; k++) {
                if(k < i) {
                    if(fila[k] != 0) {
                        maxCheck++;
                        if(maxCheck >= filaMax) {
                            printf("\n❗ Fila cheia!\n");
                            break;
                        }
                    }
                }
            }
            if(k > i) {
                printf("\n📀 Informe o ID do usuário: ");
                scanf("%d", &id);
                int l;
                for(l = 0; l <= max; l++) {
                    if(id == fila[l]) {
                        printf("❗ Este ID já está registrado na fila!\n");
                        break;
                    }
                }
                if(l > i) {
                    fila[i] = id;
                } else {
                    i--;
                }
            } else {
                i--;
            }
        } else if(follow == 2) {
            fila[0] = 0;
            for(int k = 0; k <= max; k++) {
                int temp0 = fila[k];
                int temp1 = fila[k + 1];
                fila[k] = temp1;
                fila[k + 1] = temp0;
            }
            i = i - 2;
            if(i < 0) {
                i = -1;
            };
        } else if(follow == 3) {
            if(i > 0) {
                int confirmCancel;
                printf("✅ 1 - Sim | ❌ Qualquer dígito - Não\n❕ Ainda resta %d usuário(s) na fila! Tem certeza de que deseja encerrar? ", i);
                scanf("%d", &confirmCancel);
                if(confirmCancel == 1) {
                    printf("🛑 Fila encerrada com %d usuário(s) restantes!\n", i);
                    break;
                } else {
                    printf("🟢 Fila retomada!\n");
                    i--;
                }
            } else {
                printf("🛑 Fila encerrada!\n", i);
                break;
            }
        } else {
            printf("❌ Operação inválida!\n");
            i--;
        }
    }
    return;
}
