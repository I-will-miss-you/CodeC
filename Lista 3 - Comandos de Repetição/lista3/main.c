#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


/** Exercicio 01
* Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
* números maiores que 0.
*/
void ex01(int num)
{
    int i = 0;
    for(i = 1 ; i <= 5 ; i++) printf(" %d -> %d \n",i,num*i);
}

/** Exercicio 02
* Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira
* vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.
*/
void ex02()
{
    int i = 0, j = 0, k = 0;

    puts("\n Primeira contagem:");
    system("pause");
    for(i = 1 ; i <= 100 ; i++) printf(" %d \n",i);


    puts("\n Segunda contagem:");
    system("pause");
    while(++j <= 100) printf(" %d \n",j);

    puts("\n Terceira contagem:");
    system("pause");
    do
    {
        printf(" %d \n",++k);
    }
    while(k < 100);

}

/** Exercicio 03
* Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva
* na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a
* contagem.
*/
void ex03()
{
    int i = 10;
    while(i != 0) printf(" %.2d\n",i--);
    puts(" \"FIM!\"");
}

/** Exercicio 04
* Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
* em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).
*/
void ex04()
{
    int i = 0;
    for( i = 0 ; i <= 100000 ; i+=1000) printf(" %.6d \n", i);
}

/** Exercicio 05
* Faça um programa que peça ao usúario para digitar 10 valores e some-os.
*/
void ex05()
{
    int i = 0, num = 0, soma = 0;

    puts(" Insira 10 valores....");
    for( i = 1 ; i <= 10 ; i++)
    {
        printf(" Valor %.2d : ",i);
        scanf("%d",&num);
        soma += num;
    }
    printf(" Somatorio = %d",soma);
}

/** Exercicio 06
* Faça um programa que leia 10 inteiros e imprima sua média.
*/
void ex06()
{
    int i = 0, num = 0, soma = 0;

    puts(" Insira 10 valores....");
    for( i = 1 ; i <= 10 ; i++)
    {
        printf(" Valor %.2d : ",i);
        scanf("%d",&num);
        soma += num;
    }
    printf(" Media = %d",soma/10);
}

/** Exercicio 07
* Faça um programa que leia 10 inteiros positivos, ignorando n˜ao positivos, e imprima sua
* média.
*/
void ex07()
{
    int i = 0, num = 0, soma = 0, nNota = 0;

    puts(" Insira 10 valores.... valores negativos nao seram contabilizaos... \n");
    for( i = 1 ; i <= 10 ; i++)
    {
        printf(" Valor %.2d : ",i);
        scanf("%d",&num);
        if(num >= 0)
        {
            soma += num;
            nNota++;
        }
    }
    printf(" Media = %d / %d = %d",soma,nNota,soma/nNota);
}

/** Exercicio 08
* Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
* lido.
*/
void ex08()
{
    int i = 0, num = 0, menor = INT_MAX, maior = INT_MIN;

    puts(" Insira 10 valores...\n");
    for( i = 1 ; i <= 10 ; i++)
    {
        printf(" Valor %.2d : ",i);
        scanf("%d",&num);
        if(num < menor) menor = num;
        if(num > maior) maior = num;
    }
    printf(" Menor = %d\n Maior = %d\n",menor,maior);
}

/** Exercicio 09
* Faça um programa que leia um número inteiro N e depois imprima os N primeiros
* números naturais ímpares.
*/
void ex09()
{
    int nNum = 0, i = 0;
    printf(" Limite para a contagem : ");
    scanf("%d",&nNum);
    for(i = 1 ; i <= nNum ; i+=2) printf(" %d\n", i);
}

/** Exercicio 10
* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/
void ex10()
{
    int i = 0, soma = 0;
    for( i = 0 ; i <= 50 ; i += 2 ) soma += i;
    printf(" Somatorio = %d \n",soma);
}

/** Exercicio 11
* Faça um programa que leia um número inteiro positivo N e imprima todos os números
* naturais de 0 até N em ordem crescente.
*/
void ex11()
{
    int n = 0, i = 0;
    printf(" Inserir um numero natural = ");
    scanf("%d",&n);
    for( i = 0 ; i <= n ; i++ ) printf(" %d\n",i);
}

/** Exercicio 12
* Faça um programa que leia um número inteiro positivo N e imprima todos os números
* naturais de 0 até N em ordem decrescente.
*/
void ex12()
{
    int n = 0, i = 0;
    printf(" Inserir um numero natural = ");
    scanf("%d",&n);
    for( i = n ; i >= 0 ; i-- ) printf(" %d\n",i);
}

/** Exercicio 13
* Faça um programa que leia um número inteiro positivo par N e imprima todos os números
* pares de 0 até N em ordem crescente.
*/
void ex13()
{
    int n = 0, i = 0;
    printf(" Inserir um numero natural = ");
    scanf("%d",&n);
    for( i = 2 ; i <= n ; i+=2 ) printf(" %d\n",i);
}

/** Exercicio 14
* Faça um programa que leia um número inteiro positivo par N e imprima todos os números
* pares de 0 até N em ordem decrescente.
*/
void ex14()
{
    int n = 0, i = 0;
    printf(" Inserir um numero natural = ");
    scanf("%d",&n);
    if( n % 2 != 0) n = n - 1;
    for( i = n ; i >= 2 ; i-=2 ) printf(" %d\n",i);
}

/** Exercicio 15
* Faça um programa que leia um número inteiro positivo par N e imprima todos os números
* ímpares de 0 até N em ordem crescente.
*/
void ex15()
{
    int n = 0, i = 0;
    printf(" Inserir um numero natural = ");
    scanf("%d",&n);
    for( i = 1 ; i <= n ; i+=2 ) printf(" %d\n",i);
}

