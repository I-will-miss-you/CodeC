#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/** Exercicio 01
* Faça um programa que receba dois números e mostre qual deles é o maior.
*/
int ex01(int a, int b)
{
    if(a > b) return a;
    return b;
}

/** Exercicio 02
* Leia um número fornecido pelo usúario. Se esse número for positivo, calcule a raiz
* quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
* número é inválido.
*/
void ex02()
{
    int num;
    printf("Valor = ");
    scanf("%d",&num);
    if(num < 0 )
    {
        getchar();
        printf("Numero e invalido... O numero tem de ser positivo...\n");
        printf("Press to cont...");
        getchar();
        system("cls");
        ex02();
    }
    else printf("Raiz = %.2f\n",sqrt(num));
}

/** Exercicio 03
* Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
* imprima o numero ao quadrado.
*/
void ex03()
{
    int num;
    printf("Valor = ");
    scanf("%d",&num);
    if(num >= 0) printf("Raiz = %.2f\n",sqrt(num));
    else printf("Numero ao quadrado = %d\n",num*num);
}

/** Exercicio 04
* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
* -> O número digitado ao quadrado
* -> A raiz quadrada do número digitado
*/
void ex04()
{
    int num;
    printf("Valor = ");
    scanf("%d",&num);
    if(num >= 0)
    {
        printf("Numero ao quadrado = %d\n",num*num);
        printf("Numero raiz quadrada = %.2f\n",sqrt(num));
    }
    else
    {
        getchar();
        printf("Numero e invalido... O numero tem de ser positivo...\n");
        printf("Press to cont...");
        getchar();
        system("cls");
        ex04();
    }
}

/** Exercicio 05
* Faça um programa que receba um número inteiro e verifique se este número é par ou
* ímpar.
*/
void ex05()
{
    int num;
    printf("Valor = ");
    scanf("%d",&num);
    if(num%2 == 0) printf(" Numero -> Par");
    else printf(" Numero -> Impar");
}

/** Exercicio 06
* Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
* assim como a diferença existente entre ambos.
*/
void ex06(int a, int b)
{
    if(a > b) printf(" %d > %d com a diferença de %d unidades\n",a,b,a-b);
    else printf(" %d > %d com a diferença de %d unidades\n",b,a,b-a);
}

/** Exercicio 07
* Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
* números forem iguais, imprima a mensagem Números iguais.
*/
void ex07(int a, int b)
{
    if(a == b) printf(" %d = %d -> Valore sao iguais... \n",a,b);
    else if(a > b) printf(" %d > %d com a diferença de %d unidades\n",a,b,a-b);
    else printf(" %d > %d com a diferença de %d unidades\n",b,a,b-a);
}

/** Exercicio 08
* Faça um programa que leia 2 notas de um aluno, verifique se as notas s˜ao válidas e
* exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
* valor entre 0.0 e 10.0, onde caso a nota n˜ao possua um valor válido, este fato deve ser
* informado ao usuário e o programa termina.
*/
void ex08(float a, float b)
{
    if( a < 0.0 || a > 10.0 || b < 0.0 || b > 10.0)
        printf(" As notas tem de ser maior que 0 e menor 10 \n");
    else
        printf(" Media = %0.2f \n",(a+b)/2);

}

/** Exercicio 09
* Leia o salário de um trabalhador e o valor da prestaç˜ao de um emprástimo. Se a
* prestaç˜ao for maior que 20% do salário imprima: Empréstimo não concedido, caso
* contrário imprima: Empréstimo concedido.
*/
void ex09(float salario, float prestacao)
{
    const float margem = 0.20;
    (prestacao > salario*margem) ? printf("\n Emprestimo nao concedido... \n") : printf("\n Emprestimo concedido... \n");
}

/** Exercicio 10
* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
* peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
* -> Homens: (72.7 * h) - 58
* -> Mulheres: (62.1 * h) - 44.7
*/
void ex10(float altura, char sexo)
{
    if(sexo == 'm' || sexo == 'M')  printf("O seu peso ideal = %0.2f \n", (72.7 * altura) - 58);
    else if(sexo == 'f' || sexo == 'F') printf("O seu peso ideal = %0.2f \n", (62.1 * altura) - 44.7);
    else printf("Erro no seu sexo... \n");
}

/** Exercicio 11
* Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
* soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
* 8 (2 + 5 + 1). Se o número lido n˜ao for maior do que zero, o programa terminará com a
* mensagem “Número inválido”.
*/
void ex11()
{
    int n, soma;
    printf("Valor inteiro (3 digitos) = ");
    scanf("%d",&n);
    if(n < 0) printf("Numero Invalido... \n");
    else
    {
        soma = n / 100;
        n = n % 100;
        soma += n / 10;
        soma += n % 10;
        printf("Soma = %d", soma);
    }
}

/** Exercicio 12
* Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
* inválido”. Se o número for positivo, calcular o logaritmo deste numero.
*/
void ex12()
{
    int n;
    printf(" Valor = ");
    scanf("%d",&n);
    if(n < n)
        printf("Numero Invalido \n");
    else
        printf(" Valor do Log = %0.5f \n", log(n));
}

