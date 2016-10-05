/**
 *  @file ascii_art_pedra.c
 *  @brief As 28 peças do Domino
 *
 *  ASCII ART das peças de domino
 *
 *  @author Eduardo Queirós 29147 (code36u4r60@hotmail.com ou 29147@ufp.edu.pt)
 *  @bug No known bugs.
 */
#include "ascii_art_pedra.h"

#define on 254
#define off ' '
char p_standard[] = {220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,'\n',\
                     219,' ','a',' ','b',' ','c',' ',186,' ','7',' ','8',' ','9',' ',219,'\n',\
                     219,' ',' ',' ','e',' ',' ',' ',207,' ',' ',' ','5',' ',' ',' ',219,'\n',\
                     219,' ','g',' ','h',' ','i',' ',186,' ','1',' ','2',' ','3',' ',219,'\n',\
                     223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,'\0'
                    };


/** \brief ASCII ART "Clean Pedra * - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_clean(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == '1' || p[i] == 'a') p[i] = off;
        if(p[i] == '2' || p[i] == 'b') p[i] = off;
        if(p[i] == '3' || p[i] == 'c') p[i] = off;

        if(p[i] == '5' || p[i] == 'e') p[i] = off;

        if(p[i] == '7' || p[i] == 'g') p[i] = off;
        if(p[i] == '8' || p[i] == 'h') p[i] = off;
        if(p[i] == '9' || p[i] == 'i') p[i] = off;
    }
    return 0;
}
/** \brief ASCII ART "Pedra 1 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p1a(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == 'e') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra 2 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p2a(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == 'a') p[i] = on;
        if(p[i] == 'i') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra 3 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p3a(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == 'a') p[i] = on;
        if(p[i] == 'e') p[i] = on;
        if(p[i] == 'i') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra 4 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p4a(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == 'a') p[i] = on;
        if(p[i] == 'c') p[i] = on;
        if(p[i] == 'g') p[i] = on;
        if(p[i] == 'i') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra 5 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p5a(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == 'a') p[i] = on;
        if(p[i] == 'c') p[i] = on;
        if(p[i] == 'e') p[i] = on;
        if(p[i] == 'g') p[i] = on;
        if(p[i] == 'i') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra 6 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p6a(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == 'a') p[i] = on;
        if(p[i] == 'b') p[i] = on;
        if(p[i] == 'c') p[i] = on;
        if(p[i] == 'g') p[i] = on;
        if(p[i] == 'h') p[i] = on;
        if(p[i] == 'i') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra * - 1"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p1b(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == '5') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra * - 2"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p2b(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == '7') p[i] = on;
        if(p[i] == '3') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra * - 3"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p3b(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == '7') p[i] = on;
        if(p[i] == '5') p[i] = on;
        if(p[i] == '3') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra * - 4"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p4b(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == '7') p[i] = on;
        if(p[i] == '9') p[i] = on;
        if(p[i] == '1') p[i] = on;
        if(p[i] == '3') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra * - 5"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p5b(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == '7') p[i] = on;
        if(p[i] == '9') p[i] = on;
        if(p[i] == '5') p[i] = on;
        if(p[i] == '1') p[i] = on;
        if(p[i] == '3') p[i] = on;
    }
    return 0;
}
/** \brief ASCII ART "Pedra * - 6"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p6b(char *p, int size)
{
    int i = 0;
    for(i = 0 ; i <= size ; i++)
    {
        if(p[i] == '7') p[i] = on;
        if(p[i] == '8') p[i] = on;
        if(p[i] == '9') p[i] = on;
        if(p[i] == '1') p[i] = on;
        if(p[i] == '2') p[i] = on;
        if(p[i] == '3') p[i] = on;
    }
    return 0;
}

/** \brief ASCII ART "Pedra 0 - 0"
*
* \return char*
*
*/
char* ascii_p00()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_clean(p, strlen(p_standard));
    return p;
}

/** \brief ASCII ART "Pedra 0 - 1"
*
* \return char*
*
*/
char* ascii_p01()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p1b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}

/** \brief ASCII ART "Pedra 0 - 2"
*
* \return char*
*
*/
char* ascii_p02()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p2b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 0 - 3"
*
* \return char*
*
*/
char* ascii_p03()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p3b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 0 - 4"
*
* \return char*
*
*/
char* ascii_p04()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p4b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 0 - 5"
*
* \return char*
*
*/
char* ascii_p05()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p5b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 0 - 6"
*
* \return char*
*
*/
char* ascii_p06()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p6b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 1 - 1"
*
* \return char*
*
*/
char* ascii_p11()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p1a(p, strlen(p_standard));
    ascii_p1b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 1 - 2"
*
* \return char*
*
*/
char* ascii_p12()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p1a(p, strlen(p_standard));
    ascii_p2b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 1 - 3"
