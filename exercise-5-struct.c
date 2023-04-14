#include <stdio.h>
#include <string.h>

struct aluno {
    char name[100];
    int matricula;
    char gender[1];
    float nota1;
    float nota2;
};

int main() {
    int lin = 3;
    struct aluno alunos[lin];
    for(int i = 0; i <= lin - 1; i++) {
        printf("╒◖════════════════════════════◗╕\n");
        char n[100];
        char g[1];
        int mat;
        float n1, n2;
        printf("🔴 Informe o nome do %dº aluno: ", i + 1);
        scanf("%s", &n);
        printf("🟠 Informe a matrícula do %dº aluno: ", i + 1);
        scanf("%d", &mat);
        printf("🟡 Informe o gênero do %dº aluno: ", i + 1);
        scanf("%s", &g);
        printf("🟢 Informe a 1º nota do %dº aluno: ", i + 1);
        scanf("%f", &n1);
        printf("🔵 Informe a 2º nota do %dº aluno: ", i + 1);
        scanf("%f", &n2);
        strcpy(alunos[i].name, n);
        alunos[i].matricula = mat;
        strcpy(alunos[i].gender, g);
        alunos[i].nota1 = n1;
        alunos[i].nota2 = n2;
        printf("╘◖════════════════════════════◗╛\n\n");
    }
    
    for(int i = 0; i <= lin - 1; i++) {
        printf("{\n");
        printf("    \"Nome\": \"%s\",\n", alunos[i].name);
        printf("    \"Matrícula\": %d,\n", alunos[i].matricula);
        printf("    \"Gênero\": \"%s\",\n", alunos[i].gender);
        printf("    \"Nota 1\": %.2f,\n", alunos[i].nota1);
        printf("    \"Nota 2\": %.2f,\n", alunos[i].nota2);
        float media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        printf("    \"Média\": %.2f,\n", media);
        if(media >= 6.00) {
            printf("    \"Resultado\": \"Aprovado!\"\n");
        } else {
            printf("    \"Resultado\": \"Reprovado!\"\n");
        }
        printf("}, \n");
    }
    return 0;
}
