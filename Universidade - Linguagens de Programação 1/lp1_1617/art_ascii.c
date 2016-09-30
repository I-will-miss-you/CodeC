#include "art_ascii.h"

/** \brief print 'n' ascii_art square's
 *
 * \param n int - value must be positive.
 *
 * \return char - if (n == 0) return asccicode 220;
 *                if (n > 0) return asccicode 220 and print n square's;
 *
 */
char ascii_art_square_bottom(int n)
{
    if(n > 0)
    {
        while(n-- > 0)
        {
            printf("%c",220);
        }
    }
    return 220;
}

/** \brief print 'n' ascii_art square's
 *
 * \param n int - value must be positive.
 *
 * \return char - if (n == 0) return asccicode 223;
 *                if (n > 0) return asccicode 223 and print n square's;
 *
 */
char ascii_art_square_top(int n)
{
    if(n > 0)
    {
        while(n-- > 0)
        {
            printf("%c",223);
        }
    }

    return 223;
}

/** \brief print 'n' ascii_art square's
 *
 * \param n int - value must be positive.
 *
 * \return char - if (n == 0) return asccicode 219;
 *                if (n > 0) return asccicode 219 and print n square's;
 *
 */
char ascii_art_square_middle(int n)
{
    if(n > 0)
    {
        while(n-- > 0)
        {
            printf("%c",219);
        }
    }

    return 219;
}



/** \brief main teste function
 *
 * \return int
 *
 */
int teste_main_art_ascii_teste()
{
    ascii_art_square_bottom(5);
    return 0;
}
