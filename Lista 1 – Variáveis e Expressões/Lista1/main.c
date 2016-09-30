#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"



/** Exercicio 1
* Faça um programa que leia um número inteiro e o imprima
*/
void ex1()
{
    int n;
    printf("Introduza um valor inteiro:");
    scanf("%d",&n);
    printf("O valor inserido: %d\n",n);
}

/** Exercicio 2
* Faça um programa que leia um número real e o imprima
*/
void ex2()
{
    float n;
    printf("Introduza um valor real:");
    scanf("%f",&n);
    printf("O valor inserido com precisão de 3 casas decimais: %.3f\n",n);
}

/** Exercicio 3
* Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
*/
void ex3()
{
    int a = 0, b = 0, c = 0;
    printf("Valor 1:");
    scanf("%d",&a);
    printf("Valor 2:");
    scanf("%d",&b);
    printf("Valor 3:");
    scanf("%d",&c);
    printf("=> %d + %d + %d = %d \n",a,b,c,a+b+c);
}

/** Exercicio 4
* Leia um número real e imprima o resultado do quadrado desse número.
*/
void ex4()
{
    float num = 0;
    printf("Inser um numero real: ");
    scanf("%f",&num);
    printf("%.3f x %.3f = %.3f \n",num,num,num*num);
}

/** Exercicio 5
* Leia um número real e imprima a quinta parte deste número.
*/
void ex5()
{
    float num = 0;
    printf("Inser um numero real: ");
    scanf("%f",&num);
    printf("%.3f / 5.0 = %.3f \n",num,num/5.0);
}

/** Execicio 6
* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
* A fórmula de convers˜ao é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
* e C a temperatura em Celsius.
*/
void ex6()
{
    float c = 0.0;
    printf("Temperatura Graus: ");
    scanf("%f",&c);
    printf("%.2f C = %.2f F \n",c,(c*(9.0/5.0)+32.0));
}

/** Exercicio 7
* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
* A fórmula de convers˜ao é: C = 5.0*(F-32)/9.0, sendo F a temperatura em Fahrenheit
* e C a temperatura em Celsius.
*/
void ex7()
{
    float f = 0.0;
    printf("Temperatura Fahrenheit: ");
    scanf("%f",&f);
    printf("%.2f F = %.2f C \n",f,5.0*(f-32)/9.0);
}

/** Exercicio 8
* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
* fórmula de convers˜ao é: C = K - 273.15, sendo C a temperatura em Celsius e K a
* temperatura em Kelvin.
*/
void ex8()
{
    float k = 0.0;
    printf("Temperatura Kelvin: ");
    scanf("%f",&k);
    printf("%.2f K = %.2f C \n", k, k-273.15);
}

/** Exercicio 9
* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
* fórmula de convers˜ao é: K = C + 273.15, sendo C a temperatura em Celsius e K a
* temperatura em Kelvin.
*/
void ex9()
{
    float c = 0.0;
    printf("Temperatura Celsius: ");
    scanf("%f",&c);
    printf("%.2f C = %.2f K \n", c, c+273.14);
}

/** Exercicio 10
* Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
* (metros por segundo). A fórmula de convers˜ao é: M = K/3.6, sendo K a velocidade em
* km/h e M em m/s.
*/
void ex10()
{
    float k = 0.0;
    printf("Velocidade em Km/h = ");
    scanf("%f",&k);
    printf("%.2f m/s = %.2f Km/h \n",k, k/3.6);
}

/** Exercicio 11
* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
* (quil ˆometros por hora). A fórmula de convers˜ao é: K = M * 3:6, sendo K a velocidade
* em km/h e M em m/s.
*/
void ex11()
{
    float m = 0.0;
    printf("Velocidade em m/s = ");
    scanf("%f",&m);
    printf("%.2f m/s = %.2f Km/h \n", m, m*3.6 );
}

/** Exercicio 12
* Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
* convers˜ao é: K = 1.61 * M, sendo K a distância em quilômetros e M em milhas.
*/
void ex12()
{
    float m = 0.0;
    printf("Distancia em milhas = ");
    scanf("%f",&m);
    printf("%.2f milhas = %.2f Km/h \n", m, m*1.61);
}

/** Exercicio 13
* Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
* convers˜ao é: M = K / 1.61, sendo K a distância em quilômetros e M em milhas.
*/
void ex13()
{
    float k = 0.0;
    printf("Distancia em Quilometros = ");
    scanf("%f",&k);
    printf("%.2f Km = %.2f Milhas \n", k, k/1.61 );
}

