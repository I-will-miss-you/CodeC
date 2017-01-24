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
void ex20() {

    int num_carros_max = 50, tam_string_max = 50;

    char carros[50][50], carro_aux[50] = {'\0'};

    int km_carro[50] = {0}, num_carros = 0, id_carro_mais_eco = 0;

    int i = 0, j = 0;

    for( i = 0 ; i < num_carros_max ; i++) {
        for( j = 0 ; i < tam_string_max ; j++) {
            carros[i][j] = 0;
        }
    }

    puts("Inserir marcas / modelos dos carros\n (escrever \"end\" para terminar a insercao)");
    for( i = 0 ; i < num_carros_max ; i++) {
        printf("Carro %d:_\b",i+1);
        scanf("%s",carro_aux);
        scanf("%*[^\n]");
        scanf("%*c");
        if(!strcmp("End", carro_aux) || !strcmp("end", carro_aux)) {
            break;
        } else {
            strcpy(carros[i],carro_aux);
            num_carros = i + 1;
        }
    }

    puts("Inserir o numero de km percorridos com 1 litros de combustivel");
    for( i = 0 ; i < num_carros ; i++) {
        printf("%s:",carros[i]);
        scanf("%d",&km_carro[i]);
        scanf("%*[^\n]");
        scanf("%*c");

        if(km_carro[id_carro_mais_eco] < km_carro[i]) id_carro_mais_eco = i;
    }

    system("cls");
    printf("\n Carro mais economico: %s -> %d\n",carros[id_carro_mais_eco],km_carro[id_carro_mais_eco]);
    puts("\n Consumos por cada 1000km");
    for( i = 0 ; i < num_carros ; i++) {
        printf(" %s -> %0.2f\n",carros[i],1000.0/km_carro[i]);
    }
}

/* Exercicio 21
*   Faça um programa que receba duas frases distintas e imprima de maneira invertida,
*   trocando as letras A por *.
*/
void ex21() {
    char frase1[250] = {'\0'}, frase2[250] = {'\0'};
    int i = 0, j = 0;

    puts("Inserir a primeira frase:");
    gets(frase1);

    puts("Inserir a segunda frase:");
    gets(frase2);

    for( i = 0 ; i < strlen(frase1) ; i++) {
        if(frase1[i] == 'A') frase1[i] = '*';
    }
    for( i = 0 ; i < strlen(frase2) ; i++) {
        if(frase2[i] == 'A') frase2[i] = '*';
    }

    puts("Resultado final...");
    for( i = strlen(frase1) - 1 ; i >= 0  ; i--) {
        printf("%c",frase1[i]);
    }
    puts("");

    for( i = strlen(frase2) - 1 ; i >= 0  ; i--) {
        printf("%c",frase2[i]);
    }
    puts("");
}

void ex21A() {
    char frases[2][250];
    int i = 0, j = 0;

    for( i = 0 ; i < 2 ; i++) {
        puts("Inserir a primeira frase:");
        gets(frases[i]);
    }


    for( i = 0 ; i < 2 ; i++) {
        for( j = 0 ; j < strlen(frases[i]) ; j++)
            if(frases[i][j] == 'A')
                frases[i][j] = '*';
    }

    puts("");
    puts("Resultado final...");
    for( i = 0 ; i < 2 ; i++) {
        for( j = strlen(frases[i]) - 1 ; j >= 0  ; j--) {
            printf("%c",frases[i][j]);
        }
        puts("");
    }
    puts("");

}


/* Exercicio 22
*   Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o
*   desconto para pagamento  vista é de 10% sobre o valor total, calcular o valor a ser
*   pago à vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor
*   a ser pago à vista.
*/
void ex22() {
    char produto[250] = {'\0'};
    float desc = 0.10, preco = 0.0;
    while(1) {
        puts("");
        system("cls");
        printf(" Nome do produto: _\b");
        scanf(" %s",produto);
        printf(" Preco: _\b");
        scanf(" %f",&preco);
        scanf("%*c");
        system("cls");

        puts("");
        printf(" Produto: %s \n",produto);
        printf(" Preco sem desc = %0.2f\n",preco);
        printf(" Desconto = %0.2f\n",preco * desc);
        printf(" Valor a pagar = %0.2f\n",preco - preco * desc );
        puts("");

        puts("Press enter to cont... ou CTRL + c to exit...");
        getchar();
    }
}


