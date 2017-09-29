#include <stdio.h>

int main()
{
    float csm;
    float kWh;

do{
    {
        printf("\nDigite o valor do consumo do mes:");
        scanf("%f", &csm);

        printf("\nDigite a tarifa de kWh:");
        scanf("%f", &kWh);
        }

        float taxes;

        if(csm && kWh >0){

               csm = csm * kWh;
               taxes= csm / 10;
               csm= csm + taxes;
               printf("\nSua conta com imposto custou: %f\n", csm);

               }


               printf("\nDeseja Continuar? 1-Sim 2-Nao:");
               scanf("%f", &csm);} while (csm==1);






        system("pause");
        return 0;
}