/** Exercicio 14
* Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de convers˜ao
* é: R = G * PI/180, sendo G o ângulo em graus e R em radianos e PI = 3.14.
*/
void ex14()
{
    float PI = 3.14, g = 0.0;
    printf("Graus = ");
    scanf("%f",&g);
    printf("%.2f Graus = %.2f Radianos \n ",g, g * (PI / 180));
}

/** Exercicio 15
* Leia um Ângulo em radianos e apresente-o convertido em graus. A fórmula de convers˜ao
* é: G = R * 180/PI, sendo G o ângulo em graus e R em radianos e PI = 3:14.
*/
void ex15()
{
    float PI = 3.14, r = 0.0;
    printf("Radianos = ");
    scanf("%f",&r);
    printf("%.2f Radianos = %.2f Graus \n", r, r * (180 / PI));
}

/** Exercicio 16
* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
* A fórmula de convers˜ao é: C = P * 2,54, sendo C o comprimento em centímetros e P o
* comprimento em polegadas.
*/
void ex16()
{
    float p = 0.0;
    printf("Valor em polegadas = ");
    scanf("%f",&p);
    printf("%.2f pol = %.2f cm \n", p, p*2.54);

}

/** Exercicio 17
* Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.
* A fórmula de convers˜ao é: P = C / 2.54 , sendo C o comprimento em centímetros e P o
* comprimento em polegadas.
*/
void ex17()
{
    float c = 0.0;
    printf("Valor em centimetros = ");
    scanf("%f",&c);
    printf("%.2f cm = %.2f pol \n", c, c/2.54);
}

/** Execicio 18
* Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
* fórmula de convers˜ao é: L = 1000 * M, sendo L o volume em litros e M o volume em
* metros cúbicos.
*/
void ex18()
{
    float m = 0.0;
    printf("valor de volume em metros cubicos = ");
    scanf("%f",&m);
    printf("%.2f m^3 = %.2f litros \n",m, 1000*m);
}

/** Exercicio 19
* Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
* fórmula de convers˜ao é: M = L / 1000 , sendo L o volume em litros e M o volume em metros
* cúbicos.
*/
void ex19()
{
    float lt = 0.0;
    printf("valor de volume em litros = ");
    scanf("%f",&lt);
    printf("%.2f litros = %.2f m^3 \n",lt, lt/1000);
}

/** Exercicio 20
* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
* de convers˜ao é: L = K / 0.45 , sendo K a massa em quilogramas e L a massa em libras.
*/
void ex20()
{
    float k = 0.0;
    printf("valor de massa em quilogramas = ");
    scanf("%f",&k);
    printf("%.2f Kg = %.2f libras \n",k, k/0.45);
}

/** Exercicio 21
* Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
* de convers˜ao é: K = L * 0,45, sendo K a massa em quilogramas e L a massa em libras.
*/
void ex21()
{
    float l = 0.0;
    printf("valor de massa em libras = ");
    scanf("%f",&l);
    printf("%.2f libras = %.2f Kg \n", l, l * 0.45);
}

/** Exercicio 22
* Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula
* de convers˜ao é: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento
* em metros.
*/
void ex22()
{
    float j;
    printf("valor de comprimento em jardas = ");
    scanf("%f",&j);
    printf("%.2f jardas = %.2f metros \n", j, 0.91*j);
}

/** Exercicio 23
* Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula
* de conversao é: J = M / 0.91 , sendo J o comprimento em jardas e M o comprimento em
* metros.
*/
void ex23()
{
    float m;
    printf("valor de comprimento em metros = ");
    scanf("%f",&m);
    printf("%.2f metros = %.2f jardas \n", m, m / 0.91);
}

/** Exercicio 24
* Leia um valor de área em metros quadrados m^2 e apresente-o convertido em acres. A
* fórmula de conversão é: A = M * 0.000247, sendo M a área em metros quadrados e A
* a área em acres.
*/
void ex24()
{
    float m;
    printf("valor de area em metros quadrados = ");
    scanf("%f",&m);
    printf("%.2f m^2 = %.9f acres \n", m, m*0.000247);
}

/** Exercicio 25
* Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A fórmula
* de convers˜ao é: M = A*4048,58, sendo M a área em metros quadrados e A a área em acres.
*/
void ex25()
{
    float a;
    printf("valor de area em acres = ");
    scanf("%f",&a);
    printf("%.5f acres = %0.2f m^2\n",a,a*4048.58);
}

