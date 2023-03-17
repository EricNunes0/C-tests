#include <stdio.h>

int main() {
    int vetor[6], aux, i, j;
    srand(time(NULL));
    for(i = 0; i <= 5; i++) {
        int r = rand() % 60;
        for(j = 0; j <= 5; j++) {
            if(r == vetor[j]) {
                break;
            }
        }
        if(j > i) {
            vetor[i] = r;
        } else {
            i--;
        }
    }
    printf("Números da mega-sena: ");
    for(i = 0; i <= 5; i++) {
        printf("(%d) ", vetor[i]);
    }
    return 0;
}
