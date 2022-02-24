//a variável valorT foi criada com efeito acumulativo de valores

#include <stdio.h>
 
int main() {
 
    int cod, quant;
    float valorI, valorT;

    scanf("%d %d %f", &cod, &quant, &valorI);
    valorT =  quant * valorI;
    
    scanf("%d %d %f", &cod, &quant, &valorI);
    valorT = valorT + quant * valorI;
    
    
    printf ("VALOR A PAGAR: R$ %.2f\n", valorT);



    return 0;
}