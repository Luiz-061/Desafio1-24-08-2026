#include <stdio.h>

int main() {
    int peso; 
    int altura; 
    int imc;

    printf("Insira o seu peso[g]: ");
    scanf("%i", &peso);

    printf("Insira o seu altura[cm]: ");
    scanf("%i", &altura);

    imc = 10 * peso / (altura * altura);

   printf("imc = %d/(%d^2) = %d \n",peso, altura, imc);

    
    return 0;
}