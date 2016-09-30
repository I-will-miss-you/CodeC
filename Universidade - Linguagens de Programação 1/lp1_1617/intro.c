/** Introdução ao C
* Código/funções de "introdução" a linguagem C:
*   getchar();
*   scanf();
*   printf();
*   for( ; ; ){ }
*   while(){}
*   do{ }while();
*   if(){ }else if(){ }else{ }
*   switch(){ case '': break.... default:}
*   e mais alguns algumas "coisinhas"
*/


#include "main.h"
#define true 1
#define false !true
#define bool  true

/**Exercicio 01
*   Ler um carater atraves do teclado e depois imprimir
*   o seu valor ASCII e o repectivo carater
*/
void ex01()
{
    char c;
    printf(" Escreva um carater = _\b");

    scanf(" %c",&c);

    scanf("%*[^\n]");
    scanf("%*c");
    printf(" $> %c = %d",c,c);
}

/** Exercicio 02
*   Ler um carater atraves do teclado e depois imprimir
*   o seu valor ASCII e o repectivo carater até encontra "\n"
*/
void ex02()
{
    char c;
    printf(" Escreva varios carateres = _\b");
    c = getchar();
    while( c != '\n')
    {
        printf(" $> %c = %d\n",c,c);
        c = getchar();
    }
}

void ex02b()
{
    char c;
    printf(" Escreva um carater = _\b");
    c = getchar();
    scanf("%*[^\n]");
    scanf("%*c");
    while(1)
    {
        printf(" $> %c = %d\n",c,c);
        printf(" Escreva um carater = _\b");
        c = getchar();
        if( c == '\n') break;
        scanf("%*[^\n]");
        scanf("%*c");
    }
}

/**Exercicio 3
* Valida a entrada de um número de telefone
*/
void ex03()
{
    char ntelef[10]= {'\0'};
    int nCaracteres = 0;
    printf("\n Insira o seu numero de telefone = _\b");
    scanf("%9[0123456789]%ns",ntelef,&nCaracteres);
    scanf("%*[^\n]");
    scanf("%*c");

    if(nCaracteres < 9)
    {
        printf("Numero de telefone invalido.\n O seu numero de telefone ou telemovel\
 nao contem 9 digitos (0-9).\n Exemplo:912123123.\n");
    }
    else if(ntelef[0] != '2' && ntelef[0] != '9')
    {
        printf(" Numero de telefone invalido.\
        \n So sao aceites numeros comecados por 2, 91, 93 ou 96\
        \n Exemplo:912123123.\n");
    }
    else if(ntelef[0] == '9' && ntelef[1] != '1' && ntelef[1] != '3'&& ntelef[1] != '6' )
    {
        printf(" Numero de telefone invalido.\
        \n So sao aceites numeros comecados por 2, 91, 93 ou 96\
        \n Exemplo:912123123.\n");
    }
    else
    {
        printf("\n %s \n",ntelef);
    }
}


/** Exercicio 4
* Calcular o valor medio
* relativa a esplicação dos operadores bitwise (LP TP - 22/09/2016)
*/
int valor_medio_int(int a, int b)
{
    return (a + b) >> 1;
}

/** Exercicio 5
* Ler um conjunto de caracteres. Deve verificar se é ou não digito
*/
void ex05()
{
    char c = '\0';

    while( c != '\n')
    {
        if(c != '\0')
        {
            if(c >= '0' && c <= '9') printf(" E digito...\n");
            else printf(" Nao e digito...\n");
        }

        printf(" Valor -> _\b");
        c = getchar();
        scanf("%*[^\n]");
        scanf("%*c");
    }
}

/** Exercicio 06
* Fazer um programa que receba uma Data MM/DD/AAAA e o sexo da respectiva pessoa
*/
void ex06()
{
    int dia = 0, mes = 0, ano = 0;
    char sexo = '\0';

    printf("Insira uma data (DD/MM/AAAA) e o seu Sexo (M /F) = _\b");
    scanf("%d%*c%d%*c%d %c",&dia,&mes,&ano,&sexo);
    printf("dados de entrada = %d / %d / %d o sexo %c",dia,mes,ano,sexo);
}

void ex06b()
{
    int dia = 0, mes = 0, ano = 0;
    char sexo = '\0';

    while(1)
    {
        printf("Insira uma data (DD/MM/AAAA) e o seu Sexo (M /F) = _\b");
        scanf("%d%*c%d%*c%d %c",&dia,&mes,&ano,&sexo);
        if(getchar() == '.') break;
    }
}

/** Exercicio 07
* Ler em ciclo 1 tecla e verificar e informar se é:
* digito
* vogal
* outro
*/
void ex07()
{
    char c = '\0';
    do
    {
        printf(" Caracter = _\b");
        scanf(" %c",&c);
        if(c == '.') break;
        if(c >= '0' && c <= '9')
        {
            printf("E digito...\n");
        }
        else
        {
            switch(c)
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("E vogal...\n");
                break;
            default:
                printf("E indefenido...\n");
            }
        }
    }
    while(1);
}

