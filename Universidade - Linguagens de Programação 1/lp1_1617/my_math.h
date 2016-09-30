#ifndef MY_MATH_H_INCLUDED
#define MY_MATH_H_INCLUDED

/// Bibliotecas que já vêm com o compilador de C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>




/** Multiplication of integer values
 * \brief The multiplication to be performed by successive additions.
 *
 * \param a int
 * \param b int
 * \return long
 *
 */
long mult_int_values(int a, int b);

/** \brief Calcular a media do N valores de entrada
 *
 * \return float
 *
 */
float func_media();



/**< Função Main para teste */
/** \brief main teste function
 *
 * \param argc int
 * \param argv[] char*
 * \return int
 *
 */
int teste_main_my_math();
#endif // MY_MATH_H_INCLUDED
