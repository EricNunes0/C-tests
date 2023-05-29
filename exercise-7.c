#include <stdio.h>
#include <string.h>

int alunosLength = 10;

struct Cadastro {
    char name[50];
    char sobrenome[50];
    int age;
    int cpf;
    char email[100];
    char password[100];
};

int main() {
    int cmd = 1, aux = 0;
    struct Cadastro alu[alunosLength];
    while(cmd != 0) {
        printf("1 - Inserir cadastro:\n2 - Consultar cadastro:\n3 - Alterar cadastro:\n🔵 Informe a sua próxima ação: ");
        scanf("%d", &cmd);
        if(cmd == 1) {
            struct Cadastro addCadastro();
            alu[aux] = addCadastro(6);
            printf("🟢 Usuário cadastrado!\n");
            aux++;
        } else if(cmd == 2) {
            int consult = 0;
            printf("🔘 1 - Nome;\n🔘 2 - Sobrenome;\n🔘 3 - Idade;\n🔘 4 - CPF;\n🔘 5 - Email:\n🔵 Pelo o que deseja consultar o cadastro? ");
            scanf("%d", &consult);
            if(consult == 1) {
                char search[50];
                printf("🔎 Informe o nome da pessoa que deseja consultar: ");
                scanf("%s", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    int output = strcmp(alu[i].name, search);
                    if(output == 0) {
                        printCadastro(alu[i]);
                        resultsFound++;
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            } else if(consult == 2) {
                char search[50];
                printf("🔎 Informe o sobrenome da pessoa que deseja consultar: ");
                scanf("%s", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    int output = strcmp(alu[i].sobrenome, search);
                    if(output == 0) {
                        printCadastro(alu[i]);
                        resultsFound++;
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            } else if(consult == 3) {
                int search;
                printf("🔎 Informe a idade da pessoa que deseja consultar: ");
                scanf("%d", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    if(alu[i].age == search) {
                        printCadastro(alu[i]);
                        resultsFound++;
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            } else if(consult == 4) {
                int search;
                printf("🔎 Informe o CPF da pessoa que deseja consultar: ");
                scanf("%d", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    if(alu[i].cpf == search) {
                        printCadastro(alu[i]);
                        resultsFound++;
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            } else if(consult == 5) {
                char search[100];
                printf("🔎 Informe o email da pessoa que deseja consultar: ");
                scanf("%s", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    int output = strcmp(alu[i].email, search);
                    if(output == 0) {
                        printCadastro(alu[i]);
                        resultsFound++;
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            } else {
                printf("❗ Consulta inválida!\n");
            }
        } else if(cmd == 3) {
            int consult = 0;
            printf("🔘 1 - Nome;\n🔘 2 - Sobrenome;\n🔘 3 - CPF;\n🔘 4 - Email:\n🔵 Pelo o que deseja consultar o cadastro para alterá-lo? ");
            scanf("%d", &consult);
            if(consult == 1) {
                char search[50];
                printf("🔎 Informe o nome da pessoa que deseja consultar: ");
                scanf("%s", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    int output = strcmp(alu[i].name, search);
                    if(output == 0) {
                        printCadastro(alu[i]);
                        resultsFound++;
                        int edit = 0;
                        printf("🔘 1 - Nome;\n🔘 2 - Sobrenome;\n🔘 3 - Idade;\n🔘 4 - CPF;\n🔘 5 - Email:\n🔵 O que deseja alterar? ");
                        scanf("%d", &edit);
                        if(edit == 1) {
                            printf("🟡 Informe o nome: ");
                            scanf("%s", &alu[i].name);
                            printf("🟢 Nome editado com sucesso!\n");
                        } else if(edit == 2) {
                            printf("🟡 Informe o sobrenome: ");
                            scanf("%s", &alu[i].sobrenome);
                            printf("🟢 Sobrenome editado com sucesso!\n");
                        } else if(edit == 3) {
                            printf("🟡 Informe a idade: ");
                            scanf("%d", &alu[i].age);
                            printf("🟢 Idade editada com sucesso!\n");
                        } else if(edit == 4) {
                            printf("🟡 Informe o CPF: ");
                            scanf("%d", &alu[i].cpf);
                            printf("🟢 CPF editado com sucesso!\n");
                        } else if(edit == 5) {
                            printf("🟡 Informe o email: ");
                            scanf("%s", &alu[i].email);
                            printf("🟢 Email editado com sucesso!\n");
                        }
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            } else if(consult == 2) {
                char search[50];
                printf("🔎 Informe o sobrenome da pessoa que deseja consultar: ");
                scanf("%s", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    int output = strcmp(alu[i].sobrenome, search);
                    if(output == 0) {
                        printCadastro(alu[i]);
                        resultsFound++;
                        int edit = 0;
                        printf("🔘 1 - Nome;\n🔘 2 - Sobrenome;\n🔘 3 - Idade;\n🔘 4 - CPF;\n🔘 5 - Email:\n🔵 O que deseja alterar? ");
                        scanf("%d", &edit);
                        if(edit == 1) {
                            printf("🟡 Informe o nome: ");
                            scanf("%s", &alu[i].name);
                            printf("🟢 Nome editado com sucesso!\n");
                        } else if(edit == 2) {
                            printf("🟡 Informe o sobrenome: ");
                            scanf("%s", &alu[i].sobrenome);
                            printf("🟢 Sobrenome editado com sucesso!\n");
                        } else if(edit == 3) {
                            printf("🟡 Informe a idade: ");
                            scanf("%d", &alu[i].age);
                            printf("🟢 Idade editada com sucesso!\n");
                        } else if(edit == 4) {
                            printf("🟡 Informe o CPF: ");
                            scanf("%d", &alu[i].cpf);
                            printf("🟢 CPF editado com sucesso!\n");
                        } else if(edit == 5) {
                            printf("🟡 Informe o email: ");
                            scanf("%s", &alu[i].email);
                            printf("🟢 Email editado com sucesso!\n");
                        }
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            } else if(consult == 3) {
                int search;
                printf("🔎 Informe o CPF da pessoa que deseja consultar: ");
                scanf("%d", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    if(alu[i].age == search) {
                        printCadastro(alu[i]);
                        resultsFound++;
                        int edit = 0;
                        printf("🔘 1 - Nome;\n🔘 2 - Sobrenome;\n🔘 3 - Idade;\n🔘 4 - CPF;\n🔘 5 - Email:\n🔵 O que deseja alterar? ");
                        scanf("%d", &edit);
                        if(edit == 1) {
                            printf("🟡 Informe o nome: ");
                            scanf("%s", &alu[i].name);
                            printf("🟢 Nome editado com sucesso!\n");
                        } else if(edit == 2) {
                            printf("🟡 Informe o sobrenome: ");
                            scanf("%s", &alu[i].sobrenome);
                            printf("🟢 Sobrenome editado com sucesso!\n");
                        } else if(edit == 3) {
                            printf("🟡 Informe a idade: ");
                            scanf("%d", &alu[i].age);
                            printf("🟢 Idade editada com sucesso!\n");
                        } else if(edit == 4) {
                            printf("🟡 Informe o CPF: ");
                            scanf("%d", &alu[i].cpf);
                            printf("🟢 CPF editado com sucesso!\n");
                        } else if(edit == 5) {
                            printf("🟡 Informe o email: ");
                            scanf("%s", &alu[i].email);
                            printf("🟢 Email editado com sucesso!\n");
                        }
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            } else if(consult == 4) {
                char search[50];
                printf("🔎 Informe o email da pessoa que deseja consultar: ");
                scanf("%s", &search);
                int resultsFound = 0;
                for(int i = 0; i <= aux - 1; i++) {
                    int output = strcmp(alu[i].email, search);
                    if(output == 0) {
                        printCadastro(alu[i]);
                        resultsFound++;
                        int edit = 0;
                        printf("🔘 1 - Nome;\n🔘 2 - Sobrenome;\n🔘 3 - Idade;\n🔘 4 - CPF;\n🔘 5 - Email:\n🔵 O que deseja alterar? ");
                        scanf("%d", &edit);
                        if(edit == 1) {
                            printf("🟡 Informe o nome: ");
                            scanf("%s", &alu[i].name);
                            printf("🟢 Nome editado com sucesso!\n");
                        } else if(edit == 2) {
                            printf("🟡 Informe o sobrenome: ");
                            scanf("%s", &alu[i].sobrenome);
                            printf("🟢 Sobrenome editado com sucesso!\n");
                        } else if(edit == 3) {
                            printf("🟡 Informe a idade: ");
                            scanf("%d", &alu[i].age);
                            printf("🟢 Idade editada com sucesso!\n");
                        } else if(edit == 4) {
                            printf("🟡 Informe o CPF: ");
                            scanf("%d", &alu[i].cpf);
                            printf("🟢 CPF editado com sucesso!\n");
                        } else if(edit == 5) {
                            printf("🟡 Informe o email: ");
                            scanf("%s", &alu[i].email);
                            printf("🟢 Email editado com sucesso!\n");
                        }
                    }
                }
                if(resultsFound == 0) {
                    printf("🔴 Nenhum usuário encontrado! :(\n");
                }
            }
        } else {
            printf("❗ Comando inválido!\n");
        }
        printf("\n");
    }
    return 0;
}

struct Cadastro addCadastro(int input) {
    struct Cadastro alu;
    if(input == 0) {
        printf("🟡 Informe o nome: ");
        scanf("%s", &alu.name);
        return alu;
    } else if(input == 1) {
        printf("🟡 Informe o sobrenome: ");
        scanf("%s", &alu.sobrenome);
    } else if(input == 2) {
        printf("🟡 Informe a idade: ");
        scanf("%d", &alu.age);
    } else if(input == 3) {
        printf("🟡 Informe o CPF: ");
        scanf("%d", &alu.cpf);
    } else if(input == 4) {
        printf("🟡 Informe o email: ");
        scanf("%s", &alu.email);
    } else if(input == 5) {
        printf("🟡 Informe a senha: ");
        scanf("%s", &alu.password);
    } else if(input == 6) {
        printf("🟡 Informe o nome: ");
        scanf("%s", &alu.name);
        printf("🟡 Informe o sobrenome: ");
        scanf("%s", &alu.sobrenome);
        printf("🟡 Informe a idade: ");
        scanf("%d", &alu.age);
        printf("🟡 Informe o CPF: ");
        scanf("%d", &alu.cpf);
        printf("🟡 Informe o email: ");
        scanf("%s", &alu.email);
        printf("🟡 Informe a senha: ");
        scanf("%s", &alu.password);
    }
    return alu;
}

void printCadastro(struct Cadastro alu) {
    printf("{\n");
    printf("    \"Nome\": \"%s\",\n", alu.name);
    printf("    \"Sobrenome\": \"%s\",\n", alu.sobrenome);
    printf("    \"Idade\": %d,\n", alu.age);
    printf("    \"CPF\": %d,\n", alu.cpf);
    printf("    \"Email\": \"%s\",\n", alu.email);
    printf("    \"Senha\": \"%s\",\n", alu.password);
    printf("}, \n");
}
