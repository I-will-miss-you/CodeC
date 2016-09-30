#include "main.h"

/** Exercicio 1
*   Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
*   O programa deve executar os seguintes passos:
*   (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
*   (b) Armazene em uma variável inteira (simples) a soma entre os valores das posiç˜oes
*       A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
*   (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
*   (d) Mostre na tela cada valor do vetor A, um em cada linha.
*/
void ex01()
{
    int a[6] = {1, 0, 5, -2, -5, 7}, i = 0, soma = 0;
    for( i = 0 ; i < 6 ; i++) printf(" a[%d] -> %2d \n",i,a[i]);
    puts("");
    soma = a[0] + a[1] + a[5];
    printf(" a[0] + a[1] + a[5] = %d \n",soma);
    puts("");
    a[4] = 100;
    for( i = 0 ; i < 6 ; i++) printf(" a[%d] -> %2d \n",i,a[i]);
}

/** Exercicio 02
*   Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
void ex02()
{
    int a[6] = {0}, i = 0;

    for( i = 0 ; i < 6 ; i++)
    {
        printf(" %d -> _\b",i+1);
        scanf(" %d",&a[i]);
    }
    puts("");
    for( i = 0 ; i < 6 ; i++) printf(" a[%d] -> %2d \n",i,a[i]);
}

/** Exercicio 03
    Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
    componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
    10 elementos cada. Imprimir todos os conjuntos.
*/
void ex03()
{
    float num[10] = {0.0}, mult[10] = {0.0};
    int i, tam = 10;

    for( i = 0 ; i < tam ; i++)
    {
        printf(" %d -> _\b",i+1);
        scanf(" %f",&num[i]);
        mult[i] = num[i] * num[i];
    }

    puts("");
    for( i = 0 ; i < tam ; i++)
    {
        printf(" v1[%d] = %.2f \n",i,num[i]);
    }

    puts("");
    for( i = 0 ; i < tam ; i++)
    {
        printf(" v2[%d] = %.2f \n",i,mult[i]);
    }
}

/** Exercicio 04
*   Faça um programa que leia um vetor de 8 posiç˜oes e, em seguida, leia também dois valores
*   X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
*   deverá escrever a soma dos valores encontrados nas respectivas posiç˜oes X e Y .
*/
void ex04()
{
    int v[8]= {0}, x = 0, y = 0, i = 0, soma = 0;
    printf(" Insira 8 valores...\n");
    for( i = 0 ; i < 8 ; i++)
    {
        printf(" %d -> _\b",i+1);
        scanf(" %d",&v[i]);
    }
    printf(" valor de x = _\b");
    scanf(" %d",&x);
    printf(" valor de y = _\b");
    scanf(" %d",&y);
    soma = v[x-1]+ v[y-1];
    printf(" Soma de v[%d] + v[%d] = %d + %d = %d \n",x,y,v[x-1],v[y-1],soma);
}

/** Execicio 05
*   Leia um vetor de 10 posiç˜oes. Contar e escrever quantos valores pares ele possui.
*/
void ex05()
{
    int v[10] = {1,20,33,400,555,6000,7777,800,90,10}, i = 0, qtPares = 0;

    for( i = 0 ; i < 10 ; i++)
    {
        if(v[i] % 2 == 0) qtPares++;
    }
    printf("\n #> Foram encontrados %d numero pares.\n",qtPares);
}

/** Exercicio 06
*   Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
*   ser impresso o maior e o menor elemento do vetor.
*/
void ex06()
{
    int v[10] = {0}, i = 0, maior_valor = INT_MIN, menor_valor = INT_MAX;

    for( i = 0 ; i < 10 ; i++)
    {
        printf(" Valor %d -> _\b",i+1);
        scanf(" %d",&v[i]);
        if(maior_valor < v[i]) maior_valor = v[i];
        if(menor_valor > v[i]) menor_valor = v[i];
    }
    printf("\n #> Maior valor = %d\n #> Menor valor = %d\n",maior_valor,menor_valor);
}

/** Exercicio 07
*   Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
*   Imprima o vetor, o maior elemento e a posiç˜ao que ele se encontra.
*/
void ex07()
{
    int v[10] = {}, i = 0, maior_valor = INT_MIN, posicao_maior_valor  = -1;

    for ( i = 0 ; i < 10 ; i++)
    {
        printf(" Valor %d -> _\b",i+1);
        scanf(" %d",&v[i]);
        if(maior_valor < v[i])
        {
            maior_valor = v[i];
            posicao_maior_valor = i;
        }
    }

    for( i = 0 ; i < 10 ; i++)
    {
        printf("\n V[%2d] = %d",i+1,v[i]);
        if(posicao_maior_valor == i) printf(" <- Maior valor");
    }
}