/** Exercicio 08
* Ler teclas sucessivas terminadas '\n'
* imprimir: nº digitos
*           nº letras
*           nº brancos
*/
void ex08()
{
    int digitos = 0, letras = 0, brancos = 0;
    char c = '\0';
    printf("Valor = _\b");
    do
    {
        scanf("%c",&c);
        if(c >= '0' && c <= '9')
        {
            digitos++;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            letras++;
        }
        else
        {
            switch(c)
            {
            case ' ':
            case '\t':
            case '\n':
            case '\r':
                brancos++;
                break;
            }
        }
    }
    while(c != '\n');
    printf("Numero de digitos = %d\n",digitos);
    printf("Numero de letras = %d\n",letras);
    printf("Numero de brancos = %d\n",brancos);

}

/** Exercicio 09
* JOGO DO ADIVINHA
*/
void ex09()
{
    srand(time(NULL) );
    int max = 99, chave = 1 + rand()%99, aposta = 0, tentativas = 0;

    while(1)
    {
        printf(" Escola um valor entre 0 e %d = ",max+1);
        scanf("%d",&aposta);
        scanf("%*[^\n]");
        scanf("%*c");
        tentativas++;

        if(aposta == chave)
        {
            printf(" Parabens ganhaste... Acertaste ao fim de %d tentativas...\n",tentativas);
            break;
        }
        else
        {
            if(aposta < chave ) printf(" A chave e maior \n");
            else printf(" A chave e menor\n ");
        }
    }
    printf(" Press any key to exit...\n $>_\b");
    getchar();
}

/** Exercicio 10
* 1 - Criar uma função que calcule a multiplicação entre dois valores através de somas sucessivas -> my_math.c
* 2 - ultilizar a função anterior para criar uma tabuada. Deve conter a tabuada do 1 até a do 9.
*/

void print_rep_ex10(int tabuadas_por_linha)
{
    int i = 0;
    printf("    %c                             %c",219,219); //left
    for( i = 1 ; i < tabuadas_por_linha ; i++)
        printf("%c                             %c",219,219); //middle
    printf("\n");//right
}

void ex10()
{
    int value = 1, //tabuada do 1
        max_tabuada = 9, //maxima tabuada a ser calculada
        tabuadas_por_linha = 3, //maximo de tabuadas por linha
        max_mul = 10;
    int i = 0, j = 0;
    int barra = 30 * tabuadas_por_linha + tabuadas_por_linha;

    while(value < max_tabuada)
    {
        printf("    ");
        ascii_art_square_bottom(barra);
        printf("\n");
        print_rep_ex10(tabuadas_por_linha);

        printf("    %c          TABUADA %2d         %c",219,value,219); //left
        for( i = 1 ; i < tabuadas_por_linha ; i++)
            printf("%c          TABUADA %2d         %c",219,value + i,219); //middle
        printf("\n");//right

        print_rep_ex10(tabuadas_por_linha);
        printf("    ");
        ascii_art_square_middle(barra);
        printf("\n");
        print_rep_ex10(tabuadas_por_linha);
        for(i = 1 ; i <= max_mul ; i++)
        {
            printf("    %c       %2d x %2d = %2d          %c",219,value,i,(int)mult_int_values(value,i),219); //left
            for( j = 1 ; j < tabuadas_por_linha ; j++)
                printf("%c       %2d x %2d = %2d          %c",219,value+ j, i,(int)mult_int_values(value+j,i),219);
            printf("\n");//right
        }

        print_rep_ex10(tabuadas_por_linha);
        printf("    ");
        ascii_art_square_top(barra);
        printf("\n");
        value += tabuadas_por_linha;
    }
}

/** Exercicio 11
* Calcular apotencia de um numero atraves de uma função recrussiva
*/
double ex11(double base, double exp)
{
    if(exp == 0) return 1;
    if(exp == 1) return base;
    return base*ex11(base, exp - 1);
}

/** Exercicio 12
* Tabuada recursiva
*/
void ex12(int a, int b)
{
    if(b == 1)
    {
        printf(" %2d x %2d = %2d \n", a, b, a*b);
    }
    else
    {
        ex12(a,b-1);
        printf(" %2d x %2d = %2d \n", a, b, a*b);
    }
}

/** Exercicio 13
* Fatorial de N
*/
double ex13(int fact)
{
    if(fact == 0 || fact == 1) return 1;
    return fact*ex13(fact-1);
}

/**Exercicio 14
* Fazer uma função que imprime um tringulo e uma pirâmide
*/
void print_char_t(int n, char c)
{
    for( n = n ; n > 0 ; n--) printf("%c",c);
    printf("\n");
}
void print_char_white(int n)
{
    for( n = n ; n > 0 ; n--) printf(" ");
}
void ex14(int n)
{
    int i = 0 , j = 0;
    for( i = n ; i > 0 ; i--) print_char_t(i,'*');

    for( i = n , j= 0; i > 0 ; i-=2 , j++)
    {
        print_char_white(j);
        print_char_t(i,'*');
    }
}



int intro_main_teste()
{
    ex14(20);
    //printf(" %e", ex13(32));
    //ex12(2,10);
    //printf("%.2f \n",ex11(2,8));
    //ex10();
    //ex09();
    //ex08();
    //ex07();
    //ex06b();
    //ex06();
    //ex05();//e digito?
    //printf("%d\n",valor_medio_int(0,5)); //exercicio 4
    //ex03b();
    //ex03();
    //ex02();
    //ex02b();
    //ex1();
    return 0;
}
