#include <stdio.h>

int main() {
    int vetor[10], i, j, aux;
    for(i = 0; i <= 9; i++) {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &aux);
        for(j = 0; j <= 9; j++) {
            if(aux == vetor[j]) {
                break;
            }
        }
        if(j > i) {
            vetor[i] = aux;
        } else {
            i--;
        }
    }
    int m;
    for(i = 0; i <= 9; i++) {
        m = i;
        for(j = i; j <= 9; j++) {
            if(vetor[i] > vetor[j]) {
                m = j;
                int temp = vetor[i];
                vetor[i] = vetor[m];
                vetor[m] = temp;
            }
        }
        printf("(%d) ", vetor[i]);
    }
}