/** Exercicio 08
* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
* na ordem inversa.
*/
void ex08()
{
    int v[6] = {}, v_inv[6] = {}, i = 0;
    int n = 6;
    for( i = 0 ; i < n ; i++)
    {
        printf(" Valor %d -> _\b",i+1);
        scanf(" %d",&v[i]);
        //v_inv[n-i] = v[i];
    }

    for( i = 0 ; i < n  ; i++)
    {
        v_inv[n-i-1] = v[i];
    }

    for( i = 0 ; i < n ; i++)
    {
        printf(" V_inv[%2d] = %d\n",i+1,v_inv[i]);
    }
}

/** Exercicio 09
*   Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores
*   lidos na ordem inversa.
*/
void ex09()
{
    int v[6] = {}, i = 0;
    puts(" Insira valores inteiros pares...");
    for( i = 0 ; i < 6 ; i++ )
    {
        printf(" Valor %d -> _\b",i+1);
        scanf(" %d",&v[i]);
        if(v[i] % 2 != 0)
        {
            printf(" O numero tem de ser par...\n");
            i--;
        }
    }
    puts("\n Impresao inversa:");
    for( i = 5 ; i >= 0 ; i-- )
        printf(" Valor %d -> %d\n",i+1,v[i]);
}

/** Exercicio 10
*   Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
*   e imprima a média geral.
*/
void ex10()
{
    float notas[15] = {}, media = 0, soma = 0;
    int i = 0;
    for( i = 0 ; i < 15 ; i++)
    {
        printf(" Nota do aluno %2d -> _\b",i+1);
        scanf(" %f",&notas[i]);
    }
    for( i = 0 ; i < 15 ; i++) soma+= notas[i];
    media = soma / 15;

    printf(" Media = %.2f",media);
}

/** Exercicio 11
*   Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
*   quantidade de números negativos e a soma dos números positivos desse vetor.
*/
void ex11()
{
    int v[10] = {}, quatidade_negativos = 0, soma_positivos = 0, i = 0;
    for( i = 0 ; i < 10 ; i++)
    {
        printf(" Valor %2d = _\b",i+1);
        scanf("%d",&v[i]);
        if(v[i] < 0) quatidade_negativos++;
        if(v[i] > 0) soma_positivos += v[i];
    }

    printf(" Quantidade de valores negativos = %d \n",quatidade_negativos);
    printf(" Soma dos positivos = %d \n",soma_positivos);
}

/** Exercicio 12
*   Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
*   juntamente com o maior, o menor e a média dos valores.
*/
void ex12()
{
    int v[5] = {}, maior = INT_MIN, menor = INT_MAX, soma = 0, i = 0;

    for( i = 0 ; i < 5 ; i++)
    {
        printf(" v[%d] = _\b",i);
        scanf("%d",&v[i]);
        if(maior < v[i]) maior = v[i];
        if(menor > v[i]) menor = v[i];
        soma += v[i];
    }
    puts("\n Valores inseridos:");
    for( i = 0 ; i < 5 ; i++)
        printf(" v[%d] = %d \n",i,v[i]);
    printf(" Maior valor = %d \n",maior);
    printf(" Menor valor = %d \n",menor);
    printf(" Media = %0.2f \n",soma / 5.0);
}

/** Exercicio 13
*   Fazer um programa para ler 5 valores e, em seguida, mostrar a posiç˜ao onde se encontram
*   o maior e o menor valor.
*/
void ex13()
{
    int v[5] = {}, maior[2] = {0,INT_MIN}, menor[2] = {0,INT_MAX}, i = 0;

    for( i = 0 ; i < 5 ; i++)
    {
        printf(" v[%d] = _\b",i);
        scanf("%d",&v[i]);
        if(maior[1] < v[i])
        {
            maior[0] = i;
            maior[1] = v[i];
        }
        if(menor[1] > v[i])
        {
            menor[0] = i;
            menor[1] = v[i];
        }
    }
    puts("");
    printf(" Maior valor v[%d] = %d \n",maior[0],maior[1]);
    printf(" Menor valor v[%d] = %d \n",menor[0],menor[1]);
}