/** Exercicio 16
* Faça um programa que leia um número inteiro positivo par N e imprima todos os números
* ímpares de 0 até N em ordem decrescente.
*/
void ex16()
{
    int n = 0, i = 0;
    printf(" Inserir um numero natural = ");
    scanf("%d",&n);
    if( n % 2 == 0) n = n - 1;
    for( i = n ; i >= 1 ; i-=2 ) printf(" %d\n",i);
}

/** Exercicio 17
* Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
* números naturais.
*/
void ex17()
{
    int n = 0, soma = 0;
    printf(" Valor = ");
    scanf("%d",&n);
    while( n > 0) soma += n--;
    printf(" Somatorio = %d",soma);
}

/** Exercicio 18
* Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e
* quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser
* fornecida pelo usuário.
*/
void ex18()
{
    int qNum = 0, i= 1, num, maior, nRep = 0;

    printf(" Quantidade de numeros a serem inseridos = ");
    scanf("%d",&qNum);

    printf(" %d%c Numero = ",i++,167);
    scanf(" %d",&num);
    maior = num;
    nRep = 1;
    for(qNum = qNum - 1 ; qNum > 0 ; qNum--)
    {
        printf(" %d%c Numero = ",i++,167);
        scanf(" %d",&num);

        if(num == maior)
        {
            nRep++;
        }
        else if(num > maior)
        {
            maior = num;
            nRep = 1;
        }
    }
    printf("\n Maior numero = %d\n Inserido %d vezes... \n",num,nRep);
}


/** Exercicio 19
* Escreva um algoritmo que leia um númmero inteiro entre 100 e 999 e imprima na saída
* cada um dos algarismos que comp˜oem o número
*/
void ex19()
{
    char num[3];
    int i = 0, numI = 0;

    printf(" Insira um numero entre 100-999 = ");
    scanf("%s",num);
    numI = atoi(num);

    printf(" Primeira Forma: \n");
    for(i = 0 ; i <3 ; i++)
    {
        printf(" %c \n",num[i]);
    }
    puts("");

    printf(" Segunda Forma: \n");
    for(i = 100 ; i > 0 ; i /= 10)
    {
        printf(" %d \n",numI/i);
        numI -= (numI/i)*i;
    }
}

/** Exercicio 20
* Ler uma sequência de números inteiros e determinar se eles s˜ao pares ou n˜ao. Deverá
* ser informado o número de dados lidos e número de valores pares. O processo termina
* quando for digitado o número 1000.
*/
void ex20()
{
    int num  = 0, pares = 0, contador = 0;

    while(num  != 1000)
    {
        printf(" Valor = ");
        scanf("%d",&num);
        contador++;
        if(num%2 == 0) pares++;
    }
    printf(" Foram inseridos %d numeros\n dos quais %d sao pares",contador,pares);
}


/** Exercicio 21
* Faça um programa que receba dois números. Calcule e mostre:
* -> a soma dos números pares desse intervalo de números, incluindo os números digitados;
* -> a multiplicação dos números ímpares desse intervalo, incluindo os digitados;
*/
void ex21()
{
    int num1, num2, somaPares = 0, multImpares = 1;

    printf("Valor 1:");
    scanf("%d",&num1);
    printf("Valor 2:");
    scanf("%d",&num2);

    for(num1 = num1 ; num1 <= num2 ; num1++)
    {
        if(num1 % 2 == 0) somaPares += num1;
        else multImpares *= num1;
    }

    printf(" Soma dos numeros pares = %d \n",somaPares);
    printf(" Multiplicacao dos numeros impares = %d \n",multImpares);
}

/** Exercicio 22
* Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
* uma sequência arbitrária de notas (válidas no intervalo de 10 a 20) e que mostre na tela,
* como resultado, a correspondente média aritmética. O número de notas com que o aluno
* pretenda efetuar o cálculo n˜ao será fornecido ao programa, o qual terminará quando for
* introduzido um valor que n˜ao seja válido como nota de aprovação.
*/
void ex22()
{
    float nota, soma = 0, contador = 0;
    printf(" Intervalo de notas consideradas validas para efeitos de media 10 - 20 \n");
    printf(" Quando introduzida uma nota invalida o programa acaba... \n\n");
    printf(" Nota = ");
    scanf(" %f",&nota);
    while(nota >= 10 || nota >= 20 )
    {
        soma += nota;
        contador++;
        printf(" Nota = ");
        scanf(" %f",&nota);
    }
    printf(" Media = %0.2f \n",soma/contador);
}

/** Exercicio 23
* Faca um algoritmo que leia um número positivo e imprima seus divisores.
*/
void ex23()
{
    int num, div;
    printf(" Numero = ");
    scanf("%d",&num);

    for(div = num - 1 ; div > 0 ; div--)
        if(num % div == 0) printf("\t%d e divisor de %d\n",div,num);
}

/** Exercicio 24
* Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
* desse número, com exceç˜ao dele próprio. Ex: a soma dos divisores do número 66 é
* 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/
void ex24()
{
    int num, div, soma = 0;
    printf(" Numero = ");
    scanf("%d",&num);

    for(div = num - 1 ; div > 0 ; div--)
        if(num % div == 0)
        {
            printf(" %d\n",div);
            soma += div;
        }
    printf(" A soma dos divisores = %d\n", soma);
}

/** Exercicio 25
* Faça um programa que some todos os números naturais abaixo de 1000 que s˜ao múltiplos
* de 3 ou 5.
*/
void ex25()
{
    int i = 0, soma = 0;
    for(i = 3 ; i <= 1000 ; i++)
        if(i % 3 == 0 || i % 5 == 0)
            soma += i;
    printf(" Somatorio = %d\n",soma);
}