/** Exercicio 13
* Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
* a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
* e indicar se o aluno foi aprovado ou reprovado. A nota para aprovaç˜ao deve ser igual ou
* superior a 60 pontos.
*/
void ex13()
{
    float nota1, nota2, nota3, media;
    printf(" Nota de 0 - 100.\n Aluno aprovado se a nota for superior 60 valores \n\n");
    printf(" Nota 1 = ");
    scanf("%f",&nota1);
    printf(" Nota 2 = ");
    scanf("%f",&nota2);
    printf(" Nota 3 = ");
    scanf("%f",&nota3);
    media = (nota1+nota2+2*nota3)/4;
    printf(" Media = %0.2f \n", media);
    media >= 60 ? printf(" Aluno aprovado\n"): printf(" Aluno reprovado\n");

}

/** Exercicio 14
* A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
* de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliaçao semestral
* e a um exame final. A média das três notas mencionadas anteriormente obedece aos
* pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
* com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
* recuperaç˜ao (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificaç˜oes necessárias.
*/
void ex14()
{
    system("cls");
    const int min = 0, max = 10;
    const float pLab = 2, pAvSem = 3, pExFin = 5;
    float nLab = -1, nAvSem = -1, nExFin = -1, media = -1;
    printf(" Nota Laboratorio = ");
    scanf("%f",&nLab);
    printf(" Nota Avaliacao Semestral = ");
    scanf("%f",&nAvSem);
    printf(" Nota Exame Final = ");
    scanf("%f",&nExFin);
    if( nLab < min || nAvSem < min || nExFin < min ||  nLab > max || nAvSem > max || nExFin > max)
    {
        printf(" Todas as notas tem de ser superiores %d e inferiores a %d \n",min,max);
        getchar();
        printf(" Press to restart ...");
        getchar();
        ex14();
    }
    else
    {
        media = (nLab * pLab + nAvSem * pAvSem + nExFin * pExFin)/(pLab + pAvSem + pExFin);
        if(media < 3) printf(" Reprovado com media de = %0.2f valores. \n", media);
        else if(media >= 5) printf(" Aprovado com media de = %0.2f valores. \n", media);
        else printf(" Recuperacao com media de = %0.2f valores. \n", media);
    }

}

/** Exercicio 15
* Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
* da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e
* assim por diante.
*/
void ex15(int dia)
{
    switch(dia)
    {
    case 1:
        printf("Domingo \n");
        break;
    case 2:
        printf("Segunda \n");
        break;
    case 3:
        printf("Terça \n");
        break;
    case 4:
        printf("Quarta \n");
        break;
    case 5:
        printf("Quinta \n");
        break;
    case 6:
        printf("Sexta \n");
        break;
    case 7:
        printf("Sabado \n");
        break;
    default:
        printf("Opcao invalida\n");
    }
}

/** Exercicio 16
* Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
* correspondente a este numero. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.
*/
void ex16(int mes)
{
    switch(mes)
    {
    case 1:
        printf(" Janeiro \n");
        break;
    case 2:
        printf(" Fevereiro \n");
        break;
    case 3:
        printf(" Março \n");
        break;
    case 4:
        printf(" Abril \n");
        break;
    case 5:
        printf(" Maio \n");
        break;
    case 6:
        printf(" Junho \n");
        break;
    case 7:
        printf(" Julho \n");
        break;
    case 8:
        printf(" Agosto \n");
        break;
    case 9:
        printf(" Setembro \n");
        break;
    case 10:
        printf(" Outubro \n");
        break;
    case 11:
        printf(" Novembro \n");
        break;
    case 12:
        printf(" Dezembro \n");
        break;
    default:
        printf(" Opcao invalida\n");
    }
}

/** Exercicio 17
* Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
* A = (basemaior + basemenor) * altura / 2
* Lembre-se a base maior e a base menor devem ser n´umeros maiores que zero.
*/
void ex17(float baseA, float baseB, float altura)
{
    if( baseA <= 0 || baseB <= 0)
        printf(" A base menor e maior tem de ser superiores a 0 (zero)... \n");
    else printf(" Area = %0.2f \n", ( baseA + baseB ) * altura / 2 );
}

/** Exercicio 18
* Faça um programa que mostre ao usuário um menu com 4 opç˜oes de operaç˜oes matemáticas
* (as básicas, por exemplo). O usuário escolhe uma das opçoes e o seu programa
* ent˜ao pede dois valores numéricos e realiza a operaça˜ao, mostrando o resultado e
* saindo.
*/
void ex18()
{
    int op;
    float val1, val2;
    printf(" Escolha uma das opcoes: \n 1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n _$>");
    scanf("%d",&op);
    printf("Introduza os valores para realizar a operacao : \n");
    printf(" Valor 1 = ");
    scanf("%f",&val1);
    printf(" Valor 2 = ");
    scanf("%f",&val2);
    switch(op)
    {
    case 1:
        printf(" Soma = %0.2f",val1+val2);
        break;
    case 2:
        printf(" Subtracao = %0.2f",val1-val2);
        break;
    case 3:
        printf(" Multiplicacao = %0.2f",val1*val2);
        break;
    case 4:
        printf(" Divisao = %0.2f",val1/val2);
        break;
    default:
        printf(" Opcao invalida");

    }
}