/** Exercicio 26
* Leia um valor de área em metros quadrados m^2 e apresente-o convertido em hectares.
* A fórmula de convers˜ao é: H = M*0,0001, sendo M a área em metros quadrados e Ha área em hectares.
*/
void ex26()
{
    float m;
    printf("valor da area em metros = ");
    scanf("%f",&m);
    printf("%0.2f m = %0.5f Ha \n",m,m*0.0001);

}

/** Exercicio 27
* Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2.
* A fórmula de convers˜ao é: M = H ∗10000, sendo M a área em metros quadrados e Ha área em hectares
*/
void ex27()
{
    float ha;
    printf("valor da area em hectares = ");
    scanf("%f",&ha);
    printf("%0.6f Ha = %0.2f m \n",ha, ha*10000);
}

/** Exercicio 28
* Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.
*/
void ex28()
{
    int i;
    float num = 0, resultado = 0;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("Valor %d = ",i+1);
        scanf("%f",&num);
        resultado += (num*2);
    }
    printf("Resultado = %0.2f\n",resultado);
}

/** Exercicio 29
* Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/
void ex29()
{
    int i;
    float nota=0, somaNota=0;
    for(i = 0 ; i < 4 ; i++)
    {
        printf("Nota %d = ",i+1);
        scanf("%f",&nota);
        somaNota+=nota;
    }
    printf("Media = %0.2f",somaNota/4);
}

/** Exercicio 30
*  Leia um valor em Euros e a cotaçao do dólar. Em seguida, imprima o valor correspondente em dólares.
*/
void ex30()
{
    float valorEuro=0.0, cotacaoDolar=0.0;
    printf("Valor em euros = ");
    scanf("%f",&valorEuro);
    printf("Cotacao do dolar = ");
    scanf("%f",&cotacaoDolar);
    printf("O valor de %0.2f euros = %0.2f dolar\n",valorEuro, valorEuro*cotacaoDolar);
}

/** Exercicio 31
*Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/
void ex31()
{
    int num;
    printf("Valor = ");
    scanf("%i",&num);
    printf("%d -> %d -> %d\n",num-1,num,num+1);
}

/** Exercicio 32
* Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
* seu dobro.
*/
void ex32()
{
    int num;
    int ant, suc;
    printf("Valor = ");
    scanf("%i",&num);
    ant = num*2-1;
    suc = num*3+1;
    printf("-> %d\n",suc+ant);
    printf("-> %d\n",num*3+num*2);
}

/** Exercicio 33
* Leia o tamanho do lado de um quadrado e imprime como resultado a sua área.
*/
void ex33()
{
    int lado;
    printf("Tamanho do lado do quadrado = ");
    scanf("%d",&lado);
    printf("Area = %d\n",lado*lado);
}

/** Exercicio 34
* Leia o valor do raio de um cárculo e calcule e imprima a área do círculo correspondente.
* A área do cárculo á PI * raio^2, considere PI = 3.141592
*/
void ex34()
{
    const float PI = 3.141592;
    float raio;
    printf("Valor do raio = ");
    scanf("%f",&raio);
    printf("Area = %0.3f\n",raio*raio*PI);
}

/** Exercicio 35
* Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equaç˜ao:
* hipotenusa = srqt(a^2 + b^2). Faça um programa que receba os valores de a e b e calcule
* o valor da hipotenusa através da equaç˜ao. Imprima o resultado dessa operaçao.
*/
void ex35()
{
    float a, b;
    printf("Valor do cateto A = ");
    scanf("%f",&a);
    printf("Valor do cateto B = ");
    scanf("%f",&b);
    printf("Hipotenusa = %.3f\n",sqrt(a*a + b*b));
}

/** Exercicio 36
* Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
* de um cilindro circular é calculado por meio da seguinte fórmula: V = PI * raio^2 * altura,
* onde PI = 3.141592.
*/
void ex36()
{
    const float PI = 3.1415592;
    float raio, altura;
    printf("Valor do raio = ");
    scanf("%f",&raio);
    printf("Valor da altura = ");
    scanf("%f",&altura);
    printf("Volume = %.3f",PI*raio*raio*altura);
}

/** Exercicio 37
* Faça um programa que leia o valor de um produto e imprima o valor com desconto,
* tendo em vista que o desconto foi de 12%
*/
void ex37()
{
    float valor, desc = 0.12;
    printf("Valor = ");
    scanf("%f",&valor);
    printf("Valor final = %.2f \n",valor-valor*desc);
}

/** Exercicio 38
* Leia o salário de um funcionário. Calcule e imprima o valor do novo salário,
* sabendo que ele recebeu um aumento de 25%.
*/
void ex38()
{
    float salario, aumento;
    printf("Salario = ");
    scanf("%f",&salario);
    aumento = 0.25*salario;
    salario += aumento;
    printf("Salario atual = %0.3f\n",salario);
}

