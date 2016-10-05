/**
 *  @file main.c
 *  @brief
 *
 *  @author Eduardo Queirós - UFP nº 29147 (code36u4r60@hotmail.com ou 29147@ufp.edu.pt)
 *  @bug No known bugs.
 */



#include "main.h"


int main()
{
    main_game();
    //main_teste();
    return 0;
}

int main_game()
{
    int level = 1, nTentativas = 10 , run = 1 , sizeNum = 0;
    while(run)
    {
        if(levelSelect(&level)!= 0)
        {
            --level;
            sizeNum = 100 * (int)pow(10,level);
            nTentativas += level*3;
            run = playGame(sizeNum,nTentativas);
        }
        else
        {
           run = getOut();
        }
    }
    return 0;
}


int main_teste()
{
    //enter();
    //youWon(12,15);
    //youLost(18,16);
    //notYet("smaller.",5);
    //notYet("larger. ",5);
    return 0;
}





