/** Exercicio 26 //não percebi bem mas ca vai...
* Faça um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número
* dado.
*/
void ex26()
{
    int num, flag = 1;

    while(flag)
    {
        printf("Inserir um valor = ");
        scanf("%d",&num);
        if(num % 11 == 0)
        {
            printf(" 11 ");
            flag = 0;
        }
        if(num % 13 == 0 )
        {
            printf(" 13 ");
            flag = 0;
        }
        if(num % 17 == 0)
        {
            printf(" 17 ");
            flag = 0;
        }
    }
    printf(" -> Multiplo(s) de %d\n",num);
}

/** Exercicio 27
* Em Matemática, o número harmônico designado por H(n) define-se como sendo a soma
* da série harmónica:
* H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
* Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n)
*/
void ex27()
{
    float result = 0;
    int num, i;

    printf("Valor para o calculo = ");
    scanf("%d",&num);

    for(i = 1 ; i <= num ; i++)
    {
        result += 1.0/i;
    }
    printf("Resultado = %0.2f \n",result);
}

/** Exercicio 28
* Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
* conforme a fórmula a seguir
* E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/
void ex28()
{
    int num, i, j;
    long unsigned div;
    double result = 0;

    printf(" Valor = ");
    scanf("%d",&num);

    for(i = 1 ; i <= num ; i++)
    {
        div = 1;
        for(j = 1  ; j <= i ; j++)
        {
            div *= j;
        }
        printf(" Factorial %d = %lu \n",j-1,div);
        result += 1.0/div;
    }
    printf(" Resultado = %0.2f \n",result);
}

/** Exercicio 29
*   Escreva um programa para calcular o valor da série, para 5 termos.
*   S = 0 + 1=2! + 2=4! + 3=6! + ...
*/
void ex29()
{
    long unsigned  fact = 0;
    float result = 0;
    int i, j;

    for(i = 1 ; i <= 5 ; i++)
    {
        fact = 1;
        for(j = 1  ; j <= i*2 ; j++)
        {
            fact *= j;
        }
        printf(" Factorial %d = %lu \n",j-1,fact);
        result += 1.0/fact;
    }
    printf(" Resultado = %0.2f \n",(float)result);
}

/** Exercicio 30
*   Faça programas para calcular as seguintes sequências:
*   1 + 2 + 3 + 4 + 5 + ... + n
*   1 - 2 + 3 - 4 + 5 + ... + (2n - 1)
*   1 + 3 + 5 + 7 + ... + (2n - 1)
*/
void ex30()
{
    int n, i;
    long int result1 = 0, result2 = 0, result3 = 0;

    printf(" Valor = ");
    scanf("%d",&n);

    for( i = 1 ; i <= n ; i++) result1 += i;

    for( i = 1 ; i < 2*n ; i++)
    {
        if( i % 2 == 0) result2 -= i;
        else result2 += i;
    }

    for( i = 1 ; i < 2*n ; i += 2) result3 += i;

    printf(" Resultado 1 serie = % ld \n",result1);
    printf(" Resultado 2 serie = % ld \n",result2);
    printf(" Resultado 3 serie = % ld \n",result3);
}

/** Exercicio 31
*   Faça um programa que calcule e escreva o valor de S
*   S = 1/1 + 3/2 + 5/3 + 7/4 ... 99/50
*/
void ex31()
{
    float result = 0;
    int i, j;
    for( i = 1 ; i < 100 ; i +=2)
        for( j = 1 ; j <= 50 ; j++)
            result += (float)i / j;
    printf(" Resultado = %0.2f \n",result);
}

/** Exercicio 32
*   Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
*   saída o número de cada dado e a relação entre eles (>,<,=) de cada lançamento.
*/
void ex32()
{
    int i, d1, d2, n;
    srand(time(NULL));

    printf(" Numero de lançamentos = ");
    scanf(" %d",&n);

    printf(" Dado 1 :\t:Dado 2 \n");
    for(i = 1 ; i <= n ; i++)
    {
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;

        if (d1 == d2) printf("  %d\te igual\t %d \n",d1,d2);
        else
            (d1 > d2) ? printf("  %d\te maior\t %d \n",d1,d2) : printf("  %d\te menor\t %d \n",d1,d2);
    }
}

/** Exercicio 33
*   Dados n e dois números inteiros positivos, i e j, diferentes de 0, imprimir em ordem
*   crescente os n primeiros naturais que s˜ao múltiplos de i ou de j e ou de ambos. Exemplo:
*   Para n = 6, i = 2 e j = 3 a saída deverá ser: 0,2,3,4,6,8.
*/
void ex33()
{
    int n = 0, k = 0, i = 0, j = 0;
    printf(" Valor i = ");
    scanf(" %d",&i);
    printf(" Valor j = ");
    scanf(" %d",&j);
    printf(" Numero de elementos = ");
    scanf(" %d",&n);

    if( i > 0 && j > 0 && n > 2)
    {
        while( n > 0)
        {
            if( k % i == 0 || k % j == 0 )
            {
                printf(" %d \n",k);
                n--;
            }
            k++;
        }
    }
    else printf(" Erro - valores i e j > 0 e n > 2 ...\n");
}

