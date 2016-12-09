#include "util.h"



/**\brief Limpeza do buffer do teclado
*
*/
void limpa() {
        scanf("%*[^\n]");
        scanf("%*c");
}


/** \brief is prime? (é primo?)
 *
 * \param num int - The input value must be positive not null.
 * \return int
 *          -1 true
 *           0 false
 *          -1 error ("invalid input value" ou "
 *                      situation not provided.")
 *
 *
 */
int isprime(int num)
{
    int i = 0;
    if(num > 0)
    {
        for( i = 2 ; i < num ; i++)
        {
            if(num % i == 0)
            {
                return 0; //not prime
                break;
            }
        }
        if(i == num){
            return 1;//is prime
        }
    }
    return -1;//error
}

/** \brief Even?
 *
 * \param num int - The input value must be not null.
 * \return int
  *          1 true ;
 *           0 false ("invalid input value" ou "
 *                      situation not provided.")
 */
int iseven(int num){
    return (num % 2 == 0)? 1 : 0;
}

/** \brief Odd?
 *
 * \param num int - The input value must be not null.
 * \return int
 *          1 true
 *          0 false
 */
int isodd(int num){
    return (num % 2 == 0)? 0 : 1;
}
