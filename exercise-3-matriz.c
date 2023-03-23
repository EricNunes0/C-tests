#include <stdio.h>

int main() {
    int max = 50;
    int matriz[max][2], i, j, aux, n1, n2;
    while(i <= max) {
        printf("Deseja inserir um novo aluno? (1 - Sim | 2 - Não) ");
        scanf("%d", &aux);
        if(aux == 1) {
            printf("Informe a matrícula do %d aluno: ", i + 1);
            scanf("%d", &matriz[i][0]);
            n1 = 11;
            while(n1 > 10) {
                printf("Informe a primeira nota do aluno: ");
                scanf("%d", &n1);
            }
            matriz[i][1] = n1;
            printf("Informe a segunda nota do aluno: ");
            scanf("%d", &matriz[i][2]);
            i++;
        } else if(aux == 2) {
            break;
        } else {
            i--;
        }
    }
    for(j = 0; j <= i - 1; j++) {
        n1 = matriz[j][1];
        n2 = matriz[j][2];
        int media = (n1 + n2) / 2;
        printf("Aluno %d: {\n   Matrícula: %d\n   Nota 1: %d\n   Nota 2: %d\n}\n", j + 1, matriz[j][0], n1, n2);
    }
    printf("Programa encerrado com %d alunos cadastrados!", i);
}