/** Exercicio 19
* Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou
* 5, mas n˜ao simultaneamente pelos dois.
*/
void ex19(int n)
{
    int d1 = 3, d2 = 5;
    int rest1 = n % d1, rest2 = n % d2;
    if((rest1 == 0 || rest2 == 0) && !(rest1 == 0 && rest2 == 0)) printf(" O %d\t - e um numero valido ...\n",n);
    else printf(" O %d\t - e um numero nao valido ...\n",n);
}

/** Exercicio 20
* Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo
* e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguintes
* conceitos:
* -> O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
* -> Chama-se equilátero o triângulo que tem três lados iguais.
* -> Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
* -> Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/
void ex20(float a, float b, float c)
{
    printf("\n A = %0.2f : B = %0.2f : C = %0.2f \n",a,b,c);
//é triangulo? se cada lado de um triângulo é menor do que a soma dos outros dois lados.
    if( (a < b + c) && (b < a + c) && (c < b + a))
    {
        //equilatero? - tres lados iguais
        if( a==b && b==c)
            printf(" -> Triangulo equilatero... \n");
        //isosceles? - dois lados iguais
        else if( (a == b) || (a == c) || (b == c))
            printf(" -> Triangulo isosceles... \n");
        // escaleno - 3 lados diferentes
        else printf(" -> Traingulo escaleno... \n");
    }
    else printf(" -> Nao e triangulo... \n");

}

/**Exercicio 21
* Escreva o menu de opçoes abaixo. Leia a opç˜ao do usuário e execute a operaç˜ao escolhida.
* Escreva uma mensagem de erro se a opç˜ao for inválida.
* Escolha a opção:
* 1- Soma de 2 números.
* 2- Diferença entre 2 números (maior pelo menor).
* 3- Produto entre 2 números.
* 4- Divisão entre 2 números (o denominador não pode ser zero).
* Opção
*/
void ex21()
{
    char op;
    float num1, num2;

    printf(" Escolha a opcao: \n");
    printf(" 1- Soma de 2 numeros. \n");
    printf(" 2- Diferença entre 2 numeros (maior pelo menor). \n");
    printf(" 3- Produto entre 2 numeros. \n");
    printf(" 4- Divisao entre 2 numeros (o denominador nao pode ser zero). \n");
    printf(" Opcao = ");
    scanf("%c",&op);
    printf("\n");
    printf(" Valor 1 = ");
    scanf("%f",&num1);
    printf(" Valor 2 = ");
    scanf("%f",&num2);
    printf("\n");

    switch(op)
    {
    case '1':
        printf(" Soma = %0.2f \n",num1+num2);
        break;
    case '2':
        printf(" Diferenca = %0.2f \n", fabs(num1-num2));
        break;
    case '3':
        printf(" Produto = %0.2f \n",num1*num2);
        break;
    case '4':
        if(num2 != 0) printf(" Divisao = %0.2f \n",num1/num2);
        else  printf(" O denominador nao pode ser zero \n");
        break;
    default:
        printf("Opcao invalida ... \n");
    }
}

/** Exercicio 22
* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou n˜ao se
* aposentar. As condiçoes para aposentadoria s˜ao
* -> Ter pelo menos 65 anos,
* -> Ou ter trabalhado pelo menos 30 anos,
* -> Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/
void ex22()
{
    int idade, tempoServico;
    printf(" Idade = ");
    scanf("%d",&idade);
    printf(" Tempo de Servico = ");
    scanf("%d",&tempoServico);

    if((idade >= 65) || (tempoServico >= 30) || ( (idade >= 60) && (tempoServico >= 25)))
        printf(" Pode-se aposentar. \n");
    else printf(" Ainda nao se pode aposentar. \n");
}

/** Exercicio 23
* Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
* for divisível por 400 ou se for divisível por 4 e n˜ao for divisével por 100. Por exemplo:
* 1988, 1992, 1996
*/
void ex23(int ano)
{
    if( ano%400 == 0 || (ano % 4 == 0 && !(ano % 100 == 0) )) printf(" %d Ano Bissexto \n",ano);
    else printf(" %d Ano Nao Bissexto \n",ano);
}

/** Exercicio 24
* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
* possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%).
* Faça um programa em que o usuário entre com o valor e o estado destino do
* produto e o programa retorne o preço final do produto acrescido do imposto do estado
* em que ele será vendido. Se o estado digitado n˜ao for válido, mostrar uma mensagem
* de erro.
*/
void ex24()
{
    const float iMG = 0.07, iSP = 0.12, iRJ = 0.15, iMS = 0.08;
    float preco;
    char op;
    printf(" Preco = ");
    scanf(" %f",&preco);
    printf(" Estado:\n 1 - MG\n 2 - SP\n 3 - RJ\n 4 - MS\n Opcao: ");
    scanf(" %c",&op);
    switch(op)
    {
    case '1':
        printf(" Preco final %0.2f \n",preco+preco*iMG);
        break;
    case '2':
        printf(" Preco final %0.2f \n",preco+preco*iSP);
        break;
    case '3':
        printf(" Preco final %0.2f \n",preco+preco*iRJ);
        break;
    case '4':
        printf(" Preco final %0.2f \n",preco+preco*iMS);
        break;
    default:
        printf(" Escolha invalida...\n ");
    }
}

