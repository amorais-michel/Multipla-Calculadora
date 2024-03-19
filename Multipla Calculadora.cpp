#include<stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {

  char opcao;

  char escolha;

  int i, numero, contador;
  printf("MULTIPLA CALCULADORA\n");
  printf("\n------------------------------");
  printf("\nMENU:");
  printf("\n(1)Calcular Equacoes do segundo grau (Formula de Bhaskara)");
  printf("\n(2)Calcular o Raio e o Perimetro da Circunferencia");
  printf("\n(3)Calcular o Teorema de Pitagoras");
  printf("\n(4)Calcular a Raiz Quadrada");
  printf("\n(5)Calcular as 4 Operacoes");
  printf("\n------------------------------");
  printf("\nESCOLHA UMA OPCAO:");
  scanf("%c", & opcao);
  switch (opcao) {
  case '1':
    do {
      float a, b, c, delta, x1, x2;
      printf("Coeficiente A:");
      scanf("%f", & a);
      printf("\nCoeficiente B");
      scanf("%f", & b);
      printf("\nCoeficiente C:");
      scanf("%f", & c);

      delta = pow(b, 2) - 4 * a * c;

      if (delta < 0) {
        printf("\nDelta Negativo =%.2f", delta);

        break;

      } else {
        if (delta == 0) {
          printf("\nRaizes Iguais");

        } else {
          printf("\nRaizes Diferentes");
          x1 = ((-b) + sqrt(delta)) / (2 * a);
          x2 = ((-b) - sqrt(delta)) / (2 * a);
          printf("\nx1=%.2f e x2=%.2f\n\n", x1, x2);

          printf("\n DESEJA CONTINUAR(sim=1,nao=2)");
          scanf("%d", & contador);
        }
      }
    }

    while (contador != 2);
    break;
  case '2':
    do {
      float raio, perimetro, area;
      printf("Digite o Raio da Circunferencia:");
      scanf("%f", & raio);
      area = raio * raio * 3.14;
      perimetro = raio * 3.14 * 2;
      printf("Raio=%.2f e Perimetro=%.2f", area, perimetro);
      printf("\n DESEJA CONTINUAR(sim=1,nao=2)");
      scanf("%d", & contador);
    }
    while (contador != 2);
    break;
  case '3':
    do {
      float raizdahipotenusa, hipotenusa, catetoadjacente, catetooposto;
      printf("\nSabe a Hipotenusa (SIM=1,NAO=2)");
      scanf("%s", & escolha);
      switch (escolha) {
      case '1':
        printf("\nCateto Adjacente:");
        scanf("%f", & catetoadjacente);
        printf("\nCateto Oposto:");
        scanf("%f", & catetooposto);
        hipotenusa = pow(catetoadjacente, 2) - pow(catetooposto, 2);
        raizdahipotenusa = sqrt(hipotenusa);
        printf("\nHIPOTENUSA SEM RAIZ=%.2f", hipotenusa);
        printf("\nHIPOTENUSA COM RAIZ=%.2f", raizdahipotenusa);
        break;
      case '2':

        printf("\nCateto Adjacente:");
        scanf("%f", & catetoadjacente);
        printf("\nCateto Oposto:");
        scanf("%f", & catetooposto);
        hipotenusa = pow(catetoadjacente, 2) + pow(catetooposto, 2);
        raizdahipotenusa = sqrt(hipotenusa);
        printf("\nHIPOTENUSA=%.2f", hipotenusa);
        printf("\nHIPOTENUSA COM RAIZ=%.2f", raizdahipotenusa);

        break;

      }
      printf("\n DESEJA CONTINUAR(sim=1,nao=2)");
      scanf("%d", & contador);
    } while (contador != 2);
    break;
  case '4':
    do {
      float num, num2;

      printf("Digite um numero para tirar a sua raiz quadrada:");
      scanf("%f", & num);
      num2 = sqrt(num);
      printf("Raiz de %f eh %.2f", num, num2);
      printf("\n DESEJA CONTINUAR(sim=1,nao=2)");
      scanf("%d", & contador);
    }
    while (contador != 2);
    break;
  case '5':
    do {
      float numero1, numero2, soma, subtracao, multiplicacao, divisao;
      printf("\nDigite um numero:");
      scanf("%f", & numero1);
      printf("\nDigite outro numero:");
      scanf("%f", & numero2);
      soma = numero1 + numero2;
      subtracao = numero1 - numero2;
      multiplicacao = numero1 * numero2;
      divisao = numero1 / numero2;
      printf("\nSoma=%f", soma);
      printf(" \nSubtracao=%f", subtracao);
      printf("\nmultiplicacao=%f", multiplicacao);
      printf("\ndivisao=%f", divisao);
      printf("\n DESEJA CONTINUAR(sim=1,nao=2)");
      scanf("%d", & contador);

    } while (contador != 2);
    break;

  }
}
