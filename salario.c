#include <stdio.h>
#include <math.h>


int main(){
    float sal, sal_liq;
    float ir = 0.10;
    float inss = 0.15;
    float plano = 0.10;
    printf("-----------------------------\n");
    printf("   CALCULAR SALÁRIO LÍQUIDO\n");
    printf("-----------------------------\n");
    sal = 1;
    while (sal != 0)
    {
        printf("Digite seu salário bruto:\n");
        scanf("%f", &sal);
        getchar();

        if(sal == 0) break;

        system("clear"); // ou usa "cls" para windows
        sal_liq = sal * (1 - (ir + inss + plano));

        printf("O salário bruto descontando taxas de 0,1 de IR, 0,15 de INSS e 0,1 de plano médico, fica com total líquido de %.2f\n", sal_liq);
        printf("Aperte ENTER para continuar");
        getchar();
        system("clear");
    }
    printf("Adeus!\n");
    return 0;
}
