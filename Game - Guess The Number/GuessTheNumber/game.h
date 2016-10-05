/**
 *  @file game.c
 *  @brief Headers - The functions of the game
 *
 *
 *  @author Eduardo Queirós - UFP nº 29147 (code36u4r60@hotmail.com ou 29147@ufp.edu.pt)
 *  @bug No known bugs.
 */


#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#include "main.h"

int playGame(int sizeNum,int totalShots);
void cleanBuffer();
int levelSelect(int *);
int getOut();
#endif // GAME_H_INCLUDED