/** Exercicio 25
* Calcule as raízes da equação de 2^ grau.
*  Lembrando que: x = (-b (+-) sqrt(^)) / a;
*  Onde: ^ = B^2 -4ac
*
* E ax^2 + bx + c = 0 representa uma equação de 2` grau.
* A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem
* “N˜ao é equaçao de segundo grau”.
* -> Se ^ < 0, n˜ao existe real. Imprima a mensagem Não existe raiz.
* -> Se ^ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz única.
* -> Se ^ >= 0, imprima as duas raízes reais.
*/
void ex25(double a, double b, double c)
{
    double delta, raizA, raizB;
    delta = b*b - 4*a*c;
    printf("\n A = %0.2f , B = %0.2f , C = %0.2f  \n",a,b,c);
    printf(" Delta = %0.2f \n", delta);
    raizA = ((-1)*b + sqrt(delta))/a;
    raizB = ((-1)*b - sqrt(delta))/a;
    if( delta < 0)
    {
        printf(" Nao existe raiz ... \n");
    }
    else if( delta == 0)
    {
        printf("Raiz unica =  %0.5f \n", raizA );
    }
    else
    {
        printf(" Contem duas raizes:\n");
        printf(" Raiz =  %0.5f \n", raizA );
        printf(" Raiz = %0.5f \n", raizB );
    }
}

/** Exercicio 26
* Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro
* em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
* a tabela abaixo:
*   CONSUMO     (Km/l)  MENSAGEM
*   menor que   8       Venda o carro!
*   entre       8 e 14  Econômico!
*   maior que   12      Super econˆomico!
*/
void ex26(int km, int litros)
{
    float media = km/litros;
    printf(" Fez %d km com %d litros", km,litros);
    if(media < 8) printf(" - Vende o carro!\n");
    else if(media >= 8 && media <12) printf(" - Economico! \n");
    else printf(" - Super Economico! \n");
}

/** Exercicio 27
* Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
* seguintes categorias:
*   Categoria       Idade
*   Infantil A      5 a 7
*   Infantil B      8 a 10
*   Juvenil A       11 a 13
*   Juvenil B       14 a 17
*   Sênior          maiores de 18 anos
*/
void ex27(int idade)
{
    if(idade >= 5 && idade <= 7) printf(" Infantil A \n");
    else if(idade >= 8 && idade <= 10) printf(" Infantil B \n");
    else if(idade >= 11 && idade <= 13) printf(" Juvenil A \n");
    else if(idade >= 14 && idade <= 17) printf(" Juvenil B \n");
    else if(idade > 18) printf(" Senior \n");

    else printf(" Idade invalida. A idade tem de ser 5 ou mais anos. \n");
}

/** Exercicio 28
* Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
* seguintes médias de acordo com um valor numérico digitado pelo usuário:
* (a) Geométrica: raizCubica(x*y*z)
* (b) Ponderada: (x+2*y+3*z) / 6;
* (c) Harmônica: 1 / ( 1/x + 1/y + 1/z)
* (d) Aritmética: (x + y + z)/3;
*/
void ex28(double x, double y, double z)
{
    double geometrica = 0, ponderada = 0, harmonica = 0, aritmetica = 0;
    geometrica = cbrt(x*y*z);
    ponderada = (x + 2*y + 3*z) / 6;
    harmonica = 1 / (1/x + 1/y + 1/z);
    aritmetica = (x + y + z) / 3;
    printf(" Media Geometrica = %0.2f \n", geometrica);
    printf(" Media Ponderada = %0.2f \n", ponderada);
    printf(" Media Harmonica = %0.2f \n", harmonica);
    printf(" Media Aritmetica = %0.2f \n", aritmetica);
}

/** Exercicio 29
* Faça uma prova de matemática para crianças que est˜ao aprendendo a somar números
* inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na
* tela a pergunta: qual é a soma de a + b, onde a e b s˜ao os números aleatórios. Peça a
* resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
* corretas, além de quantas vezes o aluno acertou.
*/
void ex29()
{
    int i, a, b, resposta, soma, acertou = 0;
    for( i = 1 ; i <= 5 ; i++)
    {
        srand(time(NULL));
        a = 1 + rand()%100;
        b = 1 + rand()%100;
        soma = a + b;
        printf(" %d + %d = ", a, b);
        scanf("%d", &resposta);
        if(resposta == soma)
        {
            acertou++;
            printf(" Parabens acertou. %d + %d = %d -> Acertou =%d , Errou = %d \n\n",a,b,soma,acertou, i - acertou);
        }
        else
            printf(" Errou. %d + %d = %d -> Acertou =%d , Errou = %d \n\n",a,b,soma,acertou, i - acertou);
    }
}

/** Exercicio 30
* Faça um programa que receba três números e mostre-os em ordem crescente.
*/
void ex30()
{
    int num1, num2,num3;
    int aux;
    printf(" Valor = ");
    scanf(" %d",&num1);
    printf(" Valor = ");
    scanf(" %d",&aux);
    if(aux > num1)
    {
        num2 = aux;
    }
    else
    {
        num2 = num1;
        num1 = aux;
    }
    printf(" Valor = ");
    scanf(" %d",&aux);
    if(aux > num2)
    {
        num3 = aux;
    }
    else
    {
        num3 = num2;
        num2 = aux;
        if(aux < num1)
        {
            num2 = num1;
            num1 =aux;
        }
    }
    printf(" %d -> %d -> %d \n",num1,num2,num3);
}

