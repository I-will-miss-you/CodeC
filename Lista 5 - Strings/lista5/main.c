#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

/* Exercicio 01
 * Faça um programa que então leia uma string e a imprima.
 */
void ex01() {
    char str[250] = {'\0'};
    printf("Escreva uma frase ou palavra: _\b");
    gets(str);
    printf("%s\n",str);
}

/* Exercicio 02
 * Crie um programa que calcula o comprimento de uma string (não use a função strlen).
 */
void ex02() {
    char str[250] = {'\0'};
    int cont = 0;
    printf("Escreva uma frase ou palavra: _\b");
    gets(str);
    while(str[cont++] != '\0') {}
    cont--;
    printf("Tamanho da string e: %d \n",cont);
}

void ex02b() {
    char str[250] = {'\0'};
    int n = 0;
    printf("Escreva uma string (palavra): _\b");
    scanf("%s%n",str,&n);
    printf("Tamanho da string e: %d \n",n);
}

/* Exercicio 3
 * Crie um programa que compara duas strings (não use a função strcmp).
 */
void ex03() {
    char strA[250] = {'\0'};
    char strB[250] = {'\0'};
    int nA = 0, nB = 0, i = 0;

    printf("Escreva uma string (palavra): _\b");
    scanf(" %s%n%*c",strA,&nA);
    printf("Escreva uma nova string (palavra): _\b");
    scanf(" %s%n%*c",strB,&nB);
    if(nA != nB) printf("As strings sao diferentes.\n");
    else {
        while((strA[i] == strB[i]) && (strA[i] != '\0')) {
            i++;
        }
        if(i == nA) printf("As strings sao iguais.\n");
        else printf("As strings sao diferentes.\n");
    }
}

/* Exercicio 4
 * Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.
 */
void ex04() {
    char str[50] = {'\0'};
    int n = 0, limite = 4;
    printf("Insira um nome com mais de 4 letras: _\b");
    while(n < limite) {
        scanf("%s%n%*c",str,&n);
        if(n < limite) printf("O nome tem de ter %d ou mais letras.\n Novo nome: _\b",limite);
    }

    printf("As %d letras sao:\n",limite);
    for( n = 0 ; n < limite; n++)
        printf("%c",str[n]);
    puts("");
}

/* Exercicio 5
 * Digite um nome, calcule e retorne quantas letras tem esse nome.
 */
int ex05(char *str) {
    int contador = 0;
    while(*(str++) != '\0') {
        contador++;
    }
    return contador;
}

/* Exercicio 06
* Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
* pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”.
*/
void ex06() {
    char nome[30], sexo;
    int idade;
    printf("Inserir: Nome Sexo Idade \n Exemplo: Ana F 23\n $>_\b");
    _cscanf("%s %c %d",nome,&sexo,&idade);
    _cprintf("\n");
    if((sexo == 'f' || sexo == 'F') && idade < 25) printf("%s Aceita \n",nome);
    else printf("%s Nao Aceita \n",nome);
}

/* Exercicio 07
* Faça um programa que conte o número de 1’s que aparecem em um string. Exemplo: 0011001 -> 3
*/
void ex07() {
    char *str = "111111110111010100111111000";
    int cont = 0;
    printf("%s",str);

    do {
        if(*(str++) == '1') cont++;
    } while(*str != '\0');
    printf("-> %d\n",cont);
}

/* Exercicio 08
* Escreva um programa que substitui as ocorrências de um caractere 0 em uma string por
* outro caractere 1.
*/
void ex08() {
    char str[] = "01010101001010";
    int i = 0;

    do {
        if(str[i] == '0') str[i] = '1';
    } while(str[i++] != '\0');
    printf("%s",str);
}

/* Exercicio 09
* Entre com um nome e imprima o nome somente se a primeira letra do nome for “a”
* (maiúscula ou minúscula).
*/
void ex09() {
    char str[30] = {'\0'};

    do {
        puts("Inserir um nome (CTRL+C exit)");
        scanf("%s",str);
        if(str[0] == 'a' || str[0] == 'A') printf("%s\n",str);
    } while(1);
}

/* Exercicio 10
*   Faça um programa que receba uma palavra e a imprima de trás-para-frente.
*/
void ex10() {
    char str[30] = {'\0'};
    char str_inv[30] = {'\0'};
    int i = 0, j = 0, n = 30 ;

    do {
        for( i = 0 ; i < n ; i++) str_inv[i] = '\0';
        puts("Inserir um nome (CTRL+C exit)");
        scanf("%s",str);
        for( i = (strlen(str) - 1), j = 0 ; i >= 0 ; i--, j++) {
            str_inv[j] = str[i];
        }
        printf("%s \n",str_inv);
    } while(1);
}

/* Exercicio 11
*   Faça um programa que receba do usuário uma string. O programa imprime a string sem
*   suas vogais.
*/
int isVogal(char c) {
    char vogal[] =  "aeiouAEIOU";
    int i = 0;
    for( i = 0 ; i < strlen(vogal); i++)
        if(vogal[i] == c) return 1;
    return 0;
}
void ex11() {
    char str[30] = {'\0'};
    int  i = 0;

    while(1) {
        printf(" String C#>_\b");
        gets(str);
        printf(" String tratada C#> ");
        for( i  = 0 ; str[i] != '\0' ; i++) {
            if(!isVogal(str[i]))
                printf("%c",str[i]);
        }
        puts("\n CTRL + C - para sair...");
    }
}

