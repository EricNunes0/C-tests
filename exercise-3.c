#include <stdio.h>

int main() {
    int max = 50;
    int nota1[max], nota2[max], i, aux, n1, n2;
    char matriculas[max][30];
    while(i <= max) {
        printf("Deseja inserir um novo aluno? (1 - Sim | 2 - Não) ");
        scanf("%d", &aux);
        if(aux == 1) {
            printf("Informe a matrícula do %d aluno: ", i + 1);
            scanf("%s", &matriculas[i][30]);
            n1 = 11;
            while(n1 > 10) {
                printf("Informe a primeira nota do aluno: ");
                scanf("%d", &n1);
            }
            nota1[i] = n1;
            printf("Informe a segunda nota do aluno: ");
            scanf("%d", &nota2[i]);
            i++;
        } else if(aux == 2) {
            break;
        } else {
            i--;
        }
    }
    for(int j = 0; j <= i - 1; j++) {
        n1 = nota1[j];
        n2 = nota2[j];
        int media = (n1 + n2) / 2;
        printf("Matrícula: %s\nNota 1: %d\nNota 2: %d\n", matriculas[i], n1, n2);
    }
    printf("Programa encerrado com %d alunos cadastrados!", i);
}
