#include<stdio.h>

int main(){

    int horas;
    float valor, resultado;

    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Insira o valor da hora: ");
    scanf("%f", &valor);

    resultado = (horas * valor);

    printf("O seu salario: %.2f", resultado);
}