/* Exercicio 12
*   Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui
*   essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais
*   da palavra dada por esse caractere.
*/
int funcEX12(char *str, char key) {
    int cont = 0, i = 0;

    for( i = 0 ; i < strlen(str) ; i++) {
        if(isVogal(str[i])) {
            cont++;
            str[i] = key;
        }
    }
    return cont;
}
void ex12() {
    char str[] = "palavra";
    char key = 'z';
    printf("\n Numero de vogais existentes na string original = %d \
            \n String final = %s\n",funcEX12(str,key),str);
}

/* Exercicio 13
*   Ler uma frase e contar quantos caracteres são brancos. Lembre-se que uma frase é um
*   conjunto de caracteres (vetor).
*/
void ex13() {
    char str[100] = {'\0'};
    int i = 0, cont = 0;
    printf("Frase :_\b");
    gets(str);

    for( i = 0 ; i< strlen(str) ; i++) {
        if(isspace(str[i])) cont++;
    }
    printf("Espacos em branco = %d",cont);
}

/* Exercicio 14
*   Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII
*   de cada caractere da palavra. Imprima a string resultante.
*/
void ex14() {
    char str[50] = {'\0'};
    int i = 0;
    printf(" Escreva uma palavra (so sao aceite 50 caracteres por palavras)\n c#> _\b");
    scanf("%50[a-zA-Z0-9]%n",str,&i);
    str[i] = '\0';
    for(i = 0 ; i < strlen(str) ; i++) str[i] = str[i] + 1;
    printf("String final : %s",str);
}
/* Exercicio 15
*   Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula.
*   Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
*/
void ex15() {
    char str[50] = {'\0'};
    int i = 0;
    printf(" Escreva uma palavra:_\b");
    scanf("%s",str);
    for(i = 0 ; i < strlen(str) ; i++) {
        if(str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    printf("String final : %s",str);
}

/* Execicio 16
*   Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em
*   letras minúsculas
*/
void ex16() {
    char str[50] = {'\0'};
    int i = 0;
    printf(" Escreva uma palavra:_\b");
    scanf("%s",str);
    for(i = 0 ; i < strlen(str) ; i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    printf("String final : %s",str);
}

/* Execicio 17
*   Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
*   espaços em branco do vetor e depois escrever o vetor resultante.
*/
void ex17() {
    char str[50] = {'\0'};
    int i = 0, j = 0;
    printf(" Escreva uma palavra:_\b");
    gets(str);
    for(i = 0 ; i < strlen(str)-1 ; i++) {
        if(isspace(str[i])) {
            for(j = i ; j < strlen(str) ; j++) {
                str[j] = str[j+1];
            }
            i--;
        }
    }
    printf("String final :%s",str);
}

/* Exercicio 18
*   Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
*   uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
*/
void ex18() {
    char str[50] = {'\0'};
    char L1 = 0, L2 = 0;
    int i = 0;
    printf(" Escreva uma palavra:_\b");
    gets(str);
    printf(" Key a ser alterada:");
    scanf(" %c",&L1);
    printf(" Alterar pela a Key:");
    scanf(" %c",&L2);
    for(i = 0 ; i < strlen(str)-1 ; i++) {
        if(str[i] == L1) {
            str[i] = L2;
        }
    }
    printf("String final :%s",str);
}

/* Exercicio 19
*   Escreva um programa que leia a idade e o primeiro nome de várias pessoas. Seu programa
*   deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa
*   deve escrever o nome e a idade das pessoas mais jovens e mais velhas.
*/
void ex19() {
    char str[50][50], str_aux[50];
    int idade[50] = {0}, idade_aux = 0, menor_idade = INT_MAX, maior_idade = INT_MIN;
    int elem = 0;
    int i = 0, j = 0, n = 50;

    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            str[i][j] = 0;
        }
    }

    while(1) {
        printf("\n Pessoa N %d\n",elem+1);
        printf(" Nome: _\b");
        gets(str_aux);
        printf(" Idade: _\b");
        scanf(" %d",&idade_aux);
        scanf("%*c");//limpar o buffer teclado
        if(idade_aux < 0) {
            break;
        } else {
            strcpy(str[elem],str_aux);
            idade[elem] = idade_aux;
            elem++;
        }
    }

    for(i = 0 ; i < elem ; i++) {
        if(menor_idade > idade[i]) menor_idade = idade[i];
        if(maior_idade < idade[i]) maior_idade = idade[i];
    }

    printf("\n Os mais novos:\n");
    printf(" Idade:%d\n",menor_idade);
    for(i = 0 ; i < elem ; i++) {
        if(idade[i] == menor_idade) {
            printf(" Nome:%s\n",str[i]);
        }
    }

    printf("\n Os mais velhos:\n");
    printf(" Idade:%d\n",maior_idade);
    for(i = 0 ; i < elem ; i++) {
        if(idade[i] == maior_idade) {
            printf(" Nome:%s\n",str[i]);
        }
    }
}

/* Exercicio 20
*   Faça um programa que preencha um vetor com os modelos de cinco carros (exemplos de
*   modelos: Fusca, Gol, Vectra, etc.). Preencha outro vetor com o consumo desses carros,
*   isto é, quantos quilômetros cada um deles faz com um litro de combustível. Calcule e
*   mostre:
*   (a) O modelo de carro mais econômico;
*   (b) Quantos litros de combustível cada um dos carros cadastrados consomem para
*   percorrer uma distância de 1.000 quilômetros.
*/
void ex20(){


}


int main() {
    ex20();
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
    //printf("%d\n",ex05("Um nome muito grande que fode"));
    //ex04();
    //ex03();
    //ex02b();
    //ex02();
    //ex01();
    return 0;
}