/* Exercicio 23
*   Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima
*   o segmento S[I..J].
*/
void ex23() {
    char str[250] = {'\0'};
    int ini = 0, fim = 0;
    puts("Inserir a frase:");
    gets(str);
    printf("Inicio = ");
    scanf(" %d",&ini);
    printf("Fim = ");
    scanf(" %d",&fim);
    puts("");
    for(ini = ini - 1 ; ini < fim ; ini++) {
        printf("%c",str[ini]);
    }
    puts("");
}


/* Exercicio 24
*   Escreva um programa que recebe do usuário uma string S, um caractere C, e uma
*   posição I e devolve o índice da primeira posição da string onde foi encontrado o caractere C.
*   A procura deve começar a partir da posição I.
*/
void ex24() {
    char str[50] = {'\0'};
    char ch = '\0';
    int i = 0;
    printf(" Inserir palavra: _\b");
    gets(str);
    printf(" Inserir caractere: _\b");
    scanf("%c%*[^\n]",&ch);
    scanf("%*c");

    for( i = 0 ; i < strlen(str) ; i++)
        if(str[i] == ch) printf(" id = %d\n",i+1);

}


/* Exercicio 25
*   Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem
*   alfabética. Dica: ‘a’ é menor do que ‘b’.
*/
void ex25() {
    char str1[50] = {'\0'};
    char str2[50] = {'\0'};
    char str1_aux[50] = {'\0'};
    char str2_aux[50] = {'\0'};
    int i = 0;

    printf("Inserir a primeira palavra: ");
    gets(str1);
    printf("Inserir a segunda palavra: ");
    gets(str2);

    // É nescessário converter os caracteres da string para minúscula pois a função strcmp
    // compara segundo a tabela de ASCII sem esta conversão, 'A' é diferente de 'a', vem antes...
    for(i = 0 ; i < strlen(str1) ; i++) str1_aux[i] = tolower(str1[i]);
    for(i = 0 ; i < strlen(str2) ; i++) str2_aux[i] = tolower(str2[i]);

    int flag = strcmp(str1_aux,str2_aux);

    if(flag == 0) printf("As palavras sao iguais...\n");
    else if(flag < 0) printf("%s vem antes de %s\n",str1,str2);
    else printf("%s vem antes de %s\n",str2,str1);
}


/* Exercicio 26
*   O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um
*   tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta
*   no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três
*   posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente
*   um programa que faça uso desse Código de César (3 posições), entre com uma string e
*   retorne a string codificada. Exemplo:
*   String: a ligeira raposa marrom saltou sobre o cachorro cansado
*   Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/
void ex26() {
    char str[255] = {'\0'};
    int i = 0;
    printf("String: ");
    gets(str);

    for(i = 0 ; i < strlen(str) ; i++) {
        if(isalpha(str[i])) {
            str[i] = toupper(str[i]);
            str[i] += 3;
        }
    }

    printf("Nova String: %s",str);
}

/* Exercicio 27
*   Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
*   que um palíndromo é uma palavra que tenha a propriedade de poder ser lida
*   tanto da direita para a esquerda como da esquerda para a direita.
*   Exemplo:
*   ovo
*   arara
*   Socorram-me, subi no ônibus em Marrocos.
*   Anotaram a data da maratona
*/
void ex27() {
    char str[255] = {'\0'};
    char str_aux[255] = {'\0'};
    int i = 0, j = 0, tam = 0;
    int palindromo = 1;

    printf("String: ");
    gets(str);

    //Tratar a string recebida, no final ficam so os caracteres "legiveis"
    for( i = 0 ; i < strlen(str) ; i++) {
        str[i] = tolower(str[i]);
        if(isalpha(str[i])) {
            str_aux[j++] = str[i];
        }
    }

    //validar se é palíndromo
    tam = strlen(str_aux) - 1;
    for( i = 0 ; i <= tam / 2 ; i++) {
        printf("%c %c= %c\n",str_aux[i],(str_aux[i] == str_aux[tam - i])?'=':'!',str_aux[tam - i]);
        if(str_aux[i] != str_aux[tam - i]) {
            palindromo = 0;
            printf("logo nao e palindromo... \n");
            break;
        }
    }
    if(palindromo) printf("%s e palindromo\n",str);
}