/** Exercicio 34
*   Faça um programa que calcule o menor número divisível por cada um dos números de 1
*   a 20? Ex: 2520 é o menor número que pode ser dividido por cada um dos números de 1
*   a 10, sem sobrar resto.
*/
void ex34()
{
    int flag = 1, j = 10, i = 0, qN = 20;

    while(flag)
    {
        j++;
        for( i = 1 ; i <= qN ; i++)
        {
            if( j % i != 0) break;
            if( i == qN) flag = 0;
        }
    }
    printf(" Solucao = %d \n",j);
    for( i = 1 ; i <= qN ; i++) printf(" Validacao %d = %d \n", i,j % i);
}

/** Exercicio 35
*   Faça um programa que some os números impares contidos em um intervalo definido
*   pelo usuário. O usuário define o valor inicial do intervalo e o valor final deste intervalo
*   e o programa deve somar todos os números ímpares contidos neste intervalo. Caso o
*   usuário digite um intervalo inválido (começando por um valor maior que o valor final) deve
*   ser escrito uma mensagem de erro na tela, “Intervalo de valores inválido” e o programa
*   termina. Exemplo de tela de saída: Digite o valor inicial e valor final: 5 10
*   Soma dos ímpares neste intervalo: 21
*/
void ex35()
{
    int soma = 0, x, y, i;
    printf(" Valor de inicio = ");
    scanf("%d",&x);
    printf(" Valor de fim = ");
    scanf("%d",&y);

    if( y < x)
    {
        printf("Intervalo de valores invalido \n");
    }
    else
    {
        for( i = x ; i <= y ; i++)
        {
            if( i%2 != 0) soma += i;
        }
        printf(" Soma dos impares = %d \n",soma);
    }
}

/** Exercicio 36
*   Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros
*   100 números naturais e o quadrado da soma.
*   Ex: A soma dos quadrados dos dez primeiros
*       números naturais é,
*           1^2 + 2^2 + ... + 10^2 = 385
*       O quadrado da soma dos dez primeiros números naturais é,
*           (1 + 2 + ... + 10)^2 = 55^2 = 3025
*   A diferença entre a soma dos quadrados dos dez primeiros números naturais e o quadrado
*   da soma é 3025 - 385 = 2640.
*/
void ex36()
{
    int nNat = 100, i, soma1 = 0, soma2 = 0, dif = 0;

    for( i = 1 ; i <= nNat ; i++) soma1 += i*i;
    for( i = 1 ; i <= nNat ; i++) soma2 += i;
    soma2 *= soma2;
    dif = soma2 - soma1;
    printf(" %d - %d = %d \n",soma2,soma1,dif);
}

/** Exercicio 37
*   Escreve um programa que verifique quais números entre 1000 e 9999 (inclusive) possuem
*   a propriedade seguinte: a soma dos dois dígitos de mais baixa ordem com os dois
*   dígitos de mais alta ordem elevada ao quadrado é igual ao próprio numero.
*   Por exemplo, para o inteiro 3025, temos que:
*   30 + 25 = 55
*   55^2 = 3025
*/
void ex37()
{
    int num = 0, min = 1000, max = 9999, part1 = 0, part2 = 0, soma = 0, resultFinal = 0;

    printf(" Inserir um numero inteiro entre 1000 e 9999 = ");
    scanf("%d",&num);

    if(num < min || num > max) printf(" Valor invalido \n");
    else
    {
        part1 = num / 100;
        part2 = num % 100;
        soma = part1 + part2;
        resultFinal = soma*soma;
        if(num == soma*soma)
        {
            printf(" %d + %d = %d \n",part1,part2,soma);
            printf(" %d * %d = %d \n",soma,soma,resultFinal);
        }
        else
        {
            printf(" %d + %d = %d \n",part1,part2,soma);
            printf(" %d * %d != %d \n",soma,soma,resultFinal);
        }
    }
}

/** Exercicio 38
*   Faça um programa que calcule o terno pitagórico a, b, c, para o qual a + b + c = 1000.
*   Um terno pitagórico é um conjunto de três números naturais, a, b, c, para a qual,
*   a^2 + b^2 = c^2
*   Por exemplo: 3^2 + 4^2 = 9 + 16 = 25 = 5^2
*/
void ex38()
{
    int a = 0, b = 0, c = 0, total = 0, flag = 0, valor = 1000;

    while(!flag)
    {
        for( b = 0 ; b <= a ; b++)
        {
            c = a * a + b * b;
            c = sqrt(c);
            total = a + b + c;
            //printf("%d + %d + %d = %d \n",a,b,c,total);
            if( total == valor)
            {
                flag = 1;
                break;
            }
        }
        a++;
    }
    printf("\n a + b + c = %d \n %d + %d + %d = %d \n",valor,a,b,c,total);

}

/** Exercicio 39
*   Faça um programa que calcule a área de um triângulo, cuja base e altura s˜ao fornecidas
*   pelo usuário. Esse programa n˜ao pode permitir a entrada de dados inválidos, ou seja,
*   medidas menores ou iguais a 0.
*/
void ex39()
{
    float b, h, area;

    printf(" Base = ");
    scanf("%f",&b);
    printf(" Altura = ");
    scanf("%f",&h);
    if( b <= 0 || h <= 0)
    {
        printf(" A base e a altura tem de ser superiores a 0(zero)... \n");
    }
    else
    {
        area = b * h / 2;
        printf(" Area = %0.2f m%c\n",area,253);
    }

}

/** Exercicio 40
*   Elabore um programa que faça leitura de vários números inteiros, até que se digite um
*   número negativo. O programa tem que retornar o maior e o menor número lido.
*/
void ex40()
{
    int min = INT_MAX, max = INT_MIN, num ;
    printf(" Insira um valor negativo para parar o programa...\n");
    printf(" valor = ");
    scanf("%d",&num);
    if( num < 0)
    {
        printf(" Insira pelo menos um valor nao nulo... \n");
    }
    else
    {
        while(num >= 0)
        {
            if(num > max) max = num;
            if(num < min) min = num;
            printf(" valor = ");
            scanf("%d",&num);
        }
        printf(" Min = %d \n Max = %d\n",min,max);
    }
}

