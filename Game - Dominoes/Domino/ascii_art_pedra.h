/**
 *  @file ascii_art_pedra.h
 *  @brief As 28 peças do Domino
 *
 *  ASCII ART das peças de domino
 *
 *  @author Eduardo Queirós 29147 (code36u4r60@hotmail.com ou 29147@ufp.edu.pt)
 *  @bug No known bugs.
 */
#ifndef ASCII_ART_PEDRA_H_INCLUDED
#define ASCII_ART_PEDRA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/** \brief ASCII ART "Clean Pedra * - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_clean(char *p, int size);

/** \brief ASCII ART "Pedra 1 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p1a(char *p, int size);
/** \brief ASCII ART "Pedra 2 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p2a(char *p, int size);
/** \brief ASCII ART "Pedra 3 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p3a(char *p, int size);
/** \brief ASCII ART "Pedra 4 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p4a(char *p, int size);
/** \brief ASCII ART "Pedra 5 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p5a(char *p, int size);
/** \brief ASCII ART "Pedra 6 - *"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p6a(char *p, int size);
/** \brief ASCII ART "Pedra * - 1"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p1b(char *p, int size);
/** \brief ASCII ART "Pedra * - 2"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p2b(char *p, int size);
/** \brief ASCII ART "Pedra * - 3"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p3b(char *p, int size);
/** \brief ASCII ART "Pedra * - 4"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p4b(char *p, int size);
/** \brief ASCII ART "Pedra * - 5"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p5b(char *p, int size);
/** \brief ASCII ART "Pedra * - 6"
 *
 * \param p char*
 * \param size int
 * \return int
 *
 */
int ascii_p6b(char *p, int size);
/** \brief ASCII ART "Pedra 0 - 0"
*
* \return char*
*
*/
char* ascii_p00();
/** \brief ASCII ART "Pedra 0 - 1"
*
* \return char*
*
*/
char* ascii_p01();
/** \brief ASCII ART "Pedra 0 - 2"
*
* \return char*
*
*/
char* ascii_p02();
/** \brief ASCII ART "Pedra 0 - 3"
*
* \return char*
*
*/
char* ascii_p03();
/** \brief ASCII ART "Pedra 0 - 4"
*
* \return char*
*
*/
char* ascii_p04();
/** \brief ASCII ART "Pedra 0 - 5"
*
* \return char*
*
*/
char* ascii_p05();
/** \brief ASCII ART "Pedra 0 - 6"
*
* \return char*
*
*/
char* ascii_p06();
/** \brief ASCII ART "Pedra 1 - 1"
*
* \return char*
*
*/
char* ascii_p11();
/** \brief ASCII ART "Pedra 1 - 2"
*
* \return char*
*
*/
char* ascii_p12();
/** \brief ASCII ART "Pedra 1 - 3"
*
* \return char*
*
*/
char* ascii_p13();
/** \brief ASCII ART "Pedra 1 - 4"
*
* \return char*
*
*/
char* ascii_p14();
/** \brief ASCII ART "Pedra 1 - 5"
*
* \return char*
*
*/
char* ascii_p15();
/** \brief ASCII ART "Pedra 1 - 6"
*
* \return char*
*
*/
char* ascii_p16();
/** \brief ASCII ART "Pedra 2 - 2"
*
* \return char*
*
*/
char* ascii_p22();
/** \brief ASCII ART "Pedra 2 - 3"
*
* \return char*
*
*/
char* ascii_p23();
/** \brief ASCII ART "Pedra 2 - 4"
 *
 * \return char*
 *
 */
char* ascii_p24();
/** \brief ASCII ART "Pedra 2 - 5"
 *
 * \return char*
 *
 */
char* ascii_p25();
/** \brief ASCII ART "Pedra 2 - 6"
 *
 * \return char*
 *
 */
char* ascii_p26();
/** \brief ASCII ART "Pedra 3 - 3"
*
* \return char*
*
*/
char* ascii_p33();
/** \brief ASCII ART "Pedra 3 - 4"
 *
 * \return char*
 *
 */
char* ascii_p34();
/** \brief ASCII ART "Pedra 3 - 5"
 *
 * \return char*
 *
 */
char* ascii_p35();
/** \brief ASCII ART "Pedra 3 - 6"
 *
 * \return char*
 *
 */
char* ascii_p36();
/** \brief ASCII ART "Pedra 4 - 4"
 *
 * \return char*
 *
 */
char* ascii_p44();
/** \brief ASCII ART "Pedra 4 - 5"
 *
 * \return char*
 *
 */
char* ascii_p45();
/** \brief ASCII ART "Pedra 4 - 6"
 *
 * \return char*
 *
 */
char* ascii_p46();
/** \brief ASCII ART "Pedra 5 - 5"
 *
 * \return char*
 *
 */
char* ascii_p55();
/** \brief ASCII ART "Pedra 5 - 6"
 *
 * \return char*
 *
 */
char* ascii_p56();
/** \brief ASCII ART "Pedra 6 - 6"
 *
 * \return char*
 *
 */
char* ascii_p66();

void main_teste_ascci_art_pedra();
#endif // ASCII_ART_PEDRA_H_INCLUDED
