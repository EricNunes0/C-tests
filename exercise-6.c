#include <stdio.h>
#include <stdbool.h>

int lin = 5, col = 5;
int matrix[5][5];

/* Função para inserir número*/
int enterDigit(int l, int c) {
    int n;
    printf("🟡 Linha %d, Coluna %d: ", l + 1, c + 1);
    scanf("%d", &n);
    if(n == 0) {
        n = rand() % 9999;
        printf("🔁 Número aleatório selecionado: %d\n", n);
    }
    return n;
}

/* Função para adicionar número na matriz */
void addToMatrix(int l, int c, int value) {
    /*
    * l = Linha da matriz
    * c = Coluna da matriz
    * value = Valor para adicionar à matriz
    */
    matrix[l][c] = value;
}

/* Função para verificar se o número digitado já está na matriz */
bool checkMatrix(int value) {
    for(int i = 0; i <= lin - 1; i++) {
        for(int j = 0; j <= col - 1; j++) {
            if(value == matrix[i][j]) {
                printf("🔴 Este número já existe na matriz!\n", value, matrix[i][j]);
                return false;
            }
        }
    }
    return true;
}

/* Função para imprimir todos os números da matriz */
void printMatrix() {
    printf("╔═══════▣◎▣═══════╗\n");
    for(int i = 0; i <= lin - 1; i++) {
        for(int j = 0; j <= col - 1; j++) {
            printf("『%d』\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("╚═══════▣◎▣═══════╝\n");
}

/* Função para retornar os valores ímpares e pares */
void oddMatrix() {
    int odd = 0, even = 0;
    for(int i = 0; i <= lin - 1; i++) {
        for(int j = 0; j <= col - 1; j++) {
            if(matrix[i][j] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    printf("🔵 Total de números: %d\n🔵 Números pares: %d\n🔵 Números ímpares: %d\n", odd + even, even, odd);
}

int main() {
    printf("💡 Dica: Escolha o número 0 para adicionar um valor aleatório!\n");
    srand(time(NULL));
    for(int i = 0; i <= lin - 1; i++) {
        for(int j = 0; j <= lin - 1; j++) {
            int n = enterDigit(i, j);
            bool c = checkMatrix(n);
            c ? addToMatrix(i, j, n): j--;
        }
    }
    printMatrix();
    oddMatrix();
    printf("🟢 Programa finalizado!");
}