/** Exercicio 41
*   Faça um programa que calcula a associação em paralelo de duas resistencias R1 e R2
*   fornecidos pelo usuário via teclado. O programa fica pedindo estes valores e calculando
*   até que o usuário entre com um valor para resistência igual a zero.
*   R = (R1 * R2) / (R1 + R2)
*/
void ex41()
{
    float r1, r2, r;

    while(1)
    {
        system("cls");
        printf(" Para interromper o programa insira 0(zero) ou um valor negativo \n");
        printf(" Valor R1 = ");
        scanf(" %f",&r1);
        if(r1 <= 0.0 ) break;
        printf(" Valor R2 = ");
        scanf(" %f",&r2);
        if(r2 <= 0.0 ) break;
        r = (r1 * r2) / ( r1 + r2);
        printf(" R_total = %0.5f\n ",r);
        getchar();
        printf(" Press \"ENTER\" to cont...");
        getchar();
    }
    printf(" Volta sempre...\n");
}

/** Exercicio 42
*   Faça um programa que leia um conjunto n˜ao determinado de valores, um de cada vez, e
*   escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
*   a entrada de dados com um valor negativo ou zero.
*/
void ex42()
{
    int num;
    while(1)
    {
        system("cls");
        printf(" Valor = ");
        scanf(" %d",&num);
        getchar();
        if( num <= 0) break;
        puts("");
        printf(" Quadrado = %d \n", num*num);
        printf(" Cubo = %ld \n", (long)num*num*num);
        printf(" Raiz quadrada = %0.2f \n", sqrt(num));
        printf("\n Press \"ENTER\" to cont...");
        getchar();

    }
    printf(" Bye bye...\n");
}

/** Exercicio 43
*   Faça um programa que leia um número indeterminado de idades de indivíduos (pare
*   quando for informada a idade 0), e calcule a idade média desse grupo.
*/
void ex43()
{
    int idade, soma = 0,contador = 0;

    while(1)
    {
        printf(" Idade = ");
        scanf(" %d",&idade);
        if(idade <= 0) break;
        soma += idade;
        contador++;
    }
    if(contador > 0)
        printf(" Media de idades = %0.2f \n",(float)soma/contador);
    else
        printf(" Nao foram introduzidas idades validas... \n");
}

/** Exercicio 44
*   Leia um número positivo do usuário, ent˜ao, calcule e imprima a sequência Fibonacci até
*   o primeiro número superior ao número lido.
*   Exemplo: se o usuário informou o número 30, a sequência a ser impressa será 0 1 1 2 3 5 8 13 21 34.
*/
void ex44()
{
    int num1 = 0, num2 = 1, soma, limite = 0;
    printf(" Insira um valor positivo = ");
    scanf(" %d",&limite);
    if(limite < 0) printf(" Valor invalido... \n");
    else
    {
        printf(" %d\n",num1);
        do
        {
            soma = num1  + num2;
            printf(" %d\n",soma);
            num1 = num2;
            num2 = soma;
        }
        while( soma <= limite);
    }
}

/** Exercicio 45
*   Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
*   versa. Você deve criar um menu com as duas opções de convers˜ao e com uma opç˜ao
*   para finalizar o programa. O usuário poderá fazer quantas convers˜oes desejar, sendo
*   que o programa só será finalizado quando a opção de finalizar for escolhida.
*/
void ex45()
{
    int flag1 = 1, flag2 = 1,  valor = 0;
    char op = 0, cont = 's';

    while(flag1)
    {
        system("cls");
        printf(" Menu:\n 1 - Converte k/h para m/s\n 2 - Converte m/s para km/h\n $>_\b");
        scanf(" %c",&op);
        getchar();
        switch(op)
        {
        case '1':
            printf(" Valor em k/m = ");
            scanf(" %d",&valor);
            getchar();
            printf(" valor em m/s = %.0f \n",valor/3.6);
            break;
        case '2':
            printf(" Valor em m/s = ");
            scanf(" %d",&valor);
            getchar();
            printf(" valor em k/m = %.0f \n",valor*3.6);
            break;
        default:
            printf(" Opcao nao valida... \n");
        }
        flag2 = 1;
        while(flag2)
        {
            printf(" Deseja continuar? S (sim) ou N (nao).\n $>_\b");
            scanf(" %c",&cont);
            getchar();
            switch(cont)
            {
            case 's':
            case 'S':
                flag2 = 0;
                break;
            case 'n':
            case 'N':
                printf(" Ate a proxima...\n");
                flag2 = 0;
                flag1 = 0;
                break;
            default:
                printf(" Opcao nao valida...\n");
            }
        }
    }
}

/** Exercicio 46
*   Faça um programa que gera um número aleatório de 1 a 1000. O usuário deve tentar
*   acertar qual o número foi gerado, a cada tentativa o programa deverá informar se o
*   chute é menor ou maior que o número gerado. O programa acaba quando o usuário
*   acerta o número gerado. O programa deve informar em quantas tentativas o número foi
*   descoberto.
*/
void ex46()
{
    int numRand, numUser, tentativas = 0;
    srand(time(NULL));
    numRand = 1 + rand() % 1000;
    //printf(" Numero Rand = %d \n",numRand);
    while(1)
    {
        printf("\n A sua aposta = ");
        scanf("%d",&numUser);
        getchar();
        if(numUser == numRand)
        {
            printf(" Acertou!!!\n Tentativas gastas = %d\n",++tentativas);
            break;
        }
        else
        {
            (numUser > numRand)? printf(" Aposte mais baixo!!!\n Tentativas gastas = %d\n",++tentativas) : printf(" Aposte mais Alto!!!\n Tentativas gastas = %d\n",++tentativas);
        }
    }
}

