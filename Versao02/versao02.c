#include <stdio.h>

int main() {
    float peso; 
    float altura; 
    float imc;

    printf("Insira o seu peso[kg]: ");
    scanf("%f", &peso);

    printf("Insira o seu altura[m]: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("imc = %f/(%f^2) = %f \n",peso, altura, imc);

    
    return 0;
}