/** Exercicio 31
* Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
* a seguir, verifique e mostra qual a classificação dessa pessoa.
*       Altura                                  Peso
*                        Até 60      Entre 60 e 90 (Inclusive)       Acima de 90
*   Menor que 1,20          A                  D                           G
*   De 1,20 a 1,70          B                  E                           H
*   Maior que 1,70          C                  F                           I
*/
void ex31(float altura, int peso)
{
    printf("Altura=%0.2f Peso=%d\t Classificacao -> ",altura,peso);
    if(altura < 1.20)
    {
        if(peso <= 60) printf(" A \n");
        else if(peso > 1.60 && peso <= 90) printf(" D \n");
        else printf(" G \n");
    }
    else if(altura >= 1.20 && peso <= 1.70)
    {
        if(peso <= 60) printf(" B \n");
        else if(peso > 1.60 && peso <= 90) printf(" E \n");
        else printf(" H \n");
    }
    else
    {
        if(peso <= 60) printf(" C \n");
        else if(peso > 1.60 && peso <= 90) printf(" F \n");
        else printf(" I \n");
    }
}

/** Exercicio 32
* Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete
* e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
* Considere que a cada execuç˜ao somente será calculado um pedido. O cardápio da lanchonete
* segue o padr˜ao abaixo:
*
*   Especificaçao       Código      Preço
*   Cachorro Quente     100         1.20
*   Bauru Simples       101         1.30
*   Bauru com Ovo       102         1.50
*   Hamburguer          103         1.20
*   Cheeseburguer       104         1.70
*   Suco                105         2.20
*   Refrigerante        106         1.00
*/
void ex32(int codigo, int quantidade)
{
    printf("\n\n------------------------------------------------------------------------\n");
    switch(codigo)
    {
    case 100:
        printf("                 \t Quantidade \t Preco Total\n");
        printf(" Cachorro Quente \t     %d     \t      %.2f  \n",quantidade,quantidade * 1.20);
        break;
    case 101:
        printf("               \t Quantidade \t Preco Total\n");
        printf(" Bauru Simples \t     %d     \t      %.2f  \n",quantidade,quantidade * 1.30);
        break;
    case 102:
        printf("                      \t Quantidade \t Preco Total\n");
        printf(" Bauru com Ovo Quente \t     %d     \t      %.2f  \n",quantidade,quantidade * 1.50);
        break;
    case 103:
        printf("           \t Quantidade \t Preco Total\n");
        printf(" Hamburger \t     %d     \t      %.2f  \n",quantidade,quantidade * 1.20);
        break;
    case 104:
        printf("               \t Quantidade \t Preco Total\n");
        printf(" Cheeseburguer \t     %d     \t      %.2f  \n",quantidade,quantidade * 1.70);
        break;
    case 105:
        printf("      \t Quantidade \t Preco Total\n");
        printf(" Suco \t     %d     \t      %.2f  \n",quantidade,quantidade * 2.20);
        break;
    case 106:
        printf("              \t Quantidade \t Preco Total\n");
        printf(" Refrigerante \t     %d     \t      %.2f  \n",quantidade,quantidade * 1.00);
        break;
    default:
        printf("\n Nao existe esse codigo de produto . \n");
    }
}

/** Exercicio 33
* Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo,
* calcule e escreva o preço novo, e escreva uma mensagem em funçao do preço novo (de
* acordo com a segunda tabela).
*
*   PREÇO ANTIGO                PERCENTUAL DE AUMENTO
*   até      50€                         5%
*   entre    50€ e 100€                  10%
*   acima de 100€                        15%
*
*   PREÇO NOVO                              MENSAGEM
*   até 80€                                 Barato
*   entre 80€ e 120€ (inclusive)            Normal
*   entre 120€ e 200€ (inclusive)           Caro
*   acima de 200€                           Muito caro
*/
void ex33(float preco)
{
    float precoNovo;
    if(preco < 0)
    {
        printf("\n O preco tem de ser positivo \n");
    }
    else
    {
        if(preco <= 50) printf("\n Preco atualizado para = %0.2f \n",precoNovo = preco+preco*0.05);
        else if(preco > 50 && preco <= 100) printf("\n Preco atualizado para = %0.2f \n",precoNovo = preco+preco*0.1);
        else printf("\n Preco atualizado para = %0.2f \n",precoNovo = preco+preco*0.15);

        if(precoNovo <= 80) printf(" Barato \n");
        else if(precoNovo > 80 && precoNovo <=100) printf(" Normal \n");
        else if(precoNovo > 100 && precoNovo <=200) printf(" Caro \n");
        else printf(" Muito caro \n");
    }
}