*
* \return char*
*
*/
char* ascii_p13()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p1a(p, strlen(p_standard));
    ascii_p3b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 1 - 4"
*
* \return char*
*
*/
char* ascii_p14()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p1a(p, strlen(p_standard));
    ascii_p4b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 1 - 5"
*
* \return char*
*
*/
char* ascii_p15()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p1a(p, strlen(p_standard));
    ascii_p5b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 1 - 6"
*
* \return char*
*
*/
char* ascii_p16()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p1a(p, strlen(p_standard));
    ascii_p6b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}

/** \brief ASCII ART "Pedra 2 - 2"
*
* \return char*
*
*/
char* ascii_p22()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p2a(p, strlen(p_standard));
    ascii_p2b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 2 - 3"
*
* \return char*
*
*/
char* ascii_p23()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p2a(p, strlen(p_standard));
    ascii_p3b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 2 - 4"
 *
 * \return char*
 *
 */
char* ascii_p24()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p2a(p, strlen(p_standard));
    ascii_p4b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 2 - 5"
 *
 * \return char*
 *
 */
char* ascii_p25()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p2a(p, strlen(p_standard));
    ascii_p5b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 2 - 6"
 *
 * \return char*
 *
 */
char* ascii_p26()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p2a(p, strlen(p_standard));
    ascii_p6b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 3 - 3"
*
* \return char*
*
*/
char* ascii_p33()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p3a(p, strlen(p_standard));
    ascii_p3b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 3 - 4"
 *
 * \return char*
 *
 */
char* ascii_p34()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p3a(p, strlen(p_standard));
    ascii_p4b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 3 - 5"
 *
 * \return char*
 *
 */
char* ascii_p35()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p3a(p, strlen(p_standard));
    ascii_p5b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 3 - 6"
 *
 * \return char*
 *
 */
char* ascii_p36()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p3a(p, strlen(p_standard));
    ascii_p6b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 4 - 4"
 *
 * \return char*
 *
 */
char* ascii_p44()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p4a(p, strlen(p_standard));
    ascii_p4b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 4 - 5"
 *
 * \return char*
 *
 */
char* ascii_p45()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p4a(p, strlen(p_standard));
    ascii_p5b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 4 - 6"
 *
 * \return char*
 *
 */
char* ascii_p46()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p4a(p, strlen(p_standard));
    ascii_p6b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 5 - 5"
 *
 * \return char*
 *
 */
char* ascii_p55()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p5a(p, strlen(p_standard));
    ascii_p5b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 5 - 6"
 *
 * \return char*
 *
 */
char* ascii_p56()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p5a(p, strlen(p_standard));
    ascii_p6b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}
/** \brief ASCII ART "Pedra 6 - 6"
 *
 * \return char*
 *
 */
char* ascii_p66()
{
    char *p = (char*)malloc(sizeof(char)* strlen(p_standard));
    strcpy(p,p_standard);
    ascii_p6a(p, strlen(p_standard));
    ascii_p6b(p, strlen(p_standard));
    ascii_clean(p, strlen(p_standard));
    return p;
}

void main_teste_ascci_art_pedra()
{
    char *p = NULL;

    p = ascii_p00();
    printf("\n%s",p);
    p = ascii_p01();
    printf("\n%s",p);
    p = ascii_p02();
    printf("\n%s",p);
    p = ascii_p03();
    printf("\n%s",p);
    p = ascii_p04();
    printf("\n%s",p);
    p = ascii_p05();
    printf("\n%s",p);
    p = ascii_p06();

    p = ascii_p11();
    printf("\n%s",p);
    p = ascii_p12();
    printf("\n%s",p);
    p = ascii_p13();
    printf("\n%s",p);
    p = ascii_p14();
    printf("\n%s",p);
    p = ascii_p15();
    printf("\n%s",p);
    p = ascii_p16();
    printf("\n%s",p);

    p = ascii_p22();
    printf("\n%s",p);
    p = ascii_p23();
    printf("\n%s",p);
    p = ascii_p24();
    printf("\n%s",p);
    p = ascii_p25();
    printf("\n%s",p);
    p = ascii_p26();
    printf("\n%s",p);

    p = ascii_p33();
    printf("\n%s",p);
    p = ascii_p34();
    printf("\n%s",p);
    p = ascii_p35();
    printf("\n%s",p);
    p = ascii_p36();
    printf("\n%s",p);

    p = ascii_p44();
    printf("\n%s",p);
    p = ascii_p45();
    printf("\n%s",p);
    p = ascii_p46();
    printf("\n%s",p);

    p = ascii_p55();
    printf("\n%s",p);
    p = ascii_p56();
    printf("\n%s",p);

    p = ascii_p66();
    printf("\n%s",p);

}
