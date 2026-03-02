#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Peso (kg): ");
    scanf("%f", &peso);

    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5)
        printf("Abaixo do peso.\n");
    else if (imc < 25)
        printf("Peso normal.\n");
    else
        printf("Acima do peso.\n");

    return 0;
}