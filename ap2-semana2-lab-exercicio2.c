#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.\n", peso, altura, imc);

    return 0;
}
