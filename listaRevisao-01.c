#include <stdio.h>

int main()
{
   int tempo, horas, horSeg, minutos, segundos;
   horSeg=3600;

        printf("Entre com o numero de segundos: ");
        scanf("%d", &tempo);

            horas = (tempo/horSeg); 
            minutos = (tempo -(horSeg*horas))/60;
            segundos = (tempo -(horSeg*horas)-(minutos*60));

        printf("%dh : %dm :%ds \n",horas,minutos,segundos);
   
    return 0;
}