/** Exercicio 47
*   Faça um programa que apresente um menu de opç˜oes para o cálculo das seguintes
*   operações entre dois números:
*   -> adiç˜ao (opção 1)
*   -> subtraç˜ao (opç˜ao 2)
*   -> multiplicação (opç˜ao 3)
*   -> divis˜ao (opção 4)
*   -> saída (opç˜ao 5)
*   O programa deve possibilitar ao usuário a escolha da operaç˜ao desejada, a exibiç˜ao do
*   resultado e a volta ao menu de opç˜oes. O programa só termina quando for escolhida a
*   opçao de saída (opç˜ao 5).
*/
void ex47()
{
    int num1, num2, op;

    while(1)
    {
        system("cls");
        printf(" Escolha uma das seguintes opcoes:\n");
        printf(" 1 - Adicao \n");
        printf(" 2 - Subtracao \n");
        printf(" 3 - Multiplicacao \n");
        printf(" 4 - Divisao \n");
        printf(" 5 - Sair \n");
        printf(" #>_\b");
        scanf(" %d",&op);
        getchar();
        puts(" ");

        if(op == 5) break;
        if( op < 0 || op >5)
        {
            printf(" Opcao invalida... \n");
            printf("\n Press \"ENTER\" to cont...");
            getchar();
        }
        else
        {
            printf(" Valor 1 = ");
            scanf(" %d",&num1);
            getchar();
            printf(" Valor 2 = ");
            scanf(" %d",&num2);
            getchar();

            switch(op)
            {
            case 1:
                printf(" %d + %d = %d\n ",num1,num2,num1+num2);
                break;
            case 2:
                printf(" %d - %d = %d\n ",num1,num2,num1-num2);
                break;
            case 3:
                printf(" %d x %d = %d\n ",num1,num2,num1*num2);
                break;
            case 4:
                if( num2 == 0)
                {
                    if(num1 != 0) printf(" A divisao %d/%d e indefinida \n",num1,num2);
                    else printf(" A divisao 0/0 e indeterminada\n");
                }
                else
                    printf(" %d x %d = %d\n ",num1,num2,num1*num2);
                break;
            default:
                printf(" Erro nao previsto... \n");
            }
            printf("\n Press \"ENTER\" to cont...");
            getchar();
        }
    }
}

/** Exercicio 48 //nao percebi
*   Faça um programa que some os termos de valor par da sequência de Fibonacci, cujos
*   valores n˜ao ultrapassem quatro milh˜oes.
*/
void ex48()
{
    int a = 0, b = 1, c = 1;
    printf(" %d\n",a);
    while(1)
    {
        printf(" %d\n",c);
        c = a + b;
        if(c >= 4000000) break;
        a = b;
        b = c;
    }
}

/** Exercicio 49
*   O funcionário chamado Carlos tem um colega chamado Jo˜ao que recebe um salário que
*   equivale a um terço do seu salário. Carlos gosta de fazer aplicaç˜oes na caderneta de
*   poupança e vai aplicar seu salário integralmente nela, pois está rendendo 2% ao mês.
*   Jo˜ao aplicará seu salário integralmente no fundo de renda fixa, que está rendendo 5%
*   ao mês. Construa um programa que deverá calcular e mostrar a quantidade de meses
*   necessários para que o valor pertencente a Jo˜ao iguale ou ultrapasse o valor pertencente
*   a Carlos. Teste com outros valores para as taxas.
*/
void ex49()
{
    float ordenado = 500, ordenadoCarlos = 0, ordenadoJoao = 0;
    int meses = 0;

    while(1)
    {
        meses++;
        ordenadoCarlos += ordenado + ordenadoCarlos*0.02;
        ordenadoJoao += ordenado / 3 + ordenadoJoao*0.05;
        if(ordenadoJoao >= ordenadoCarlos)
        {
            printf(" Ordenado do Carlos \t= %0.2f \n",ordenadoCarlos);
            printf(" Ordenado do Joao \t= %0.2f \n",ordenadoJoao);
            printf(" Numero de meses \t= %d \n", meses);
            break;
        }
    }
}

/** Exercicio 50
*   Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e
*   cresce 3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos
*   ser˜ao necessários para que Zé seja maior que Chico.
*/
void ex50()
{
    int chico = 150, ze = 110, meses = 0;

    while(1)
    {
        meses++;
        chico += 2;
        ze += 3;
        if( ze >= chico)
        {
            printf(" Ao fim de %d meses o Ze passa a medir mais que o Chico \n",meses);
            printf(" Altura do Ze = \t%0.2f metros \n", (float)ze/100);
            printf(" Altura do Chico = \t%0.2f metros \n", (float)chico/100);
            break;
        }
    }
}

/** Exercicio 51 //nao percebi
*   Um funcionário recebe aumento anual. Em 2000 foi contratado por 2000 euros. Em 1996
*   recebeu aumento de 1.5%. A partir de 2001, os aumentos sempre correspondem ao
*   dobro do ano anterior. Faça programa que determine o salário atual do funcionário.
*/
void ex51()
{
    int anoInic = 2000, anoAtual = 2016;
    float aumentoPerc = 1.5/100;
    float salarioBase = 2000, salario = 0;

    for(anoInic = anoInic ; anoInic <= anoAtual ; anoInic++)
    {
        printf(" Percentagem de aumento = %.2f\n",aumentoPerc*100);
        salario = salarioBase + salarioBase*aumentoPerc;
        printf(" Ano = %d \tSalario = %0.2f \n",anoInic,salario);
        aumentoPerc *= 2;
    }
    printf(" Salario atual = %0.2f \n",salario);
}

