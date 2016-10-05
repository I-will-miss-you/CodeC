/**
 *  @file pedra.c
 *  @brief
 *
 *
 *
 *  @author Eduardo Queirós 29147 (code36u4r60@hotmail.com ou 29147@ufp.edu.pt)
 *  @bug No known bugs.
 */
#include "pedra.h"

pedras pedra[MAX_PEDRAS];


int array_pedras()
{
    int i, j, id = 0;
    for( i = 0 ; i <= MAX_PINTAS ; i++)
    {
        for( j = i ; j <= MAX_PINTAS ; j++)
        {
            pedra[id].key = id;
            pedra[id].ladoA = i;
            pedra[id].ladoB = j;
            pedra[id].isPair = (i == j)?true:false;
            pedra[id].art = artibui_ascii_art(i,j);
            id++;
        }
    }
    return 0;
}

/** \brief imprime Array de "Pedras"
 *
 * \param p pedras*
 * \param max int
 * \return void
 *
 */
void print_array(pedras *p , int max)
{
    int i = 0;
    for(i = 0; i < max ; i++)
    {

        printf("%s\n",p[i].art);
        printf("Key   = %d\n",p[i].key);
        printf("ladoA = %d\n",p[i].ladoA);
        printf("ladoB = %d\n",p[i].ladoB);
        printf("isPar = %d\n",p[i].isPair);

    }
}

int main_teste_pedra()
{

    array_pedras();
    print_array(pedra,MAX_PEDRAS);

    return 0;
}


/** \brief Retorna ASCII ART
 *
 * \param i int - numero de pinta de um dos lados
 * \param j int - numero de pinta do lado oposto ao anterior
 * \return char*
 *
 */
char* artibui_ascii_art(int i, int j)
{
    int aux;
    if( j < i)
    {
        aux = i;    //depois criar uma função swap
        i = j;
        j = aux;
    }
    char *p;
    switch(i)
    {
    case 0:
        switch(j)
        {
        case 0:
            p = ascii_p00();
            break;
        case 1:
            p = ascii_p01();
            break;
        case 2:
            p = ascii_p02();
            break;
        case 3:
            p = ascii_p03();
            break;
        case 4:
            p = ascii_p04();
            break;
        case 5:
            p = ascii_p05();
            break;
        case 6:
            p = ascii_p06();
            break;
        }
        break;
    case 1:
        switch(j)
        {
        case 1:
            p = ascii_p11();
            break;
        case 2:
            p = ascii_p12();
            break;
        case 3:
            p = ascii_p13();
            break;
        case 4:
            p = ascii_p14();
            break;
        case 5:
            p = ascii_p15();
            break;
        case 6:
            p = ascii_p16();
            break;
        }
        break;
    case 2:
        switch(j)
        {
        case 2:
            p = ascii_p22();
            break;
        case 3:
            p = ascii_p23();
            break;
        case 4:
            p = ascii_p24();
            break;
        case 5:
            p = ascii_p25();
            break;
        case 6:
            p = ascii_p26();
            break;
        }
        break;
    case 3:
        switch(j)
        {
        case 3:
            p = ascii_p33();
            break;
        case 4:
            p = ascii_p34();
            break;
        case 5:
            p = ascii_p35();
            break;
        case 6:
            p = ascii_p36();
            break;
        }
        break;
    case 4:
        switch(j)
        {
        case 4:
            p = ascii_p44();
            break;
        case 5:
            p = ascii_p45();
            break;
        case 6:
            p = ascii_p46();
            break;
        }
        break;
    case 5:
        switch(j)
        {
        case 5:
            p = ascii_p55();
            break;
        case 6:
            p = ascii_p56();
            break;
        }
        break;
    case 6:
        p = ascii_p66();
        break;
    }
    return p;
}
