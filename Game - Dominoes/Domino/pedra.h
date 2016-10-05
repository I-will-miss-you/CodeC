/**
 *  @file pedra.h
 *  @brief
 *
 *
 *
 *  @author Eduardo Queirós 29147 (code36u4r60@hotmail.com ou 29147@ufp.edu.pt)
 *  @bug No known bugs.
 */

#ifndef PEDRA_H_INCLUDED
#define PEDRA_H_INCLUDED

#include <stdlib.h>

#include "ascii_art_pedra.h"
#include "util.h"


#define MAX_PEDRAS 28 /**< Numero maximo de pedras de Domino */
#define MAX_PINTAS 6 /**< Numero de maximo de pintas que pode conter cada lado da peça de domino */




typedef struct
{
    int key;
    int ladoA;
    int ladoB;
    int isPair;
    char *art;
} pedras;




int array_pedras();
void print_array(pedras *p , int max);
/** \brief Retorna ASCII ART
 *
 * \param i int - numero de pinta de um dos lados
 * \param j int - numero de pinta do lado oposto ao anterior
 * \return char*
 *
 */
char* artibui_ascii_art(int i, int j);

int main_teste_pedra();
#endif // PEDRA_H_INCLUDED
