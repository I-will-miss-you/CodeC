#ifndef ART_ASCII_H_INCLUDED
#define ART_ASCII_H_INCLUDED

/// Bibliotecas que já vêm com o compilador de C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief main teste function
 *
 * \return int
 *
 */
int teste_main_art_ascii_teste();

/** \brief print 'n' ascii_art square's
 *
 * \param n int - value must be positive.
 *
 * \return char - if (n == 0) return asccicode 223;
 *                if (n > 0) return asccicode 223 and print n square's;
 *
 */
char ascii_art_square_top(int n);

/** \brief print 'n' ascii_art square's
 *
 * \param n int - value must be positive.
 *
 * \return char - if (n == 0) return asccicode 219;
 *                if (n > 0) return asccicode 219 and print n square's;
 *
 */
char ascii_art_square_middle(int n);

/** \brief print 'n' ascii_art square's
 *
 * \param n int - value must be positive.
 *
 * \return char - if (n == 0) return asccicode 220;
 *                if (n > 0) return asccicode 220 and print n square's;
 *
 */
char ascii_art_square_bottom(int n);




#endif // ART_ASCII_H_INCLUDED
