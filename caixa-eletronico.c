#include <stdio.h>
#include <math.h>
#include <time.h>

void esperar(int segundos) {
    int milissegundos = segundos * 1000;
    clock_t inicio = clock();
    while (clock() < inicio + milissegundos * CLOCKS_PER_SEC / 1000);
}

int main() {
    float saldo = 0, dinheiro;
    int funcao = 1;

    while (funcao != 4) {
        printf("------------------------\n");
        printf("   CAIXA ELETRÔNICO\n");
        printf("------------------------\n"); 
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("------------------------\n");
        printf("O que deseja fazer? ");
        scanf("%d", &funcao);
        getchar();

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        if (funcao < 1 || funcao > 4) {
            printf("Essa função não existe\n");
        } else if (funcao == 1) {
            printf("O seu saldo é de R$%.2f\n", saldo);
        } else if (funcao == 2) {
            printf("Quanto você deseja depositar? ");
            scanf("%f", &dinheiro);
            getchar();
            saldo += dinheiro;
            printf("Processando ...");
            fflush(stdout);
            esperar(3);
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            printf("O depósito foi um sucesso!\n");
        } else if (funcao == 3) {
            printf("Quanto você deseja sacar? ");
            scanf("%f", &dinheiro);
            getchar();
            printf("Processando ...");
            fflush(stdout);
            esperar(3);
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            if (dinheiro > saldo) {
                printf("Saldo insuficiente.\n");
            } else {
                saldo -= dinheiro;
                printf("O saque foi um sucesso!\n");
            }
        } else if (funcao == 4) {
            printf("Adeus! Até logo!\n");
        }

        printf("Aperte ENTER para continuar...\n");
        getchar();

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }

    return 0;
}