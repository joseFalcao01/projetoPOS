#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>


int main()
{
    int terminalID = 123456789;
    int day = 30;
    int month = 12;
    int HH = 13;
    int MM = 30;
    int val1;
    int val2;
    int val3;
    float valorProduto;
    char numCart[14];
    int length;


    //PRODUTO1
    char id[3] = "a";
    int type = 1;
    char label[30] = "CREDITO A VISTA";
    float vMIn = 10.00;
    float vMAX = 1000.00;


    printf("<%d> %d//%d %d:%d", terminalID, day, month, HH, MM);
    printf("\n <RAZAO SOCIAL> \n\n");
    printf(" \t Tecle ENTER(1) \n \t para vender \n\n");
    printf("2- ESTORNO \t 3 - RELAT \n");
    while(true){
    scanf("%d", &val1);

        if (val1 == 1){
            //AREA DE VENDAS
            printf("AREA DE VENDAS \n");
            printf("ESCOLHA A VENDA \n 1- CREDITO A VISTA \n 2-CREDITO PARCELADO \n 3 - DEBITO \n");
            scanf("%d", &val2);
            if (val2 == 1){
                printf("\t <VENDA CREDITO A VISTA> \n\n");
                printf("Valor do produto\n");
                scanf("%f", &valorProduto);
                if (valorProduto < vMIn){
                    printf("Valor Menor que o Minimo");
                    break;
                } else if(valorProduto > vMAX) {
                    printf("Valor maior que o Maximo.");
                    break;
                } else {
                    printf("Digite o numero do cartao\n");
                    scanf("%s", numCart);
                    length = strlen(numCart);
                    if (length > 14 || length < 11){
                        printf("Numero de cartao invalido\n");
                        break;
                    } else {
                        printf("Deseja Efetuar a venda? (Y(1)/N(0) \n");
                        scanf("%d", &val3);
                         if(val3 == 0) {
                            printf("Opera��o Cancelada \n");
                            break;
                        } else {
                            printf("Venda Realizada com Sucesso \n\n\n");
                            printf("\t <RAZAO SOCIAL> \n\t <ENDERECO> \n\t CNPJ: <CNPJ> \n DATA: DD/MM/AAAA \t TERMINAL: TTTTTT \n <ROTULO DO PRODUTO> \n <NUMERO DO CARTAO> \n");
                            printf("VALOR APROVADO: <VALOR> R$<VALOR>");
                            printf("\n\n <mensagem de rodape>");
                        }
                    }
                }
                //printf("VALOR (R$) \n %f", &valorProduto);
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