/* Exercicio 28
*   Construa um programa que leia duas strings fornecidas pelo usuário e verifique se a segunda
*   string lida esta contida no final da primeira, retornando o resultado da verificação.
*/
int exist_sub_str(char *str, char *sub_str) {
    int i = strlen(str) - strlen(sub_str), j = 0;

    for( i = i, j = 0 ; i < strlen(str) ; i++, j++) {
        if(str[i] != sub_str[j]) {
            return 0;
        }
    }
    return 1;
}
void ex28() {
    char str[255] = {'\0'};
    char sub_str[255] = {'\0'};

    printf("String:");
    gets(str);
    printf("Sub-String:");
    gets(sub_str);

    if(exist_sub_str(str,sub_str))
        printf("A sub-string e coincidente com os caracteres finais da string principal.");
    else
        printf("A sub-string nao e coincidente com os caracteres finais da string principal.");
}

/* Exercicio 29
*   Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
*   Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com
*   NULL.
*/
void ex29() {
    char str1[255] = "Ola mundo! ";
    char str2[50] = "Aqui faz frio... que fode!";
    int i = 0, n = 0, n_elem_str1 = 0;

    //Numero de caracteres a concatenar
    n = 14;

    //Concatenação
    n_elem_str1 = strlen(str1);
    for( i = 0 ; i < n ; i++)
        str1[n_elem_str1 + i] = str2[i];
    str1[n_elem_str1 + i] = '\0';
    printf("String final: %s",str1);

}

/* Exercicio 30
*   Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia B ocorre na
*   cadeia A.
*/
void ex30() {
    char strA[] = "ola mundokhgsola mundokugd olaJHG mundoidihdola mundoola mundoola mundolihdklHS.";
    char strB[] = "Ola mundo";
    char strA_lower[255] = {'\0'}, strB_lower[255] = {'\0'};
    int tam_strA = 0, tam_strB = 0;
    int i = 0, j = 0, k = 0, contador = 0;

    for( i = 0 ; i < strlen(strA) ; i++) strA_lower[i] = tolower(strA[i]);
    for( i = 0 ; i < strlen(strB) ; i++) strB_lower[i] = tolower(strB[i]);

    tam_strA = strlen(strA_lower);
    tam_strB = strlen(strB_lower);

    for(i = 0 ; i < tam_strA ; i++) {
        if(strA_lower[i] == strB_lower[0]) {
            for(j = 0, k = i; j < tam_strB ; j++, k++) {
                if(strB_lower[j] != strA_lower[k]) break;
            }
            if(j == tam_strB) contador++;
        }
    }
    printf("Contador = %d \n",contador);
}


