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
    int today = 30;
    int month = 12;
    int year = 2019;
    int HH = 13;
    int MM = 30;
    int SS = 59;
    int val1;
    int val2;
    int val3;
    float val4;
    int val5;
    int val6;
    float valorProdutoAV = 0;
    float valorProdutoPA = 0;
    float valorProdutoDE = 0;
    float valorProdutoSOMA = 0;
    char numCart[14];
    int length;
    int numParce;
    int numConta;
    int senhaConta;
    int prodVend;



    //IDENTIFICADOR DO TERMINAL
    char identifier[10] = "TEM001";
    char adress [100] = "Av. Rui Carneiro, 300. Miramar.";
    char CNPJ [15] = "21505538000128";
    char razaoSocial [20] = "Phoebus Tecnologia";
    char rodapeSale [300] = "A Phoebus � uma empresa que atua no mercado de meios de pagamentos h� 18 anos. Ela � pioneira na cria��o do primeiro sistema de pagamento de contas utilizando terminais POS";
    char rodapeRever [100] = "";


    //PRODUTO1AVISTA
    char id[3] = "a";
    int type = 1;
    char label[30] = "CREDITO A VISTA";
    float vMIn = 10.00;
    float vMAX = 1000.00;
    int quantProd1 = 5;

    //PRODUTO2PARCELADO
    char idP2[3] = "b";
    int typeP2 = 2;
    char labelP2[30] = "CREDITO PARCELADO";
    float vMInP2 = 10.00;
    float vMAXP2 = 10000.00;
    int quantProd2 = 8;

    //PRODUTO3DEBITO
    char idD[3] = "c";
    int typeD = 3;
    char labelD[30] = "DEBITO";
    float vMInD = 0;
    float vMAXD = 0;
    int quantProd3 = 10;


    while(true){
    printf("<%d> %d//%d %d:%d", terminalID, day, month, HH, MM);
    printf("\n <RAZAO SOCIAL> \n\n");
    printf(" \t Tecle ENTER(1) \n \t para vender \n\n");
    printf("2- ESTORNO \t 3 - RELAT \n");
    scanf("%d", &val1);

        if (val1 == 1){
            //AREA DE VENDAS
            printf("AREA DE VENDAS \n");
            printf("ESCOLHA A VENDA \n 1- CREDITO A VISTA \n 2-CREDITO PARCELADO \n 3 - DEBITO \n");
            scanf("%d", &val2);
            if (val2 == 1){
                printf("\t <VENDA CREDITO A VISTA> \n\n");
                printf("Valor do produto (R$) \n");
                scanf("%f", &valorProdutoAV);
                if (valorProdutoAV < vMIn){
                    printf("Valor Menor que o Minimo");
                    break;
                } else if(valorProdutoAV > vMAX) {
                    printf("Valor maior que o Maximo.");
                    break;
                } else {
                    printf("\t <VENDA CREDITO A VISTA> \n\n");
                    printf("Digite o numero do cartao\n");
                    scanf("%s", numCart);
                    length = strlen(numCart);
                    if (length > 14 || length < 11){
                        printf("Numero de cartao invalido\n");
                        break;
                    } else {
                        printf("\t <VENDA CREDITO A VISTA> \n\n");
                        printf("Deseja confirmar a venda? (Y(1)/N(0) \n");
                        scanf("%d", &val3);
                         if(val3 == 0) {
                            printf("Opera��o Cancelada \n");
                            break;
                        } else {
                            quantProd1 = --quantProd1;
                            prodVend = prodVend+1;
                            valorProdutoSOMA =+ valorProdutoAV;
                            printf("Venda Realizada com Sucesso \n\n\n");
                            printf("\t <%s> \n\t <%s> \n\t CNPJ: <%s> \n DATA: %d/%d/%d", razaoSocial, adress, CNPJ, day, month, year);
                            printf(" \t TERMINAL: %s \n <%s> \n <%s> \n\n", identifier, label, numCart);
                            printf("VALOR APROVADO: R$ <%2.f>", valorProdutoAV);
                            printf("\n\n\n <%s> \n\n", rodapeSale);
                            continue;
                        }
                    }
                }
                //printf("VALOR (R$) \n %f", &valorProduto);
            } else if(val2 == 2) {
                //PARCELADO
                printf("\t <VENDA PARCELADO> \n\n");
                printf("Valor do produto (R$) \n");
                scanf("%f", &valorProdutoPA);
                printf("Numero de Parcelas Desejadas \n");
                scanf("%d", &numParce);
                if (valorProdutoPA < vMInP2){
                    printf("Valor Menor que o Minimo");
                    break;
                } else if(valorProdutoPA > vMAXP2) {
                    printf("Valor maior que o Maximo.");
                    break;
                } else {
                    printf("\t <VENDA PARCELADA> \n\n");
                    printf("Digite o numero do cartao\n");
                    scanf("%s", numCart);
                    length = strlen(numCart);
                    if (length > 14 || length < 11){
                        printf("Numero de cartao invalido\n");
                        break;
                    } else {
                        printf("\t <VENDA PARCELADA> \n\n");
                        printf("Deseja confirmar a venda? (Y(1)/N(0) \n");
                        scanf("%d", &val3);
                        if(val3 == 0) {
                            printf("Opera��o Cancelada \n");
                            break;
                        } else {
                            quantProd2 = --quantProd2;
                            prodVend = prodVend+1;
                            valorProdutoSOMA =+ valorProdutoPA;
                            printf("Venda Realizada com Sucesso \n\n\n");
                            printf("\t <%s> \n\t <%s> \n\t CNPJ: <%s> \n DATA: %d/%d/%d", razaoSocial, adress, CNPJ, day, month, year);
                            printf(" \t TERMINAL: %s \n <%s> \n <%s> \n\n", identifier, labelP2, numCart);
                            val4 = (valorProdutoPA/numParce);
                            printf("VALOR APROVADO: R$ <%2.f> X %d", val4, numParce);
                            printf("\n\n\n <%s> \n\n", rodapeSale);
                            continue;
                        }

                    }
                }

            } else if( val2 == 3) {
                //DEBITO
                printf("\t <VENDA DEBITO> \n\n");
                printf("Valor do produto (R$) \n");
                scanf("%f", &valorProdutoDE);
                printf("\t <VENDA DEBITO> \n\n");
                printf("Digite numero da conta\n");
                scanf("%d", &numConta);
                printf("Digite Senha da conta\n");
                scanf("%d", &senhaConta);
                printf("\t <VENDA DEBITO> \n\n");
                        printf("Deseja confirmar a venda? (Y(1)/N(0) \n");
                        scanf("%d", &val3);
                        if(val3 == 0) {
                            printf("Opera��o Cancelada \n");
                            break;
                        } else {
                            quantProd3 = --quantProd3;
                            prodVend = prodVend+1;
                            valorProdutoSOMA =+ valorProdutoDE;
                            printf("Venda Realizada com Sucesso \n\n\n");
                            printf("\t <%s> \n\t <%s> \n\t CNPJ: <%s> \n DATA: %d/%d/%d", razaoSocial, adress, CNPJ, day, month, year);
                            printf(" \t TERMINAL: %s \n <%s> \n <%d> \n\n", identifier, labelD, numConta);
                            printf("VALOR APROVADO: R$ <%2.f>", valorProdutoDE);
                            printf("\n\n\n <%s> \n\n", rodapeSale);
                            continue;
                        }
			}
			val1 = 0;
            continue;
		} else if (val1 == 2) {
            // AREA DE ESTORNO
            printf(" \t <ESTORNO> \n\n");
            printf("Vendas Recentes \n");
            printf("%d:%d \t R$ %2.f \t ID: %s \n", HH, MM, valorProdutoAV,id);
            printf("%d:%d \t R$ %2.f \t ID: %s \n", HH, MM, valorProdutoPA,id);
            printf("%d:%d \t R$ %2.f \t ID: %s \n", HH, MM, valorProdutoDE,id);
            printf("Deseja Realizar um Estorno? (Y(1)/N(0)) \n\n");
            scanf("%d", &val5);
            if(val5 == 0){
                printf("Estorno Cancelado \n");
                continue;
            } else {
                printf("Tipo de Estorno que deseja efetuar? \n 1 - DEBITO \t 2 - A VISTA \t 3 - PARCELADO \n");
                scanf("%d", &val6);
                if (val6 == 1){
                    printf("Data da Compra: (%d//%d//%d) \n", day, month, year);
                    scanf("");
                    if(today == day) {
                        printf("Estorno Realizado com Sucesso \n\n\n");
                        printf("\t <%s> \n\t <%s> \n\t CNPJ: <%s> \n DATA: %d/%d/%d", razaoSocial, adress, CNPJ, day, month, year);
                        printf("%d//%d//%d \t %d:%d:%d \t %s \n", day, month, year, HH, MM, SS, identifier);
                        printf("ESTORNO <%s> \t %s \n", labelD, numCart);
                        printf(" VALOR CANCELADO: \t <R$> %2.f \n", valorProdutoDE);
                        printf("\n\n\n <%s> \n\n", rodapeSale);
                        continue;
                    } else {
                        printf("Estorno nao pode ser efetuado");
                        continue;
                    }

                } else if(val6 == 2) {
                    printf("Data da Compra: (%d//%d//%d) \n", day, month, year);
                    if (today < day+5 ){
                            printf("Estorno Realizado com Sucesso \n\n\n");
                            printf("\t <%s> \n\t <%s> \n\t CNPJ: <%s> \n DATA: %d/%d/%d", razaoSocial, adress, CNPJ, day, month, year);
                            printf("%d//%d//%d \t %d:%d:%d \t %s \n", day, month, year, HH, MM, SS, identifier);
                            printf("ESTORNO <%s> \t %s \n", label, numCart);
                            printf(" VALOR CANCELADO: \t <R$> %2.f \n", valorProdutoAV);
                            printf("\n\n\n <%s> \n\n", rodapeSale);
                        } else {
                            printf("Estorno nao pode ser efetuado");
                            continue;
                    }
                } else if (val6 == 3) {
                    printf("Data da Compra: (%d//%d//%d) \n", day, month, year);
                    if (today < day+5) {
                            printf("Estorno Realizado com Sucesso \n\n\n");
                            printf("\t <%s> \n\t <%s> \n\t CNPJ: <%s> \n DATA: %d/%d/%d", razaoSocial, adress, CNPJ, day, month, year);
                            printf("%d//%d//%d \t %d:%d:%d \t %s \n", day, month, year, HH, MM, SS, identifier);
                            printf("ESTORNO <%s> \t %s \n", label, numCart);
                            printf(" VALOR CANCELADO: \t <R$> %2.f \n", valorProdutoPA);
                            printf("\n\n\n <%s> \n\n", rodapeSale);
                        } else {
                            printf("Estorno nao pode ser efetuado");
                            continue;

                    }
                }
            }
            val1 = 0;
            continue;
        } else if (val1 == 3){
            printf("AREA DE RELATORIO \n");
            printf("\t <%s> \n\t <%s> \n\t CNPJ: <%s> \n DATA: %d/%d/%d \t", razaoSocial, adress, CNPJ);
            printf("%d/%d/%d \t %d:%d:%d \t %s \n", day, month, year, HH, MM, SS, identifier);
            printf("<%s> \n QNT: <%d> \t VALOR: R$ <%2.f> \n", label, quantProd1, valorProdutoAV);
            printf("<%s> \n QNT: <%d> \t VALOR: R$ <%2.f> \n", labelP2, quantProd2, valorProdutoPA);
            printf("<%s> \n QNT: <%d> \t VALOR: R$ <%2.f> \n", labelD, quantProd3, valorProdutoDE);

            printf("-------------------- TOTAL --------------------");
            printf("\n QNT: <%d> \t VALOR: R$ <%f> \n", prodVend, valorProdutoSOMA);



            val1 = 0;
            continue;
		} else {
			printf("AREA DE ERRO");
            break;
		}

	}
	return 0;
}