/** Exercicio 52
*   Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
*   de um banco e retorne quantas notas de cada valor ser˜ao necessárias para atender ao
*   saque com a menor quantidade de notas possível. Ser˜ao utilizadas notas de 100, 50,
*   20, 10, 5, 2 e 1 real.
*/
void ex52()
{
    int notaValor = 100, valor = 0;
    printf(" Valor = ");
    scanf("%d",&valor);

    while(valor > 0)
    {
        printf(" Numero de notas de %d = %d \n",notaValor, valor/notaValor);
        valor = valor % notaValor;
        if( notaValor == 50)
        {
            notaValor = 20;
        }
        else notaValor /= 2;
    }
}

/** Exercicio 53
*   Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
*   linhas do chamado Triangulo de Floyd. Para n = 6, temos:
*   1
*   2 3
*   4 5 6
*   7 8 9 10
*   11 12 13 14 15
*   16 17 18 19 20 21
*/
void ex53()
{
    int i = 0, j = 0, floydNum = 1, num = 6;

    printf(" VAlor = ");
    scanf(" %d",&num);

    for( i = i ; i <= num ; i++)
    {
        for(j = 0 ; j < i ; j++)
        {
            printf(" %.2d",floydNum++);
        }
        printf("\n");
    }
}

/** Exercicio 54
* Faça um programa que receba um número inteiro maior do que 1, e verifique se o número
* fornecido é primo ou n˜ao.
*/
void ex54()
{
    int num = 0, i = 0;

    printf(" Valor inteiro = ");
    scanf(" %d",&num);

    for( i = 2 ; i < num ; i++)
    {
        if(num % i == 0)
        {
            printf(" O numero %d nao e primo \n",num);
            break;
        }
    }
    if(i == num) printf(" O numero %d e primo... \n",num);
}

/** Exercicio 55
*   Escreva um programa que leia um inteiro n˜ao negativo n e imprima a soma dos n primeiros
*   números primos.
*/
void ex55()
{
    int num = 0, i = 0, flag = 0, soma = 0;

    printf(" Valor inteiro = ");
    scanf(" %d",&num);

    while(flag < 2)
    {
        for( i = 2 ; i < num ; i++)
        {
            if(num % i == 0) break;
        }
        if(i == num)
        {
            printf(" num = %d \n",num);
            soma += num;
            flag++;
        }
        num++;
    }
    printf(" Soma = %d",soma);
}

/** Exercicio 56
*   Faça um programa que calcule a soma de todos os números primos abaixo de dois
*   milh˜oes.
*/
void ex56()
{
    int i = 0, j = 0, limite = 2000000;
    long soma = 0;

    for( j = 0 ; j < limite ; j++)
    {
        for( i = 2 ; i < j ; i++)
        {
            if(j % i == 0) break;
        }
        if(i == j)
        {
            printf(" j = %d \n",j);
            soma += j;
        }
    }
    printf(" Soma = %ld",soma);
}

/** Exercicio 57
*   Faça um programa que conte quantos números primos existem entre a e b, onde a e b
*   s˜ao números informados pelo usuário.
*/
void ex57()
{
    int ini = 1, fim = 1, contador = 0, i = 0;

    printf(" Inicio = ");
    scanf(" %d",&ini);
    printf(" Fim = ");
    scanf(" %d",&fim);

    for( ini = ini ; ini <= fim ; ini++)
    {
        for( i = 2 ; i < ini ; i++)
        {
            if( ini % i == 0) break;
        }
        if( i == ini)
        {
            printf(" %d \n",i);
            contador++;
        }
    }
    printf(" Foram encontrados %d numeros primos... \n",contador);
}

/** Exercicio 58
*   Faça um programa que some os números primos existentes entre a e b, onde a e b s˜ao
*   números informados pelo usuário.
*/
void ex58()
{
    int ini = 1, fim = 1, soma = 0, i = 0;

    printf(" Inicio = ");
    scanf(" %d",&ini);
    printf(" Fim = ");
    scanf(" %d",&fim);

    for( ini = ini ; ini <= fim ; ini++)
    {
        for( i = 2 ; i < ini ; i++)
        {
            if( ini % i == 0) break;
        }
        if( i == ini)
        {
            printf(" %d \n",i);
            soma += i;
        }
    }
    printf(" Soma de todos os numeros primos existentes no intervalo defenido = %d. \n",soma);
}

