#include "my_math.h"

/** Multiplication of integer values
 * \brief The multiplication to be performed by successive additions.
 *
 * \param a int
 * \param b int
 * \return long
 *
 */
long mult_int_values(int a, int b)
{
    long mult = 0;
    int signal = 1;

    if(a == 0 || b == 0) return 0;
    if((a < 0 && b > 0) || (a > 0 && b < 0))
    {
        signal = -1;
    }
    a = abs(a);
    b = abs(b);

    for(a = a; a > 0; a--)
    {
        mult += b;
    }
    return mult*signal;
}


/** \brief Calcular a media do N valores de entrada
 *
 * \return float
 *
 */
float func_media()
{
    int n = 0, i = 0;
    float num =0.0, soma = 0.0;

    printf("quantidade de valor a ser inseridos=_\b");
    scanf(" %d",&n);

    for(i = 0; i < n ; i++){
      scanf("%f",&num);
      soma += num;
    }
    return soma / n;
    }




int teste_main_my_math()
{
    //printf("%ld \n",mult_int_values(5,5));
    //printf(" Media = %2.2f \n",func_media());


    return 0;
}