/* Exercicio 31 (utilizei este exercicio para "brincar" um pouco dai a má organização)
*   Faça um programa que contenha um menu com as seguintes opções:
*   (a) Ler uma string S1 (tamanho máximo 20 caracteres);
*   (b) Imprimir o tamanho da string S1;
*   (c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o
*   resultado da comparação;
*   (d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
*   concatenação;
*   (e) Imprimir a string S1 de forma reversa;
*   (f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere
*   desse ser informado pelo usuário;
*   (g) Substituir a primeira ocorrˆencia do caractere C1 da string S1 pelo caractere C2. Os
*   caracteres C1 e C2 serão lidos pelo usuário;
*   (h) Verificar se uma string S2 ´e substring de S1. A string S2 deve ser informada pelo
*   usuário;
*   (i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de
*   qual posição deve ser criada a substring e qual é o tamanho da substring.
*/
void ex31() {
    char strA[255] = {'\0'};
    char strB[255] = {'\0'};
    int tam = 1;
    int i = 0, j = 0;

    //A
    while(tam) {
        printf("String (sem espacos): ");
        scanf("%s%n",strA,&tam);
        scanf("%*[^\n]");
        scanf("%*c");
        if(tam > 20) {
            printf("A string so pode ter ate 20 caracteres... \n");
        } else {
            printf("String valida...\n");
            tam = 0;
        }
    }
    puts("");
    //B
    printf("Tamanho da string: %d\n",strlen(strA));
    puts("");
    //C
    printf("String 2: ");
    gets(strB);
    if( strlen(strA) != strlen(strB)) {
        printf("String diferentes.\n");
    } else {
        for( i = 0 ; i < strlen(strA) ; i++) {
            if(strA[i] != strB[i]) {
                printf("String diferentes.\n");
                break;
            }
        }
        if(i == strlen(strA)) printf("String iguais.\n");
    }
    puts("");

    //D
    char strC[255] = {'\0'};
    strcat(strC,strA);
    strcat(strC,strB);
    printf("%s",strC);
    puts("");

    //E
    for( i = strlen(strA)-1 ; i >= 0 ; i--) printf("%c",strA[i]);
    puts("\n");

    //F
    char ch = '\0';
    int contador = 0;
    printf("Caracter a pesquesiar:");
    _cscanf("%c",&ch);
    for( i = 0 ; i < strlen(strA) ; i++) {
        if(strA[i] == ch) contador++;
    }
    printf("\nExiste %d caracteres '%c' na string %s.\n",contador,ch,strA);
    puts("");

    //G
    char c1 = '\0';
    char c2 = '\0';
    printf("Trocar de caracter (antigo novo):");
    _cscanf("%c %c",&c1,&c2);
    for( i = 0 ; i < strlen(strA) ; i++) {
        if(strA[i] == c1) strA[i] = c2;
    }
    printf("\nNova string: %s.\n",strA);
    puts("");

    //H
    char subString[25] = {'\0'};
    printf("Sub String:");
    gets(subString);

    for( i = 0 ; i < strlen(strA) ; i++) {
        if(strA[i] == subString[0]) {
            for(j = 0 ; j < strlen(subString) ; j++) {
                if(subString[j] != strA[i+j]) break;
            }
            if(j == strlen(subString)) {
                printf("A sub string '%s' e uma sub string de '%s'.",subString,strA);
                break;
            } else {
                printf("A sub string '%s' nao e uma sub string de '%s'.",subString,strA);
            }
        }
    }
    puts("\n");

    //I
    int p = 0;
    char sub[255] = {'\0'};
    printf("Posicao de inicio:");
    scanf("%d",&p);
    strcat(sub,&strA[p]);
    printf("Sun string: %s.",sub);
    puts("");
}

/* Exercicio 32
*   Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano para
*   3 variáveis inteiras. Antes disso, verifique se as barras estão no lugar certo, e se DD, MM
*   e AAAA são numéricos.
*/
void ex32() {
    char data[255] = {'\0'};
    int dia = 0, mes = 0, ano = 0;
    int tam = 0, flag = 0, i = 0;
    while(!tam) {
        system("cls");
        printf("Data (DD/MM/AAAA):");
        scanf("%s%n",data,&tam);

        if(tam != 10) {
            printf("Data invalida...\n");
            tam = 0;
            continue;
        }
    }

    for( i = 0 ; i < 10 ; i++) {
        if(i == 2 || i == 5) {
            if(data[i] != '/') {
                flag = 0;
                break;
            }
        } else {
            if(data[i] < '0' || data[i] > '9') {
                flag = 0;
                break;
            }
        }
        flag = 1;
    }


    if(flag) {
        dia = atoi(strtok(data,"/"));
        mes = atoi(strtok(NULL,"/"));
        ano = atoi(strtok(NULL,"/"));
        printf("%d/%d/%d \n",dia,mes,ano);
    } else {
        printf("Data invalida");
    }


}

/* Exercicio 33
*   Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma de
*   5 alunos. O programa deve solicitar ao usuário os nomes do aluno, sempre perguntando
*   se ele deseja inserir mais um nome na lista. Uma vez lidos todos os alunos, o usuário
*   irá indicar um nome que ele deseja verificar se está presente na lista, onde o programa
*   deve procurar pelo nome (ou parte deste nome) e se encontrar deve exibir na tela o nome
*   completo e o índice do vetor onde está guardado este nome.
*/
void ex33() {
    char str_matrix[255][255], str_cont[10] = {'\0'}, sub_str[255] = {'\0'};
    int i = 0, j = 0, cont = 1;

    for( i = 0 ; i < 255 ; i++)
        for( j = 0 ; j < 255 ; j++)
            str_matrix[i][j] = '\0';

    //inserir nomes
    i = 0;
    do {
        system("cls");
        printf("Nome:");
        gets(str_matrix[i]);
        printf("Deseja inserir um novo nome ? Se sim escreva \"sim\": ");
        gets(str_cont);
        for( j = 0 ; j < strlen(str_cont) ; j++) {
            str_cont[j] = tolower(str_cont[j]);
        }
        if(!strcmp(str_cont,"sim")) {
            i++;
        } else {
            cont = 0;
        }
    } while(cont);

    //pesquisa
    do {
        system("cls");
        printf("Pesquisar pelo nome: ");
        gets(sub_str);
        i = 0;
        do {
            for( j = 0 ; j < strlen(sub_str) ; j++) {
                if(str_matrix[i][j] != sub_str[j]) break;
            }
            if(j == strlen(sub_str)) printf("%s \n",str_matrix[i]);
        } while(str_matrix[++i][0] != '\0');
        printf("Deseja continuar a realizar pesquisas? Se sim escreva \"sim\": ");

        gets(str_cont);
        for( j = 0 ; j < strlen(str_cont) ; j++) {
            str_cont[j] = tolower(str_cont[j]);
        }

        if(!strcmp(str_cont,"sim")) cont = 1;
        else cont = 0;

    } while(cont);

}

