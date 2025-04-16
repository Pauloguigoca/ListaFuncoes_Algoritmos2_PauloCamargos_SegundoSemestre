#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "atividade_funcoes.h"

int main()
  {
  int selecao;
  selecao == 1;

  while(selecao != 0)
    {
    printf("ATIVIDADE FUNCOES, SEGUNDO SEMESTRE, ALUNO: PAULO GUILHERME");
    printf("\n\n SELECIONE UMA OPCAO: ");
    printf("\n\n  [0] SAIR, [1] SAUDACAO, [2] TEXTO_PARAMETRO, [3] TEXTO_OK, [4] BHASKARA, [5] TEMPO_SEGUNDOS, [6] IDADE_EM_DIAS");
    printf(", [7] VALOR_PERFEITO, [8] IDADE_NADADOR, [9] POSTIVO_NEGATIVO, [10] IMPAR_PAR, [11] NOTA_CONCEITO, [12] ORDENAR_NUMEROS, ");
    printf("[13] TRIANGULOS, [14] MEDIA_ARITMETICA, [15] POTENCIACAO\n");
    scanf("%d", &selecao);

    if(selecao == 1)
      {
      saudacao();
      }

    if(selecao == 2)
      {
      char textinho[100];
      printf("digite um texto: ");
      scanf(" %s", textinho);
      texto_parametro(textinho);
      }

    if(selecao == 3)
      {
      char textinho_ok[100];
      printf("digite um texto: ");
      scanf(" %s", textinho_ok);
      texto_ok(textinho_ok);
      }
    if(selecao == 4)
      {
      int la;
      int lb;
      int lc;
      printf("digite coeficiente a: ");
      scanf("%d", &la);
      printf("digite coeficiente b: ");
      scanf("%d", &lb);
      //printf("digite coeficiente c: ");
      //scanf("%d", &lc);

      bhaskara(la, lb, lc);
      }
    if(selecao == 6)
      {
      float ano, mes, dia;
      printf("digite o dia, mes e ano de seu nascimento: ");
      scanf("%f", &dia);
      scanf("%f", &mes);
      scanf("%f", &ano);
      idade_em_dias(dia, mes, ano);
      }
    if(selecao == 5)
      {
      float segundos;
      printf("digite o tempo em segundos: ");
      scanf("%f", &segundos);

      tempo(segundos);
      }
    if(selecao == 7)
      {
      int numero;
      printf("digite um numero: ");
      scanf("%d", &numero);

      numeroperfeito(numero);
      }
    if(selecao == 8)
      {
      int idadenadador;
      printf("digite a idade do nadador: ");
      scanf("%d", &idadenadador);

      categoria(idadenadador);
      }
    if(selecao == 9)
      {
      int numero4;
      printf("digite um numero: ");
      scanf("%d", &numero4);

      positivo_negativo(numero4);
      }
    if(selecao == 10)
      {
      int numeral2;
      printf("digite um numero: ");
      scanf("%d", &numeral2);

      imparpar(numeral2);
      }
    if(selecao == 11)
      {
      float numeral3;
      printf("digite a media do aluno: ");
      scanf("%f", &numeral3);

      conceito(numeral3);
      }
    if(selecao == 13)
      {
      int lado_a, lado_b, lado_c;
      printf("digite os lados do triangulo: ");
      scanf("%d", &lado_a);
      scanf("%d", &lado_b);
      scanf("%d", &lado_c);

      triangulos(lado_a, lado_b, lado_c);
      }
    if(selecao == 12)
      {
      int num1, num2, num3;
      printf("digite tres valores inteiros: ");
      scanf("%d", &num1);
      scanf("%d", &num2);
      scanf("%d", &num3);

      ordenar(num1, num2, num3);
      }
    if(selecao == 14)
      {
      media();
      }
    if(selecao == 15)
      {
      int base, expoente;
      printf("digite a base da potencia: ");
      scanf("%d", &base);
      printf("digite o expoente: ");
      scanf("%d", &expoente);

      potencia(base, expoente);
      }
    }
  return (0);

  }