/** Exercicio 39
* A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
* Sendo que da quantia total:
* -> O primeiro ganhador receberá 46%;
* -> O segundo receberá 32%;
* -> O terceiro receberá o restante;
*/
void ex39()
{
    const float premio = 780000.00;
    float pp = premio*0.46; //primeiro
    float sp = premio*0.32; //segundo
    float tp = premio - pp - sp; //terceiro
    printf(" Premios:\n\t Primeiro -> %.3f\n\t Segundo -> %.3f\n\t Terceiro -> %.3f\n",pp,sp,tp);
}

/** Exercicio 40
* Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
* o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser
* paga, sabendo-se que s˜ao descontados 8% para imposto de renda.
*/
void ex40()
{
    const float ordenado = 30, desc = 0.08;
    float custo;
    int dias;
    printf("Numero de dias de trabalho = ");
    scanf("%d",&dias);
    custo = dias * ordenado;
    custo = custo - (custo*desc);
    printf("Custo = %0.2f",custo);
}

/** Exercicio 41
* Faça um programa que leia o valor da hora de trabalho (em euros) e número de horas
* trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
* o valor calculado.
*/
void ex41()
{
    float preco, salario, extra = 0.1;
    int horas;
    printf("Valor da hora de trabalho = ");
    scanf("%f",&preco);
    printf("Numero de hora de trabalho no mes = ");
    scanf("%d",&horas);
    salario = preco*horas + preco*horas*extra;
    printf("Valor a ser pago = %0.2f\n",salario);
}

/** Exercicio 42
* Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
* que esse funcionário tem uma gratificaçao de 5% sobre o salário-base. Além disso,
* ele paga 7% de imposto sobre o salário-base.
*/
void ex42()
{
    float salarioBase, imposto = 0.07, gratificacao = 0.05;;
    printf("Salario base = ");
    scanf("%f",&salarioBase);
    imposto *= salarioBase;
    printf("Imposto = %0.2f Euros\n",imposto);
    gratificacao *= salarioBase;
    printf("Gratificacao = %.2f Euros\n",gratificacao);
    printf("Salario liquido = %0.2f Euros\n",salarioBase+gratificacao-imposto);
}

/** Exercicio 43
* Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
* -> o total a pagar com desconto de 10%;
* -> o valor de cada parcela, no parcelamento de 3X sem juros;
* -> a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
* -> a comiss˜ao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
*/
void ex43()
{
    const float desc = 0.1, comissaoDesc = 0.05, comissaoSemDesc = 0.05;
    const int parcelas = 3;
    float valor;
    printf("Valor toatl = ");
    scanf("%f",&valor);
    printf("Valor -> prestacao unica = %0.2f \n", valor - valor*desc);
    printf("Comissao -> prestacao unica = %0.2f \n", (valor - valor*desc)*comissaoDesc);
    printf("Valor -> (3X sem juros) cada parcela= %0.2f \n", valor / parcelas);
    printf("Comissao -> (3X sem juros) = %0.2f \n",valor*comissaoSemDesc);
}

/** Exercicio 44
* Receba a altura do degrau de uma escada e a altura que o usuáario deseja alcançar
* subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
* seu objetivo.
*/
void ex44()
{
    float alturaDegrau, alturaAlcancar;
    int nDegraus;
    printf("Altura dos degraus = ");
    scanf("%f",&alturaDegrau);
    printf("Altura que pertende alcancar = ");
    scanf("%f",&alturaAlcancar);
    nDegraus = alturaAlcancar/alturaDegrau;
    printf("Deve subir -> %i para alcancar a altura de -> %0.2f metros \n",nDegraus,nDegraus*alturaDegrau);
    ++nDegraus;
    printf("Deve subir -> %i para alcancar a altura de -> %0.2f metros \n",nDegraus,nDegraus*alturaDegrau);
}

/** Exercicio 45
* Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
* ASCII para resolver o problema.
*/
void ex45()
{
    char letra;
    printf("Letra de a - Z (minuscula) ser convertida = ");
    scanf("%c",&letra);
    letra = 'A' + letra - 'a';
    printf("Letra convertida = %c",letra);
}