/** Exercicio 14
*   Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais
*   e os escreva na tela.
*/
void ex14()
{
    const int n = 10;
    int v[10] = {1,7,4,1,7,1,6,7,8,5}, v_Rep[5] = {}, i = 0, j = 0, k = 0,l = 0;

    for( i = 0 ; i < n-1 ; i++ )
    {
        for( j = i + 1 ; j < n ; j++ )
        {
            if(v[i] == v[j])
            {
                for( k = 0 ; v_Rep[k] != 0 ; k++)
                {
                    if(v_Rep[k] == v[i]) break;
                }
                if( k == l)
                {
                    v_Rep[l] = v[i];
                    l++;
                }
            }
        }
    }
    printf(" Valores repetidos :\n");
    for( i = 0; v_Rep[i] != 0; i++) printf(" %d -> %d \n",i,v_Rep[i]);
}

/** Exercicio 15
*   Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos
*   repetidos.
*/
void ex15()
{
    int vetor[20] = {1,2,7,8,9,3,2,2,3,4,2,2,3,4,5,2,2,3,4,5},n = 20, n_elem = n, i = 0, j = 0, k = 0;

    for( i = 0 ; i < n_elem ; i++ )
    {
        for( j = n-1 ; j > i ; j--)
        {

            if(vetor[i] == vetor[j])
            {
                n_elem--;
                for(k = j ; k < n-1 ; k++)
                {
                    vetor[k] = vetor[k+1];
                }
                vetor[n-1] = 0;
            }
        }
    }
    for( i = 0 ; i < n_elem ; i++) printf(" v[%d] = %d \n",i,vetor[i]);
}

/** Exercicio 16
*   Faça um programa que leia um vetor de 5 posiç˜oes para números reais e, depois, um
*   código inteiro.
*   -> Se o código for zero, finalize o programa;
*   -> Se for 1, mostre o vetor na ordem direta;
*   -> se for 2, mostre o vetor na ordem inversa.
*   -> Caso, o código for diferente de 1 e 2 escreva uma mensagem informando que o código é inválido.
*/
void ex16()
{
    float v[]= {1.2, 2.5, 4.5, 9.5, 7.5};
    int op = -1, n = 5,i = 0;

    while(1)
    {
        system("cls");
        puts(" Escolha uma opcao:");
        puts(" 0 - Sair");
        puts(" 1 - Imprime pela ordem de entrada");
        puts(" 2 - Imprime pela ordem inversa de entrada");
        printf(" $>_\b");
        scanf(" %d",&op);
        getchar();
        switch(op)
        {
        case 0:
            exit(0);
            break;
        case 1:
            for( i = 0 ; i < n ; i++) printf(" v[%d] = %.2f \n",i,v[i]);
            printf(" Press any ENTER to continue...");
            getchar();
            break;
        case 2:
            for( i = n-1 ; i >=0  ; i--) printf(" v[%d] = %.2f \n",i,v[i]);
            printf(" Press any ENTER to continue...");
            getchar();
            break;
        default:
            puts(" Codigo invalido...");
            printf(" Press any ENTER to continue...");
            getchar();
        }
    }
}

/** Exercicio 17
*   Leia um vetor de 10 posiç˜oes e atribua valor 0 para todos os elementos que possuírem
*   valores negativos.
*/
void ex17()
{
    int v[10] = {-1,5,-4,8,-7,-8,45,1362,-84,56}, i = 0, n = 10;

    for( i = 0 ; i < n ; i++)
    {
        if(v[i] < 0) v[i] = 0;
    }

    for( i = 0 ; i < n ; i++) printf(" v[%d] = %d \n",i,v[i]);
}

/** Exercicio 18
*   Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
*   múltiplos de um número inteiro x num vetor e mostre-os na tela.
*/
void ex18()
{
    int v[10] = {10,20,8,15,17,45,1362,84,56,51}, i = 0, n = 10, contador = 0, num = 0;

    printf(" Valor = _\b");
    scanf(" %d",&num);
    printf(" Multiplos de %d : \n",num);
    for( i = 0 ; i < n ; i++)
    {
        if(v[i] % num == 0)
        {
            printf(" %d \n",v[i]);
            contador++;
        }
    }
    printf(" Numero de multiplos = %d \n",contador);
}