/** Exercicio 34
* Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a
* tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
*
*       NOTA                  CONCEITO (ATÉ 20 FALTAS)         CONCEITO (MAIS DE 20 FALTAS)
*   9.0 até 10.0                        A                                   B
*   7.5 até 8.9                         B                                   C
*   5.0 até 7.4                         C                                   D
*   4.0 até 4.9                         D                                   E
*   0.0 até 3.9                         E                                   E
*/
void ex34(float nota, int faltasEmHoras)
{
    printf(" Nota: %0.2f Faltou %d horas. \n",nota,faltasEmHoras);

    if(nota < 0 || nota > 10 || faltasEmHoras < 0)
    {
        printf(" As notas do aluno tem de ser superior a 0 e menor que 10. O tempo em horas tem de ser positivo. \n");
    }
    else
    {
        if( nota >= 0  && nota < 4 )
        {
            if(faltasEmHoras <= 20) printf(" E \n");
            else printf(" E \n");
        }
        else if( nota >= 4  && nota < 5 )
        {
            if(faltasEmHoras <= 20) printf(" D \n");
            else printf(" E \n");
        }
        else if( nota >= 5  && nota < 7.5 )
        {
            if(faltasEmHoras <= 20) printf(" C \n");
            else printf(" D \n");
        }
        else if( nota >= 7.5  && nota < 9 )
        {
            if(faltasEmHoras <= 20) printf(" B \n");
            else printf(" C \n");
        }
        else
        {
            if(faltasEmHoras <= 20) printf(" A \n");
            else printf(" B \n");
        }
    }
}

/** Exercicio 35
* Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12,
* e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28
* dias em anos n˜ao bissextos.
*/