/** Exercicio 46
* Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
* Gere outro número formado pelos dígitos invertidos do número lido. Exemplo:
*
* NúmeroLido = 123
* NúmeroGerado = 321.
*/
void ex46a()
{
    char a,b,c;
    printf("Numero inteiro positivo de tres digitos (de 100 a 999) = ");
    scanf("%c%c%c",&a,&b,&c);
    printf("%c%c%c",c,b,a);
}
void ex46b()
{
    int num, unid, dez, cent, numInv;
    printf("Numero inteiro positivo de tres digitos (de 100 a 999) = ");
    scanf("%d",&num);
    numInv = unid = num /100;
    num = num % 100;
    numInv += dez = (num / 10)*10;
    numInv += cent = (num % 10)*100;
    printf("%d",numInv);
}

/** Exercicio 47
* Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/
void ex47()
{
    int num, a, b, c, d;
    printf("Numero inteiro de 4 dígitos (de 1000 a 9999) = ");
    scanf("%d",&num);
    a = num / 1000;
    num = num % 1000;
    b = num / 100;
    num = num % 100;
    c = num / 10;
    d = num % 10;
    printf(" %d\n %d\n %d\n %d\n",a,b,c,d);
}

/** Exercicio 48
* Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/
void ex48()
{
    int hora, min, seg, segTotal;
    printf("Valor inteiro em segundos = ");
    scanf("%d",&segTotal);
    hora = segTotal / 3600;
    min = (segTotal % 3600 ) / 60;
    seg = (segTotal % 3600 ) % 60;
    printf("%d:%d:%d \n",hora,min,seg);
}

/** Exercicio 49
* Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duraç˜ao, em
* segundos, de uma experiência biológica. O programa deve resultar com o novo horário
* (hora, minuto e segundo) do termino da mesma.
*/
void ex49()
{
    int totalSegInic, duracao, totalSeg, hora, min, seg;
    printf("Hora = ");
    scanf("%d",&hora);
    printf("Minuto = ");
    scanf("%d",&min);
    printf("Segundo = ");
    scanf("%d",&seg);
    printf("Duracao = ");
    scanf("%d",&duracao);
    totalSegInic = hora * 3600 + min * 60 + seg;
    totalSeg = totalSegInic + duracao;

    hora = totalSeg / 3600;
    min = (totalSeg % 3600 ) / 60;
    seg = (totalSeg % 3600 ) % 60;
    printf("Hora de termino = %d : %d : %d \n", hora, min, seg);
}

/** Exercicio 50
* Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
* sua idade e do ano atual.
*/
void ex50()
{
    int anoN;
    int anoA = 2016; //Ano atual
    int idade;
    printf("Qual e a sua Idade = ");
    scanf("%d",&idade);
    anoN = anoA - idade;
    printf("Ano de nascimento = %d",anoN);
}

/** Exercicio 51
* Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
* distância da origem (0; 0).
*/
void ex51()
{
    int x , y ;
    float dist;
    printf("X = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    dist = sqrt(x*x + y*y);
    printf("Distancia a origem = %f",dist);
}

/** Exercicio 52
* Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente
* ao valor que cada deu para a realizaç˜ao da aposta. Faça um programa
* que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
* ganharia do prêmio com base no valor investido.
*/
void ex52(){
float premio , valorJ1 , valorJ2 , valorJ3 , totalApostado;
printf("Valor apostado - Jogador 1 = ");
scanf("%f",&valorJ1);
printf("Valor apostado - Jogador 2 = ");
scanf("%f",&valorJ2);
printf("Valor apostado - Jogador 3 = ");
scanf("%f",&valorJ3);
printf("\n");
printf("Valor do premio = ");
scanf("%f",&premio);
totalApostado = valorJ1 + valorJ2 + valorJ3;
printf("\n");
printf("Valor premio - Jogador 1 = %0.2f\n", premio*(valorJ1/totalApostado));
printf("Valor premio - Jogador 2 = %0.2f\n", premio*(valorJ2/totalApostado));
printf("Valor premio - Jogador 3 = %0.2f\n", premio*(valorJ3/totalApostado));
}

/** Exercicio 53
* Faça um programa para ler as dimens˜oes de um terreno (comprimento c e largura l),
* bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
* com tela.
*/
void ex53(){
float c , l , p;
printf("Comprimento = ");
scanf("%f",&c);
printf("Largura = ");
scanf("%f",&l);
printf("Preco por metro = ");
scanf("%f",&p);
printf("Custo da cerca total = %0.2f",c*l*p);
}


int main()
{
    ex53();
    //ex52();
    //ex51();
    //ex50();
    //ex49();
    //ex48();
    //ex47();
    //ex46b();
    //ex46a();
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
    //ex9();
    //ex8();
    //ex7();
    //ex6();
    //ex5();
    //ex4();
    //ex3();
    //ex2();
    //ex1();
    return 0;
}