/** Exercicio 59
*   Escreva um programa que leia o número de habitantes de uma determinada cidade, o
*   valor do kwh, e para cada habitante entre com os seguintes dados:
*   consumo do mês e o código do consumidor (1-Residencial, 2-Comercial, 3-Industrial).
*   No final imprima o maior, o menor e a média do consumo dos habitantes;
*   e por fim o total do consumo de cada categoria de consumidor.
*/
void ex59()
{
    int i  = 0; //variavel auxiliar
    int num = 0; //numero de habitantes e
    int consumo_kwh = 0;
    int codigo = 0; //1-Residencial, 2-Comercial, 3-Industrial
    int maior = INT_MIN, menor = INT_MAX, soma = 0;  //do consumo dos habitantes
    float media = 0.0; //do consumo dos habitantes
    int total_Residencial = 0, total_Comercial = 0, total_Industrial = 0;

    printf(" Insira o numero de habitantes = ");
    scanf(" %d",&num);

    printf(" Informe o consumo em kwh\n Informe tambem o respectivo codigo:\n 1-Residencial\n 2-Comercial\n 3-Industria\n");
    i = num;
    while(i-- > 0)
    {
        printf("\n Habitante = %d\n", num - i);
        printf(" Consumo =_\b");
        scanf(" %d",&consumo_kwh);
        if( consumo_kwh < 0)
        {
            printf(" valor de cosumo nao valido...\n");
            i++;
        }
        else
        {
            printf(" Codigo =_\b");
            scanf(" %d",&codigo);

            if( codigo < 1 || codigo > 3)
            {
                printf(" Codigo invalido ... \n");
                i++;
            }
            else
            {
                if(maior < consumo_kwh) maior = consumo_kwh;
                if(menor > consumo_kwh) menor = consumo_kwh;

                if( codigo == 1) total_Residencial += consumo_kwh;
                else if( codigo == 2) total_Comercial += consumo_kwh;
                else if( codigo == 3) total_Industrial += consumo_kwh;
                else printf(" Erro ... \n");
            }
        }
    }
    puts("");
    printf(" Maior Consumo = %d \n", maior);
    printf(" Memor Consumo = %d \n", menor);
    soma = total_Comercial + total_Industrial + total_Residencial;
    media = (float)soma / consumo_kwh;
    printf(" Consumo medio = %0.2f \n", media);
    printf(" Total Consumo Residencial = %d \n", total_Residencial);
    printf(" Total Consumo Comercial = %d \n", total_Comercial);
    printf(" Total Consumo Industrial = %d \n", total_Industrial);
}

/** Exercicio 60
*   Faça um programa que leia vários números, calcule e mostre:
*   (a) A soma dos números digitados
*   (b) A quantidade de números digitados
*   (c) A média dos números digitados
*   (d) O maior número digitado
*   (e) O menor número digitado
*   (f) A média dos números pares
*    Finalize a entrada de dados caso o usuário informe o valor 0.
*/
void ex60()
{
    int num = 0, soma = 0, quantidade = 0;
    float media = 0;
    int maior = INT_MIN, menor = INT_MAX;
    int quantidadePares = 0, somaPares = 0;
    float mediaPares = 0;

    while(1)
    {
        system("cls");
        printf(" Numero = ");
        scanf(" %d",&num);
        getchar();
        if( num == 0) break;
        soma += num;
        quantidade++;
        media = (float)soma / quantidade;

        if(num > maior) maior = num;
        if(num < menor) menor = num;

        if(!(num % 2))
        {
            somaPares+=num;
            quantidadePares++;
            mediaPares = (float)somaPares / quantidadePares;
        }
        printf(" Quantidade de numeros = %d\n",quantidade);
        printf(" Soma = %d\n",soma);
        printf(" Media = %0.2f\n",media);
        printf(" Soma = %d\n",soma);
        printf(" Maior valor = %d\n",maior);
        printf(" Menor valor = %d\n",menor);
        printf(" Media dos numeros pares = %0.2f\n",mediaPares);
        printf("\n Press \"ENTER\" to cont...");
        getchar();
    }
}

/** Exercicio 61
*   Faça um programa que calcule o maior número palíndromo feito a partir do produto de
*   dois números de 3 dígitos.
*   Ex: O maior palíndromo feito a partir do produto de dois números de dois dígitos é 9009 = 91*99.
*/
void ex61()
{
    int i = 0, j = 0, mult = 0, k = 0, l = 0 , flag = 1;
    char num[10];

    for(i = 99 ; i > 10 ; i--)
    {
        for(j = i ; j >= 10 ; j--)
        {
            mult = i * j;
            itoa(mult,num,10);
            l = strlen(num) - 1;

            for( k = 0 ; k <= l/2 ; k++)
            {
            if(num[k] != num[l-k]) break;
            }
            if(num[k] == num[l-k])
            {
                printf(" %d\n",mult);
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }
}
/** Exercicio 62
*   Se os números de 1 a 5 s˜ao escritos em palavras: um, dois, três, quatro, cinco, ent˜ao há
*   2 + 4 + 4 + 6 + 5 = 22 letras usadas no total. Faça um programa que conte quantas letras
*   seriam utilizadas se todos os números de 1 a 1000 (mil) fossem escritos em palavras.
*   OBS: N˜ao conte espac¸os ou hifens.
*/
void ex62(){

}

int main()
{
    //ex61();
    //ex60();
    //ex59();
    //ex58();
    //ex57();
    //ex56();
    //ex55();
    //ex54();
    //ex53();
    //ex52();
    //ex51();
    //ex50();
    //ex49();
    //ex48();
    //ex47();
    //ex46();
    //ex45();
    //ex44();
    //ex43();
    //ex42();
    //ex41();
    //ex40();
    //ex39();
    //ex38();
    //ex37();
    //ex36();
    //ex35();
    //ex34();
    //ex33();
    //ex32();
    //ex31();
    //ex30();
    //ex29();
    //ex28();
    //ex27();
    //ex26();
    //ex25();
    //ex24();
    //ex23();
    //ex22();
    //ex21();
    //ex20();
    //ex19();
    //ex18();
    //ex17();
    //ex16();
    //ex15();
    //ex14();
    //ex13();
    //ex12();
    //ex11();
    //ex10();
    //ex09();
    //ex08();
    //ex07();
    //ex06();
    //ex05();
    //ex04();
    //ex03();
    //ex02();
    //ex01(3);
    return 0;
}