/** Execicio 19
*   Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5 * i)%(i+1), sendo
*   i a posiç˜ao do elemento no vetor. Em seguida imprima o vetor na tela.
*/
void ex19()
{
    int v[50] = {}, i = 0;

    for( i = 0 ; i < 50 ; i++)
    {
        v[i] = (i + 5 * i)%(i + 1);
    }


    for( i = 0 ; i < 50 ; i++)
    {
        printf(" v[%2d] = %d\n",i,v[i]);
    }
}

/** Exercicio 20
*  Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um
*  vetor com 10 posições. Preencha um segundo vetor apenas com os números ímpares
*  do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.
*/
void ex20()
{
    int v[10] = {}, v_imp[10] = {}, num = 0, i = 0, j = 0;
    puts(" Introduzir numeros inteiros no intervalo [0,50]:");
    for( i = 0 ; i < 10 ; i++)
    {
        printf("v[%d] $>_\b",i);
        scanf("%d",&num);
        if(num < 0 || num > 50)
        {
            printf(" Valor invalido... \n");
            i--;
        }
        else
        {
            v[i] = num;
        }
    }

    for( i = 0 ; i < 10 ; i++)
    {
        if(v[i] % 2 != 0)
            v_imp[j++] = v[i];
    }

    puts("\n Vetor inteiro:");
    for( i = 0 ; i < 10 ; i+=2)
    {
        printf(" v[%d] = %d : v[%d] = %d \n",i,v[i],i+1,v[i+1]);
    }

    puts("\n Vetor de impares:");
    for( i = 0 ; i < j  ; i+=2)
    {
        printf(" Impares[%d] = %d : Impares[%d] = %d \n",i,v_imp[i],i+1,v_imp[i+1]);
    }
}

/** Exercicio 21
*   Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros
*   cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
*   do vetor C.
*/
void ex21()
{
    int vA[10] = {1,20,300,4000,50000,600000,70000,8000,900,10}, vB[10] = {15,30,60,120,240,480,960,1920,3840,7680}, vC[10] = {};
    int i = 0;

    for( i = 0 ; i < 10 ; i++)
    {
        vC[i] = vA[i] - vB[i];
    }

    for( i = 0 ; i < 10 ; i++)
    {
        printf(" v[%d] = %d \n",i,vC[i]);
    }
}

/** Exercicio 22
*   Faça um programa que leia dois vetores de 10 posiç˜oes e calcule outro vetor contendo,
*   nas posições pares os valores do primeiro e nas posiç˜oes impares os valores do segundo.
*/
void ex22()
{
    int vA[10] = {3,6,9,12,15,18,21,24,27,30}, vB[10] = {7,14,21,28,35,42,49,56,63,70}, vC[10] = {};
    int i = 0;

    for( i = 0 ; i < 10 ; i++)
    {
        if( i % 2 == 0)
        {
            vC[i] = vA[i];
        }
        else
        {
            vC[i] = vB[i];
        }
    }

    for( i = 0 ; i < 10 ; i++)
    {
        printf(" v[%d] = %d \n",i,vC[i]);
    }
}

/** Exercicio 23
*   Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto
*   escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o
*   produto escalar, sendo que o produto escalar é dado por: x1 * y1 + x2 * y2 + ... + xn * yn.
*/
void ex23()
{
    float v1[]= {1.5, 1.6, 1.8, 1.4, 1.8}, v2[]= {3.5, 5.5, 0.5, 12.6, 11.85}, prod_escalar = 0;
    int n = 5, i = 0;

    for( i = 0 ; i < n ; i++)
    {
        prod_escalar += v1[i] * v2[i];
    }

    puts("\n Conjunto 1:");
    for( i = 0 ; i < n ; i++)
    {
        printf(" v1[%d] = %0.2f \n",i,v1[i]);
    }
    puts("\n Conjunto 2:");
    for( i = 0 ; i < n ; i++)
    {
        printf(" v2[%d] = %0.2f \n",i,v2[i]);
    }
    printf("\n Produto escalar = %0.2f \n",prod_escalar);
}

