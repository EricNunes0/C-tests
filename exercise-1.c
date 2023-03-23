#include <stdio.h>

void main() {
    int max = 10, i, j, aux, m;
    int vetor[max];
    for(i = 0; i <= max - 1; i++) {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &aux);
        for(j = 0; j <= max - 1; j++) {
            if(aux == vetor[j]) {
                printf("(%d é igual a %d)\n", vetor[i], vetor[j]);
                break;
            }
        }
        if(j > i) {
            vetor[i] = aux;
        } else {
            i--;
        }
    }
    for(i = 0; i <= max - 1; i++) {
        m = i;
        for(j = i; j <= max - 1; j++) {
            if(vetor[i] > vetor[j]) {
                m = j;
                int temp = vetor[i];
                vetor[i] = vetor[m];
                vetor[m] = temp;
            }
        }
        printf("(%d) ", vetor[i]);
    }
    return 0;
}
