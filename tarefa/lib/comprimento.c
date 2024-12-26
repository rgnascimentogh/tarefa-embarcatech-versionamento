
#include <stdio.h>

float converte_cm_m(float);
float converte_mm_m(float);
float converter_m_quadrado_cm_quadrado(float);

void UnidadeComprimento() {
    printf("\nResultado: %.2f metros.", converte_cm_m(120));  //chamada da funcao que converte de centimetros para metros.
    printf("\nResultado: %.2f metros.", converte_mm_m(1700));  //chamada da funcao que converte de milimetros para metros.
    printf("\nResultado: %.2f centimetro quadrado.\n\n", converter_m_quadrado_cm_quadrado(1.15));  //chamada da funcao que converte de metro quadrado para centimetro quadrado.

}

//Autor: Hercules Sampaio Oliveira
float converte_cm_m(float cm){

    float resultado;

    resultado = cm / 100;  //realiza o calculo para metros

    return resultado;  //retorna o resultado

}
//Autor: Hercules Sampaio Oliveira
float converte_mm_m(float mm){

    float resultado;

    resultado = mm / 1000;  //realiza o calculo para metros

    return resultado;  //retorna o resultado

}