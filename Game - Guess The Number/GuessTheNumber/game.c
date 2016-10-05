/**
 *  @file game.c
 *  @brief The functions of the game
 *
 *
 *  @author Eduardo Queirós - UFP nº 29147 (code36u4r60@hotmail.com ou 29147@ufp.edu.pt)
 *  @bug No known bugs.
 */
#include "game.h"

int playGame(sizeNum,totalShots)
{
    int key = 0, nShots = 0, shot = 0;
    srand(time(NULL));
    key = 1 + rand()%sizeNum;
    //printf("%d \n",key);
    do
    {
        printf("Your shot [1 - %d] = _\b",sizeNum);
        scanf("%d",&shot);
        nShots++;
        if(key == shot)
        {
            system("cls");
            youWon(key,nShots);
            cleanBuffer();
            return getOut();
        }
        else if(key > shot)
        {
            system("cls");
            notYet("larger. ",nShots,totalShots);
        }
        else
        {
            system("cls");
            notYet("smaller.",nShots,totalShots);
        }

    }
    while(nShots != totalShots);
    system("cls");
    youLost(key,nShots);
    cleanBuffer();
    return getOut();
}


/** \brief Cleans Keyboard Buffer
 *
 * \return void
 *
 */
void cleanBuffer()
{
    scanf("%*[^\n]");
    scanf("%*c");
}

/** \brief Level Select
 *
 * \return char
 *
 */
int levelSelect(int *level)
{
    char op = '\0';
    int nscan = 0;
    do
    {
        system("cls");
        enter();
        puts("");
        puts(" Level Select: ");
        puts(" 1 - easy");
        puts(" 2 - normal");
        puts(" 3 - hard");
        puts(" 4 - genius");
        puts(" 0 - exit");
        printf(" #>_\b");
        scanf("%[01234]%n",&op,&nscan);
        cleanBuffer();
    }
    while(!nscan);
    *level = (int)(op - '0');
    return (*level==0)?0:1;
}
/** \brief Game Get Out
 *
 * \return int
 *
 */
int getOut()
{
    char getOut[10]= {'\0'};
    printf("Press any key to continue or write 'exit' to exit.\n $>_\b");
    gets(getOut);
    if(!strcmp(getOut,"exit"))
    {
        return 0;
    }
    return 1;
}
