#include <stdio.h>
#include <string.h>

int main() {
    int lin = 3, col = 3;
    /*
    Coluna 1: matrícula
    Coluna 2: nota 1
    Coluna 3: nota 2
    */
    char titles[5][30] = {
        "Matrícula", "Nota 1", "Nota 2", "Média", "Resultado",
    };
    float matriz[lin][col];
    srand(time(NULL));
    for(int i = 0; i <= lin - 1; i++) {
        printf("╒◖════════════════════════════◗╕\n");
        int mat;
        float n1, n2;
        printf("🔴 Informe a matrícula do %dº aluno: ", i + 1);
        scanf("%d", &mat);
        printf("🟠 Informe a 1º nota do %dº aluno: ", i + 1);
        scanf("%f", &n1);
        printf("🟡 Informe a 2º nota do %dº aluno: ", i + 1);
        scanf("%f", &n2);
        matriz[i][0] = mat;
        matriz[i][1] = n1;
        matriz[i][2] = n2;
        printf("╘◖════════════════════════════◗╛\n\n");
    }
    
    for(int i = 0; i <= lin - 1; i++) {
        printf("{\n");
        printf("    \"%s\": %.0f,\n", titles[0], matriz[i][0]);
        for(int j = 1; j <= col - 1; j++) {
            printf("    \"%s\": %.2f,\n", titles[j], matriz[i][j]);
        }
        float media = (matriz[i][1] + matriz[i][2]) / 2;
        printf("    \"%s\": %.2f,\n", titles[3], media);
        if(media >= 6.00) {
            printf("    \"%s\": \"Aprovado!\"\n", titles[4]);
        } else {
            printf("    \"%s\": \"Reprovado!\"\n", titles[4]);
        }
        printf("}, \n");
    }
    return 0;
}
