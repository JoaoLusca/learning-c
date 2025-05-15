#include <stdio.h>
#include <math.h>

int main(){
    float emprestimo = 1;
    float vl_parcelas;
    int parcela;
    while(emprestimo != 0)
    {
        printf("Digite o emprestimo que deseja (ou 0 para sair): ");
        scanf("%f", &emprestimo);
        getchar();

        if (emprestimo == 0) break;

        printf("Digite a quantidade de parcelas: ");
        scanf("%d", &parcela);
        getchar();

        if (parcela <= 0)
        {
            printf("Pagamento a vista? Obrigado!\n");
            printf("Aperte ENTER para continuar: ");
            getchar();
            system("clear");
            continue;

        }else if (parcela <= 10 && parcela != 0) 
        {
            vl_parcelas = (emprestimo*1.01)/parcela;

        } else if (parcela > 10 && parcela <= 24)
        {
            vl_parcelas = (emprestimo*1.02)/parcela;

        } else
        {
            vl_parcelas = (emprestimo*1.05)/parcela;

        }

        printf("O valor da parcela será de R$%.2f de reais\n", vl_parcelas);

        printf("Aperte ENTER para continuar: ");
        getchar();
        system("clear");
    }
    printf("Adeus!\n");
    return 0;
}