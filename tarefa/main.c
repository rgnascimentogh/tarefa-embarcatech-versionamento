#include <stdio.h>
#include<stdlib.h>
#include "lib/unidades_de_medidas.h"

int main() {
    system("chcp 65001>nul");
    int op;

    do
    {  
        printf("\nEscolha uma das seguintes opções:\n 1.Unidade de Temperatura\n 2.Unidade de Tempo\n 3.Unidade de Comprimento\n 4.Unidade de Volume\n 5.Unidade de área\n 6.Sair\n Opção: ");
        scanf("%d", &op);
        switch (op)
        {
            case 1:
                unidadeTemperatura();
                break;
            case 2:
                UnidadeTempo();
                break;
            case 3:
                UnidadeComprimento();
                break;
            case 4:
                UnidadeVolume();
                break;
            case 5:
            {
                float valor_metros;
                printf("Qual o valor em Metros?: ");
                scanf("%f", &valor_metros);
                float resultado = converter_m_quadrado_cm_quadrado(valor_metros);
                printf("Resultado: %f", resultado);
                break;
            }
            case 6:
            {
                potencia();
                break;
            }
            default:
                if (op < 1 || op > 6)
                {
                    printf("\nOpção Inválida!\n");
                }
                
                break;
        }
    } while (op != 6);
    
        
        return 0;
    }
