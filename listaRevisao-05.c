#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main()
{


    float compra,des,novo,par,acre;
    int forma;

        printf("\t\t\t\t\t\tAUTOATENDIMENTO\t\t\t\t\t");


        printf("\nFormas de pagamento\n");
        printf("\n1: Pagamento a vista - 15%% de desconto sobre o valor total da compra.\n");
        printf("2: Pagamento com cheque pre-datado para 30 dias - 10%% de desconto sobre o valor total da compra.\n");
        printf("3: Pagamento parcelado em 3 vezes - 5%% de desconto sobre o valor total da compra.\n");
        printf("4: Pagamento parcelado em 6 vezes - nao tem desconto.\n");
        printf("5: Pagamento parcelado em 12 vezes - 8%% de acrescimo sobre o valor total da compra.\n");
        scanf("%d",&forma);



        switch (forma) 
        {
	
            case 1: printf("\nDigite o valor total da compra: R$ ");
                    scanf("%f",&compra);
          
                        des= compra * 0.15;
                        novo = compra - des,

                    printf("\nvalor do desconto: R$ %.2f",des);
                    printf("\nvalor final da compra: R$ %.2f",novo);
            break;
  
            case 2: printf("\nDigite o valor total da compra: R$ ");
                    scanf("%f",&compra);
          
                        des= compra * 0.10;
                        novo = compra - des;

                    printf("\nvalor do desconto: R$ %.2f",des);
                    printf("\nvalor final da compra: R$ %.2f",novo);
            break;
  
            case 3: printf("\nDigite o valor total da compra: R$ ");
                    scanf("%f",&compra);
          
                        des = compra * 0.05;
                        novo = compra - des;
                        par = novo / 3;

                    printf("\nvalor do desconto: R$ %.2f",des);
                    printf("\nvalor final da compra: R$ %.2f",novo);
                    printf("\nvalor das parcelas:3 x R$ %.2f",par);
            break;
  
            case 4: printf("\nDigite o valor total da compra: R$ ");
                    scanf("%f",&compra);
          
                        par = compra / 6;

                    printf("\nvalor do desconto: nulo");
                    printf("\nvalor final da compra: R$ %.2f",compra);
                    printf("\nvalor das parcelas:6 x R$ %.2f",par);
            break;
  
            case 5: printf("\nDigite o valor total da compra: R$ ");
                    scanf("%f",&compra);
          
                        acre = compra * 0.08;
                        novo = compra + acre;
                        par = novo / 12;

                    printf("\nvalor do acrescimo: R$ %.2f",acre);
                    printf("\nvalor final da compra: R$ %.2f",novo);
                    printf("\nvalor das parcelas:12 x R$ %.2f",par);
            break;
        }

    return 0;

}
