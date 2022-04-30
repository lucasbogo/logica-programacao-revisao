#include<math.h>
#include<stdio.h>
#include<string.h>
#define pi 3.1415
#define volumeLata 5
#define areaLata 3
#define precoLata 50

int main()
{

    float altura, arealateral, areadabase, areatotal, custo;
    int raio, quantidadelatas;


        printf("informe o raio do cilindro: ");
        scanf("%d",&raio);
        printf("informe a altura do cilindro: ");
        scanf("%f",&altura);

        areadabase = pi * pow(raio,2);
        arealateral = 2 * pi * raio * altura;
        areatotal = (2 * areadabase) + arealateral;

        quantidadelatas = areatotal / 15;
        custo = quantidadelatas * precoLata;

        printf("QUANTIDADE DE LATAS = %d\n",quantidadelatas);
        printf("CUSTO = R$  %.2f\n",custo);

    return 0;

}
