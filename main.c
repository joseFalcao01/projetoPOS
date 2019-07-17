#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <conio.h>


int main()
{
    int terminalID = 123456789;
    int day = 30;
    int month = 12;
    int HH = 13;
    int MM = 30;
    int val1;
    int val2;
    int numCart;


    printf("<%d> %d//%d %d:%d", terminalID, day, month, HH, MM);
    printf("\n <RAZAO SOCIAL> \n\n");
    printf(" \t Tecle ENTER(1) \n \t para vender \n\n");
    printf("2- ESTORNO \t 3 - RELAT \n");
    while(true){
    scanf("%d", &val1);

        if (val1 == 1){
            //AREA DE VENDAS
            printf("AREA DE VENDAS");
            printf("ESCOLHA A VENDA \n 1- CREDITO A VISA \n 2-CREDITO PARCELADO \n 3 - DEBITO \n");
            scanf("%d", val2);
            if (val2 == 1){
                printf("\t <VENDA CREDITO A VISTA>");
                int numCart;
            }

            val1 = 0;
            continue;
        }else if (val1 == 2) {
            printf("AREA DE ESTORNO \n");
            val1 = 0;
            continue;
        }else if (val1 == 3){
            printf("AREA DE RELATORIO \n");
            val1 = 0;
            continue;
        }else{
            printf("AREA DE ERRO");
            break;
        }
    }






    return 0;
}