/** Exercicio 24
*   Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o
*   número do aluno e o segundo representando a sua altura em metros. Encontre o aluno
*   mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente
*   com suas alturas.
*/
void ex24()
{
    int n_Aluno[] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    float altura[] = {1.50, 1.10, 2.0, 1.20, 1.40, 2.05, 1.25, 1.73, 1.75, 1.78};
    int ind_maior = 0, ind_menor = 0;
    int i = 0, n = 10;

    for( i = 1 ; i < n ; i++ )
    {
        if(altura[ind_maior] < altura[i])
        {
            ind_maior = i;
        }
        if(altura[ind_menor] > altura[i])
        {
            ind_menor = i;
        }
    }
    printf(" O aluno numero %d com a altura %.2f e o mais alto \n",n_Aluno[ind_maior], altura[ind_maior]);
    printf(" O aluno numero %d com a altura %.2f e o mais baixo \n",n_Aluno[ind_menor], altura[ind_menor]);
}

/** Exercicio 25
*   Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais
*   que n˜ao s˜ao múltiplos de 7 ou que terminam com 7.
*/
void ex25()
{
    int v[100] = {}, n = 100, i = 0, j = 0;

    for( i = 0 ; i <= n ; i++)
    {
        if(i % 7 == 0 || i % 10 == 7)
        {
            n++;
        }
        else
        {
            v[j] = i;
            j++;
        }

    }

    for( i = 0 ; i < 100 ; i++)
    {
        printf(" v[%2d] = %d \n",i,v[i]);
    }
}

/** Exercicio 26
*   Faça um programa que calcule o desvio padr˜ao de um vetor v contendo n = 10 números,
*   onde m é a media do vetor.
*
*   Desvio Padrão = sqrt( (1 / (n-1)) * Somatorio(1->n)(v[i] - m)^2 )
*/
void ex26()
{

    int v[10] = {22, 24, 26, 23, 21, 22, 20, 24, 28, 30}, n = 10, soma = 0, i = 0;
    double m = 0, somatorio = 0, desvio_padrao = 0;

    for( i = 0 ; i < n ; i++) soma +=  v[i];
    m = soma / n;
    printf(" Valor medio do vetor = %0.2f \n",m);

    for( i = 0 ; i < n ; i++ ) somatorio += pow(v[i] - m, 2);
    printf(" Valor somatorio = %0.2f \n",somatorio);

    desvio_padrao = sqrt( somatorio / ( n - 1) );

    printf(" O desvio padrao = %.2f \n",desvio_padrao);
}

/** Exercicio 27
*   Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos
*   que s˜ao primos e suas respectivas posições no vetor.
*/
void ex27()
{
    int n = 10;
    int v[10] = {123, 15, 54, 564, 6545, 5, 1, 2, 10, 11};
    int i = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(isprime(v[i]) == 1) printf("%d \n",v[i]);
    }
}

/** Exercicio 28/b //pequeno erro - fiz para primos e não primos
*   Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
*   Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada
*   um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos s˜ao
*   utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
*/
void ex28b()
{
    int n = 10;
    int v[10]= {11,7,3,4,5,-6,7344,82,943,10};
    int v1[10]= {}, v2[10]= {}, i =0, p1 = 0, p2 = 0, prime = 0;

    for( i = 0; i < n ; i++)
    {
        prime = isprime(v[i]);
        if(prime == 1)
        {
            v1[p1++] = v[i];
        }
        else if(prime == 0)
        {
            v2[p2++] = v[i];
        }
    }
    puts("Prime:");
    for(i = 0; i < p1 ; i++)
    {
        printf("%d \n",v1[i]);
    }
    puts(" ");
    puts("Not Prime:");
    for(i = 0; i < p2 ; i++)
    {
        printf("%d \n",v2[i]);
    }
}

/** Exercicio 28
*   Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
*   Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada
*   um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos s˜ao
*   utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
*/
void ex28()
{
    int n = 10;
    int v[10]= {11,7,3,4,5,-6,7344,82,943,10};
    int v1[10]= {}, v2[10]= {}, i =0, p1 = 0, p2 = 0;

    for( i = 0; i < n ; i++)
    {
        if(isodd(v[i]))
        {
            v1[p1++] = v[i];
        }
        else if(iseven(v[i]))
        {
            v2[p2++] = v[i];
        }
    }

    puts("Odd:");
    for(i = 0; i < p1 ; i++)
    {
        printf("%d \n",v1[i]);
    }
    puts(" ");
    puts("Even:");
    for(i = 0; i < p2 ; i++)
    {
        printf("%d \n",v2[i]);
    }

}


int main()
{
    ex28();
    //ex28b();
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
    //ex01();
    return 0;
}