/* Exercicio 34
*   Faça um programa que encontre o conjunto de 5 dígitos consecutivos na sequência
*   abaixo que gere o maior produto:
*   73167176531330624919225119674426574742355349194934
*   96983520312774506326239578318016984801869478851843
*   85861560789112949495459501737958331952853208805511
*   12540698747158523863050715693290963295227443043557
*   66896648950445244523161731856403098711121722383113
*   62229893423380308135336276614282806444486645238749
*   30358907296290491560440772390713810515859307960866
*   70172427121883998797908792274921901699720888093776
*   65727333001053367881220235421809751254540594752243
*   52584907711670556013604839586446706324415722155397
*   53697817977846174064955149290862569321978468622482
*   83972241375657056057490261407972968652414535100474
*   82166370484403199890008895243450658541227588666881
*   16427171479924442928230863465674813919123162824586
*   17866458359124566529476545682848912883142607690042
*   24219022671055626321111109370544217506941658960408
*   07198403850962455444362981230987879927244284909188
*   84580156166097919133875499200524063689912560717606
*   05886116467109405077541002256983155200055935729725
*   71636269561882670428252483600823257530420752963450
*/
void ex34() {
    char str[] =
"73167176531330624919225119674426574742355349194934\
96983520312774506326239578318016984801869478851843\
85861560789112949495459501737958331952853208805511\
12540698747158523863050715693290963295227443043557\
66896648950445244523161731856403098711121722383113\
62229893423380308135336276614282806444486645238749\
30358907296290491560440772390713810515859307960866\
70172427121883998797908792274921901699720888093776\
65727333001053367881220235421809751254540594752243\
52584907711670556013604839586446706324415722155397\
53697817977846174064955149290862569321978468622482\
83972241375657056057490261407972968652414535100474\
82166370484403199890008895243450658541227588666881\
16427171479924442928230863465674813919123162824586\
17866458359124566529476545682848912883142607690042\
24219022671055626321111109370544217506941658960408\
07198403850962455444362981230987879927244284909188\
84580156166097919133875499200524063689912560717606\
05886116467109405077541002256983155200055935729725\
71636269561882670428252483600823257530420752963450";
    int i = 0, j = 0, n = 5, produto = 1, maior_produto = 0, id_maior_produto = 0 , num = 0;
    char num_ch= '\0';
    do {
        for( j = 0 ; j < n - 1 ; j++) {
            if(str[i+j] >= str[i + j + 1]) break;
        }
        if( j == n-1) {
            produto = 1;
            for(j = 0 ; j < n ; j++) {
                printf("%c",str[i+j]);
                num = str[i+j] - '0';
                produto *= num;
            }
            printf(" (*) = %d \n",produto);
            if(maior_produto < produto) {
                maior_produto = produto;
                id_maior_produto = i;
            }
            puts("");
        }
    } while(str[++i] != '\0');

    printf("Maior produto obitido = %d\n",maior_produto);
    printf("Obitida atraves da sequencia: ");
     for(j = 0 ; j < n ; j++) {
         printf("%c",str[id_maior_produto + j]);
     }
     puts("");
}


int main() {
    ex34();
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
    //ex21A();
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
    //printf("%d\n",ex05("Um nome muito grande que fode"));
    //ex04();
    //ex03();
    //ex02b();
    //ex02();
    //ex01();
    return 0;
}
