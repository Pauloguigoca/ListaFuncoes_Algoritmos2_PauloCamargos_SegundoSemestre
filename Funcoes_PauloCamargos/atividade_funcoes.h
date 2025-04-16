#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int bhaskara(int a,int b, int c)
  {
  int delta, raiz1, raiz2;

  if((b * b) < (4 * a * c))
    {
    return(printf("nao ha solucao real\n\n"));
    }

  delta = (b * b) - (4 * a * c);

  raiz1 = (-b + sqrt(delta)) / (2 * a);

  raiz2 = (-b - sqrt(delta)) / (2 * a);

  return(printf("S = {%d, %d}\n\n", raiz1, raiz2));

  }

float idade_em_dias(float a, float m, float d)
  {
  int dias;
  m += a * 12;
  d += m * 30.4;

  dias = d;

  return(printf("%d dias\n\n", dias));
  }

int categoria(int idade)
  {
  if(idade < 5)
    {
    return(printf("invalido\n\n"));
    }
  else if(idade >= 5 && idade <= 7)
    {
    return(printf("Infantil A\n\n"));
    }
  else if(idade >= 8 && idade <= 10)
    {
    return(printf("Infantil B\n\n"));
    }
  else if(idade >= 11 && idade <= 13)
    {
    return(printf("Juvenil A\n\n"));
    }
  else if(idade >= 14 && idade <= 17)
    {
    return(printf("Juvenil B\n\n"));
    }
  else if(idade >= 18)
    {
    return(printf("Adulto\n\n"));
    }
  }

int imparpar(int num)
  {
  if(num % 2 == 0)
    {
    return(printf("o numero %d eh par\n\n", num));
    }
  if(num % 2 != 0)
    {
    return(printf("o numero %d eh impar\n\n", num));
    }

  }

char conceito(float nota)
  {
  if(nota < 5)
    {
    return(printf("D\n\n"));
    }
  if(nota >= 5 && nota < 7)
    {
    return("C\n\n");
    }
  if(nota >= 7 && nota < 9)
    {
    return("B\n\n");
    }
  if(nota >= 9 && nota <= 10)
    {
    return("A\n\n");
    }
  }

float media()
  {
  float num = 1;
  float soma = 0;
  float contador = 0;
  float media = 0;
  printf("digite um numero || pressione 0 para sair \n\n");

  while(num != 0)
    {
    scanf("%f", &num);
    soma += num;
    contador ++;
    }

    media = soma / (contador - 1);

    return(printf("\n media = %f\n\n", media));

  }

int numeroperfeito(int num)
  {
  int soma = 0;
  for(int i = 1; i < num; i++)
    {
    if(num % i == 0)
      {
      soma += i;
      }
    }
  if(soma == num)
    {
    return(printf("%d eh perfeito\n\n", num));
    }
  else if(soma != num)
    {
    return(printf("%d nao eh perfeito\n\n", num));
    }
  }

int ordenar(int a, int b, int c)
  {
  int aux;
  if(a > c)
    {
    aux = a;
    a = c;
    c = aux;
    }
  if(a > b)
    {
    aux = a;
    a = b;
    b = aux;
    }
  if(b > c)
    {
    aux = b;
    b = c;
    c = aux;
    }

  return(printf("%d, %d, %d\n\n", a, b, c));
  }

int positivo_negativo(int num)
  {
  if(num < 0)
    {
    return(printf("%d eh negativo\n\n", num));
    }
  if(num == 0)
    {
    return 0;
    }
  if(num > 0)
    {
    return(printf("%d eh positivo\n\n", num));
    }
  }

int potencia(int base, int expo)
  {
  int expoente = expo;
  int c = 1;
  int resultado = 1;
  while(c <= expoente)
    {
    resultado *= base;
    c++;
    }
  return(printf("%d^%d = %d\n\n",base, expoente, resultado));

  }

char saudacao()
  {
  return(printf("OI\n\n"));
  }

float tempo(float s)
  {
  float h;
  int hora;
  int m;
  int seg;
  h = s / 3600;
  hora = s / 3600;
  m = (h - hora) * 60;
  seg = s - ((m*60) + hora * 3600);

  return (printf("%dh %dm %ds\n\n", hora, m, seg));
  }

void texto_ok(char *textok)
  {

  printf(textok);
  printf("Ok\n\n");

  }

void texto_parametro(char *texto)
  {
  printf(texto);
  }

int triangulos(int a, int b, int c)
  {
  if((((b + c > a) && (a > abs(b - c))) || ((a + c > b) && (b > abs(a - c)))) || (((a + b > c) && (c > abs(a - b)))))
    {
    if(((a != b) && (b != c)) && ((c != a)))
      {
      return(printf("triangulo escaleno\n\n"));
      }
    if((((a == b) && (b != c)) || ((b == c) && (c != a))) || (((c == a) && (a != b))))
      {
      return(printf("triangulo isosceles\n\n"));
      }
    if((a == b) && (b == c))
      {
      return(printf("triangulo equilatero\n\n"));
      }
    }
  else
    {
    return(printf("nao e triangulo\n\n"));
    }

  }

