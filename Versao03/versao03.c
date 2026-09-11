#include <stdio.h>

int main() {
    int peso; 
    int altura; 
    float imc;

    printf("Insira o seu peso[g]: ");
    scanf("%i", &peso);

    printf("Insira o seu altura[cm]: ");
    scanf("%i", &altura);

    imc = (10.0 * peso) / (altura * altura);

    printf("imc = %i/(%i^2) = %f \n",peso, altura, imc);

    
    return 0;
}