void ex35(int dia, int mes, int ano)
{
    int bissexto = ano%400 == 0 || (ano % 4 == 0 && !(ano % 100 == 0));
    printf("\n %d/%d/%d ->",dia,mes,ano);
    switch(mes)
    {
    case 2:
        if(bissexto == 1)
        {
            if(dia >= 1 && dia <= 29) printf(" Valida \n");
            else printf(" Nao valida \n");
        }
        else
        {
            if(dia >= 1 && dia <= 28) printf(" Valida \n");
            else printf(" Nao valida \n");
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(dia >= 1 && dia <= 30) printf(" Valida \n");
        else printf(" Nao valida \n");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(dia >= 1 && dia <= 31) printf(" Valida \n");
        else printf(" Nao valida \n");
        break;
    default:
        printf(" Erro no mes inserido \n");
    }
}

/** Exercicio 36
* Escreva um programa que, dado o valor da venda, imprima a comiss˜ao que deverá ser
* paga ao vendedor. Para calcular a comiss˜ao, considere a tabela abaixo:
*
*       Venda mensal                                                     Comiss˜ao
*       Maior ou igual a 100.000,00€                                   700,00€ + 16% das vendas
*       Menor que 100.000,00€ e maior ou igual a 80.000,00€            650,00€ +14% das vendas
*       Menor que 80.000,00€ e maior ou igual a 60.000,00€             600,00€ +14% das vendas
*       Menor que 60.000,00€ e maior ou igual a 40.000,00€             550,00€ +14% das vendas
*       Menor que 40.000,00€ e maior ou igual a 20.000,00€             500,00€ +14% das vendas
*       Menor que 20.000,00€                                           400,00€ +14% das vendas
*/
void ex36(float valor)
{
    if(valor >= 1000000.00) printf("Comissao = %0.2f \n", 700 + valor*0.16);
    else if(valor >= 80000.00 && valor < 1000000.00) printf("Comissao = %0.2f \n", 650 + valor*0.14);
    else if(valor >= 60000.00 && valor < 800000.00) printf("Comissao = %0.2f \n", 600 + valor*0.14);
    else if(valor >= 40000.00 && valor < 600000.00) printf("Comissao = %0.2f \n", 550 + valor*0.14);
    else if(valor >= 20000.00 && valor < 400000.00) printf("Comissao = %0.2f \n", 500 + valor*0.14);
    else if(valor >= 00.00 && valor < 200000.00) printf("Comissao = %0.2f \n", 400 + valor*0.14);
    else printf(" -> Erro no valor inserido ...");
}

/** Exercicio 37
* As tarifas de certo parque de estacionamento s˜ao as seguintes:
* -> 1a e 2a hora - 1,00€ cada
* -> 3a e 4a hora - 1,40€ cada
* -> 5a hora e seguintes - 2,00€ cada
*
*   O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo,
* quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria
* se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida
* deste s˜ao apresentados na forma de pares de inteiros, representando horas e minutos.
* Por exemplo, o par 12 50 representará “dez para a uma da tarde”. Pretende-se criar um
* programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela
* o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se d˜ao com
* intervalo n˜ao superior a 24 horas. Portanto, se uma dada hora de chegada for superior
* à da partida, isso n˜ao é uma situaç˜ao de erro, antes significar á que a partida ocorreu no
* dia seguinte ao da chegada.
*/
void ex37()
{
    int hEntrada=0, mEntrada=0, hSaida=0, mSaida=0; //Hora e minuto de entrada e hora e minuto de saida
    int entradaMin=0, saidaMin=0;   //Valores entrada e saida em minutos
    int totalMin=0, horasPagar=0;   //totalMin -> variavel auxilar para calculo do numero de hora a ser pagas (horasPagar)
    int validaEntrada = 1, validaSaida = 1; //valida as horas inseridas
    float custo = 0.0; //valor a ser pago

    printf(" Hora de Entrada (hh mm) = ");
    scanf(" %d%d",&hEntrada, &mEntrada);
    printf(" Hora de Entrada (hh mm) = ");
    scanf(" %d%d",&hSaida, &mSaida);

    if(hEntrada < 0 || hEntrada > 24 || mEntrada < 0 || mEntrada > 59) validaEntrada = 0;
    if(hSaida < 0 || hSaida > 24 || mSaida < 0 || mSaida > 59) validaEntrada = 0;

    if( !validaEntrada || !validaSaida )
    {
        printf(" ERRO - Hora de Entrada ou Saida invalida! \n");
    }
    else
    {
        entradaMin = hEntrada * 60 + mEntrada ;
        saidaMin = hSaida * 60 + mSaida;

        totalMin = (saidaMin > entradaMin)? (saidaMin - entradaMin) : (1440 - entradaMin + saidaMin);
        horasPagar = (totalMin%60 == 0) ? (totalMin/60) : (totalMin/60 + 1);

        switch(horasPagar)
        {
        case 1:
        case 2:
            custo = horasPagar;
            break;
        case 3:
        case 4:
            custo = horasPagar * 1.40 - 0.8;
            break;
        default:
            custo = (horasPagar - 4) * 2 + 4.80;
        }

        puts("");
        printf(" Tempo em parque \t= %d : %d\n",totalMin/60, totalMin%60 );
        printf(" Horas a ser pagas \t= %d \n",horasPagar);
        printf(" Valor a ser pago \t= %2.2f Euro\n",custo);
    }
}

/** Exercicio 38
* Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros:
* Dia, Mês e Ano. Teste a validade desta data para saber se esta é uma data válida. Teste
* se o dia fornecido é um dia válido: dia > 0, dia <= 28 para o mês de fevereiro (29 se o
* ano for bissexto), dia <= 30 em abril, junho, setembro e novembro, dia <= 31 nos outros
* meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano <=
* ano atual (use uma constante definida com o valor igual a 2016). Imprimir: “data válida”
* ou “data inválida” no final da execução do programa.
*/
void ex38(int dia, int mes,int ano)
{
    int anoAtual = 2016;
    int bissexto = ano%400 == 0 || (ano % 4 == 0 && !(ano % 100 == 0));
    printf("\n\n Data inserida %d/%d/%d\t-> ",dia,mes,ano);

    if(ano > anoAtual)
    {
        printf(" ERRO - Ainda vais nascer...? Data invalida...\n");
    }
    else
    {
        if(mes < 0 && mes > 12)
        {
            printf(" ERRO - So sao validos meses de 1 - 12 (Jan - Dec).  Data invalida...\n");
        }
        else
        {
            switch(mes)
            {
            case 2:
                if(bissexto == 1)
                {
                    if(dia >= 1 && dia <= 29) printf(" Data valida... \n");
                    else printf(" Data invalida...\n");
                }
                else
                {
                    if(dia >= 1 && dia <= 28) printf(" Data valida... \n");
                    else printf(" Data invalida...\n");
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if(dia >= 1 && dia <= 30) printf(" Data valida... \n");
                else printf(" Data invalida...\n");
                break;
            default:
                if(dia >= 1 && dia <= 31) printf(" Data valida... \n");
                else printf(" Data invalida...\n");
            }
        }
    }
}

/** Exercicio 39
* Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela
* que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários
* com menor salário terão um aumento proporcionalmente maior do que os funcionários
* com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá
* receber um bônus adicional de salário. Faça um programa que leia:
* -> o valor do salário atual do funcionário;
* -> o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
* Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o
* valor do salário final reajustado, ou uma mensagem caso o funcionário n˜ao tenha direito
* a nenhum aumento.
*
*   Salário Atual       Reajuste(%)     Tempo de Serviço    Bônus
*   Até 500,00          25%             Abaixo de 1 ano     Sem bônus
*   Até 1000,00         20%             De 1 a 3 anos       100,00
*   Até 1500,00         15%             De 4 a 6 anos       200,00
*   Até 2000,00         10%             De 7 a 10 anos      300,00
*   Acima de 2000,00    Sem reajuste    Mais de 10 anos     500,00
*/
void ex39(float salarioAtual, int anosTrabalho)
{

    if(salarioAtual < 0 || anosTrabalho < 0)
    {
        printf("\n ERRO - Dados invalidos... \n");
    }
    else
    {
        if(salarioAtual > 0 && salarioAtual <= 500) salarioAtual+= salarioAtual*0.25;
        if(salarioAtual > 500 && salarioAtual <= 1000) salarioAtual+= salarioAtual*0.20;
        if(salarioAtual > 1000 && salarioAtual <= 1500) salarioAtual+= salarioAtual*0.15;
        if(salarioAtual > 1500 && salarioAtual <= 2000) salarioAtual+= salarioAtual*0.10;

        if(anosTrabalho > 1  && anosTrabalho <= 3) salarioAtual+= 100;
        if(anosTrabalho > 4  && anosTrabalho <= 6) salarioAtual+= 200;
        if(anosTrabalho > 7  && anosTrabalho <= 10) salarioAtual+=300;
        if(anosTrabalho > 10) salarioAtual+= 500;

        printf("\n Salario atualizado... \n \tSalario = %0.2f \n",salarioAtual);
    }
}

/** Exercicio 40
* O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comiss˜ao
* do distribuidor, e dos impostos. A comiss˜ao e os impostos s˜ao calculados sobre o custo
* de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao
* consumidor.
*
*   CUSTO DE FÁBRICA                % DO DISTRIBUIDOR       % DOS IMPOSTOS
*   até 12.000,00€                  5                       isento
*   entre 12.000,00€ e 25.000,00€   10                      15
*   acima de 25.000,00€             15                      20
*/
void ex40(float valor)
{
    float valorFinal = 0.0;
    if(valor < 0) printf("\n Erro - Valor invalido... \n");
    if(valor >= 0 && valor <= 12000) valorFinal = valor + valor*0.05;
    if(valor > 12000 && valor <= 25000) valorFinal = valor + valor*0.1 + valor*0.15;
    if(valor > 25000) valorFinal = valor + valor*0.15 + valor*0.20;
    printf("\n Valor final = %0.2f euro\n",valorFinal);
}

/** Exercicio 41
* Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificaç˜ao de
* acordo com a tabela abaixo:
*
*   IMC             Classificaç˜ao
*   < 18,5          Abaixo do Peso
*   18,6 - 24,9     Saudável
*   25,0 - 29,9     Peso em excesso
*   30,0 - 34,9     Obesidade Grau I
*   35,0 - 39,9     Obesidade Grau II(severa)
*   >= 40,0         Obesidade Grau III(mórbida)
*/
void ex41(float peso, float altura)
{
    if(altura <= 0)
    {
        printf("\n Erro - Altura invalida... \n");
    }
    else
    {
        float imc = peso / (altura * altura);

        if(imc < 0) printf("\n Erro - Valores inseridos invalidos... \n");
        else if( imc >= 0 && imc < 18.5) printf("\n IMC = %0.2f -> Abaixo do Peso \n",imc);
        else if( imc >= 18.5 && imc < 25) printf("\n IMC = %0.2f -> Saudavel \n",imc);
        else if( imc >= 25 && imc < 30) printf("\n IMC = %0.2f -> Peso em excesso \n",imc);
        else if( imc >= 30 && imc < 35) printf("\n IMC = %0.2f -> Obesidade Grau I \n",imc);
        else if( imc >= 35 && imc < 40) printf("\n IMC = %0.2f -> Obesidade Grau II \n",imc);
        else if( imc >= 40) printf("\n IMC = %0.2f -> Obesidade Grau III \n",imc);
    }
}



int main()
{
    //ex41(-5 , 1.85); ex41(120 , 2.0); ex41(45 , 1.52); ex41(45 , 14.9); ex41(158 , 0); ex41(308.12 , 2.0);
    //ex40(-500); ex40(500); ex40(12000); ex40(15000); ex40(22000); ex40(50000);
    //ex39(250,1); ex39(500,2); ex39(800,0); ex39(800,6); ex39(2500,2); ex39(-500,2);ex39(500,-2);
    //ex38(21,12,1995); ex38(29,2,1996); ex38(29,2,1995); ex38(05,9,2020); ex38(05,18,2010);
    //ex37();
    //ex36(150000); ex36(90000); ex36(75000.52); ex36(40051.99);ex36(35585.35); ex36(1000);ex36(-150000);
    //ex35(12,12,2000); ex35(32,12,2000); ex35(29,2,2000); ex35(29,2,2002);
    //ex34(2,15); ex34(2,35); ex34(4.5,15); ex34(4.6,30); ex34(5.5,15); ex34(5.5,35); ex34(7.8,15); ex34(9.1,30); ex34(9.1,15); ex34(-8,35); ex34(9,-15); ex34(15,30);
    //ex33(50.00);ex33(80.00);ex33(100.77);ex33(150.00); ex33(200.00);
    //ex32(100, 5); ex32(101, 10); ex32(102, 3); ex32(103, 8); ex32(104, 15); ex32(105, 7); ex32(106, 8); ex32(110, 5);
    //ex31(1.10,54); ex31(1.30,50); ex31(1.90,120); ex31(1.70,70); ex31(1.90,100); ex31(1.70,50);
    //ex30();
    //ex29();
    //ex28(10,15,20);
    //ex27(4); ex27(6); ex27(8); ex27(13); ex27(16); ex27(54);
    //ex26(100,20); ex26(200,20); ex26(400,20);
    //ex25(8,19,1); ex25(1,2,1); ex25(8,-2,15);
    //ex24();
    //ex23(1988); ex23(1992); ex23(1996); ex23(2011);
    //ex22();
    //ex21();
    //ex20(20, 4, 3 ); ex20(3, 3, 3); ex20(4, sqrt(4*4 + 4*4), 4); ex20(3, 5, sqrt(9 + 25));
    //ex19(15); ex19(9); ex19(10); ex19(4);
    //ex18();
    //ex17(2.0 , 5.2 , 4); ex17(0 , 5.2 , 4); ex17(2.0 , -5 , 4);
    //ex16(1); ex16(7); ex16(11); ex16(15);
    //ex15(2); ex15(5); ex15(9);
    //ex14();
    //ex13();
    //ex12();
    //ex11();
    //ex10(1.72, 'm'); ex10(1.34, 'F'); ex10(1.50, 'I');
    //ex09(2000,400); ex09(2000,800);
    //ex08(15.0,5); ex08(10.0,-9); ex08(7.5,8.5);
    //ex07(2,3); ex07(5,1); ex07(8,8);
    //ex06(2,3); ex06(5,1);
    //ex05();
    //ex04();
    //ex03();
    //ex02();
    //exercicio 01
    //printf("Maior valor -> %d \n",ex01(1,2));
    //printf("Maior valor -> %d \n",ex01(20,2));
    return 0;
}

