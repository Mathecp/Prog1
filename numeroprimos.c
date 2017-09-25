/*
*Trabalho2: Numeros Primos
*Matheus Silva Pinheiro / matricula: 0050015192
*Prof: Alex Salgado
*/


#include <stdio.h>
#include <stdlib.h>

         int main()
         {
             int num;
             int i;
             int op;
do {
             int pri = 0;
             printf("\nOla meu nome eh Matheus Silva e vou calcular numeros primos\n");

             do{
             printf("\nEntre com um numero positivo:");
             scanf("%d", &num);
}             while(num<=0);

for (i=1; i <= num; i++){
    if (num % i == 0)
{
    pri++;
}

}

if (pri==2)
   printf("Esse numero eh primo");

   else
          printf("Esse numero nao eh primo");

   printf("\nDeseja Continuar? 1-Sim 2-Nao:");
   scanf("%d", &op);}while (op==1);

   printf("\n Obrigada ate a proxima!");

   system("pause");
   return 0;
}
