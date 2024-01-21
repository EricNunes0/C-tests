// Online C compiler to run C program online
#include <stdio.h>


int main() {
    float cad[150][2], mat, n1, n2;
    int i = 0, j = 0, aux = 1;
    while(aux != 0) {
        printf("Deseja inserir um novo aluno? (1 - Sim | 2 - Não): ");
        scanf("%d", &aux);
        if(aux == 1) {
            printf("Informe a matrícula: ");
            scanf("%f", &mat);
            cad[i][0] = mat;
            printf("Informe a primeira nota: ");
            scanf("%f", &n1);
            cad[i][1] = n1;
            printf("Informe a segunda nota: ");
            scanf("%f", &n2);
            cad[i][2] = n2;
            i++;
        } else if(aux == 2) {
            printf("❌️ Programa encerrado!");
            aux = 0;
        }
    }
    for(int k = 0; k < i; k++) {
        float mat = cad[k][0];
        float nota1 = cad[k][1];
        float nota2 = cad[k][2];
        printf("\nAluno %d: {\n   Matrícula: %.0f\n   Nota 1: %.2f\n   Nota 2: %.2f\n}\n", (k + 1), cad[k][0], cad[k][1], cad[k][2]);
    }
    //printf("%.2f", media(4, 6));
    return 0;
}
