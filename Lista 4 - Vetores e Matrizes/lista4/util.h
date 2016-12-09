#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

/**\brief Limpeza do buffer do teclado
*
*/
void limpa();

/** \brief is prime? (é primo?)
 *
 * \param num int - The input value must be positive not null.
 * \return int
 *           1 true ;
 *           0 false ;
 *          -1 error ("invalid input value" ou "
 *                      situation not provided.")
 *
 *
 */
int isprime(int num);


/** \brief Even?
 *
 * \param num int - The input value must be positive not null.
 * \return int
 *           1 true ;
 *           0 false
 */
int iseven(int num);

/** \brief Odd?
 *
 * \param num int - The input value must be positive not null.
 * \return int
 *          1 true
 *          0 false
 */
int isodd(int num);


#endif // UTIL_H_INCLUDED
