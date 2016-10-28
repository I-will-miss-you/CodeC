/**
 *  @file imagem.c
 *  @brief ASCII ART from the game
 *
 *  @author Eduardo Queirós - UFP nº 29147 (code36u4r60@hotmail.com ou 29147@ufp.edu.pt)
 *  @bug No known bugs.
 */
#include "image.h"



/** \brief Not Yet Image
 *
 *  Location where it was taken the idea of ​​the image
 *  site: http://www.ascii-code.com/ascii-art/mythology/fantasy.php
 *  and
 *  site: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
 *
 * \param string char*
 * \param nshot int
 * \return void
 */
void notYet(char *str,int nshot,int totalShots){
    puts("");
    puts("\t           _......._");
    puts("\t       .-'.'.'.'.'.'.`-.");
    puts("\t     .'.'.'.'.'.'.'.'.'.`.");
    puts("\t    /.'.'               '.\\");
    puts("\t    |.'    _.--...--._     |");
    puts("\t     \\    `._.-.....-._.'   /");
    puts("\t    |     _..- .-. -.._   |");
    puts("\t .-.'    `.   ((@))  .'   '.-.");
    puts("\t( ^ \\      `--.   .-'     / ^ )");
    puts("\t \\  /         .   .       \\  /");
    printf("\t /          .'     '.  .-    \\                      Max shots = %d\n",totalShots);
    puts("\t( _.\\    \\ (_`-._.-'_)    /._\\               _  _  ___ _____  __   _____ _____ ");
    puts("\t `-' \\   ' .--.          / `-'              | \\| |/ _ \\_   _| \\ \\ / / __|_   _|");
    puts("\t     |  / /|_| `-._.'\\   |                  | .` | (_) || |    \\ V /| _|  | | ");
    puts("\t     |   |       |_| |   /-.._              |_|\\_|\\___/ |_|     |_| |___| |_|");
    puts("\t _..-\\   `.--.______.'  |                     _______________________________");
    printf("\t      \\       .....     |                    | You used %2d shots             |\n",nshot);
    printf("\t       `.  .'      `.  /                     | The number is %s        |\n",str);
    puts("\t         \\           .'                      |_______________________________|");
    puts("\t         `-..___..-`");
    puts("");

}
/** \brief You Lost Image
 *
 *  Location where it was taken the idea of ​​the image
 *  site: http://www.ascii-code.com/ascii-art/holiday-and-events/halloween.php
 *  and
 *  site: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
 *
 * \param key int - secret number
 * \param nshot int - number of attempts.
 * \return void
 */
void youLost(int key , int nshot)
{
    puts("");
    puts("\t                            .-----.");
    puts("\t                          .'       `.");
    puts("\t                         :      ^v^  :");
    puts("\t                         :           :");
    puts("\t                         '           '");
    puts("\t          |~        www   `.       .'");
    puts("\t         /.\\       /#^^\\_   `-/\\--'");
    puts("\t        /#  \\     /#%    \\   /# \\");
    puts("\t       /#%   \\   /#%______\\ /#%__\\");
    puts("\t      /#%     \\   |= I I ||  |- |");
    puts("\t      ~~|~~~|~~   |_=_-__|'  |[]|");
    puts("\t        |[] |_______\\__|/_ _ |= |`.             ______________________________");
    puts("\t ^V^    |-  /= __   __    /-\\|= | :;          / \\                             \\.");
    puts("\t        |= /- /\\/  /\\/   /=- \\.-' :;         |   |                            |.");
    puts("\t        | /_.=========._/_.-._\\  .:'          \\_ |                            |.");
    puts("\t        |= |-.'.- .'.- |  /|\\ |.:'               |                            |.");
    puts("\t        \\  |=|:|= |:| =| |~|~||'|                |                            |.");
    printf("\t         |~|-|:| -|:|  |-|~|~||=|      ^V^       |   Secret number:%6d     |.\n",key);
    puts("\t         |=|=|:|- |:|- | |~|~|| |                |                            |.");
    printf("\t         | |-_~__=_~__=|_^^^^^|/___              |   Shots number: %2d         |.\n",nshot);
    puts("\t         |-(=-=-=-=-=-(|=====/=_-=/\\             |                            |.");
    puts("\t         | |=_-= _=- _=| -_=/=_-_/__\\            |                            |.");
    puts("\t         | |- _ =_-  _-|=_- |]#| I II            |                            |.");
    puts("\t         |=|_/ \\_-_= - |- = |]#| I II            |                            |.");
    puts("\t         | /  _/ \\. -_=| =__|]!!!I_II!!          |   _________________________|___");
    puts("\t        _|/-'/  ` \\_/ \\|/' _ ^^^^`.==_^.         |  /                            /.");
    puts("\t      _/  _/`-./`-; `-.\\_ / \\_'\\`. `. ===`.      \\_/____________________________/.");
    puts("\t     / .-'  __/_   `.   _/.' .-' `-. ; ====;\\");
    puts("\t    /. . ../    \\ `. \\ / -  /  .-'.' ====='  >");
    puts("\t   /  \\  /  .-' `--.  / .' /  `-.' ======.' /");
    puts("\t    __   _____  _   _   _    ___  ___ _____  ");
    puts("\t    \\ \\ / / _ \\| | | | | |  / _ \\/ __|_   _| ");
    puts("\t     \\ V / (_) | |_| | | |_| (_) \\__ \\ | |  ");
    puts("\t      |_| \\___/ \\___/  |____\\___/|___/ |_|  ");
    puts("");
}
/** \brief You Won Image
 *
 *  Location where it was taken the idea of ​​the image
 *  site: http://www.ascii-code.com/ascii-art/cartoons/animaniacs.php
 *  and
 *  site: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
 *
 * \param key int - secret number
 * \param nshot int - number of attempts.
 * \return void
 */
void youWon(int key, int nshot)
{
    puts("");
    puts("\t                 @@  @@                          ______________________________");
    puts("\t                ,-@@~@-.                       / \\                             \\.");
    puts("\t _              (_, O _/                      |   |                            |.");
    puts("\t| Y~.            (__d._)                       \\_ |                            |.");
    puts("\t| r.|    Y@oooood@@@@@@@@oooo@F                   |                            |.");
    puts("\t Y ||   _Y@@@@@@P   \"V\"  Y@@@@f                   |                            |.");
    printf("\t | t_\\_/ _)@@@@@          @@@@f  __     ,--,      |   Secret number:%4d       |.\n",key);
    puts("\t  \\  `. / ~@@@@@    . .   @@@@  (_ `---'  ~~)     |                            |.");
    printf("\t   `-._/)   @@@@b__|@_@|_d@@@    _l,'~   ~~)      |   Shots number: %2d         |.\n",nshot);
    puts("\t      (,db   (   _  `-' _   )  ,d@_)---~~~~       |                            |.");
    puts("\t         Yb.  \\ '|\\____/|` / od@P                 |                            |.");
    puts("\t          Y@b  \\ | nn  /','d@@P                   |                            |.");
    puts("\t            Y@b `\\`---'/'od@P                     |                            |.");
    puts("\t             ~@@@@`---'@@@P~                      |   _________________________|___");
    puts("\t               Y@@@@@@@@@~                        |  /                            /.");
    puts("\t                @@@@@@@@                          \\_/____________________________/.");
    puts("\t __   _____  _   _  __      _____  _  _");
    puts("\t \\ \\ / / _ \\| | | | \\ \\    / / _ \\| \\| |");
    puts("\t  \\ V / (_) | |_| |  \\ \\/\\/ / (_) | .` |");
    puts("\t   |_| \\___/ \\___/    \\_/\\_/ \\___/|_|\\_|");
    puts("");
}
/** \brief Game Start Image
 *
 *  Location where it was taken the idea of ​​the image
 *  site: http://chris.com/ascii/index.php?art=animals/birds%20(land)
 *  and
 *  site: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
 *
 * \return void
 */
void enter()
{
    puts("");
    puts("\touooooo,~oo         oo~,ooooouo");
    puts("\t8     \\\\\\\\\\\\\\.     ,///////   8\t  _____ _   _ _____ _____ _____");
    puts("\t8      go~~~os   go~~~os      8\t |  __ \\ | | |  ___/  ___/  ___|");
    puts("\t8    ,8`     '8_8`     '8.    8\t | |  \\/ | | | |__ \\ `--.\\ `--.");
    puts("\t8    8`   _   '8`   _   '8    8\t | | __| | | |  __| `--. \\`--. \\");
    puts("\t8    8   !@!   8   !@!   8    8\t | |_\\ \\ |_| | |___/\\__/ /\\__/ /");
    puts("\t8    8i       /8\\       i8    8\t  \\____/\\___/\\____/\\____/\\____/");
    puts("\t8     8s     g8 8s     s8     8");
    puts("\t8      dooooo`8_8'ooooob      8\t _____ _   _  _____   _   _ _   ____  _________ ___________ ");
    puts("\t8     d!      'V`      !b     8\t |_   _| | | ||  ___| | \\ | | | | |  \\/  || ___ \\  ___| ___ \\");
    puts("\t8     8        ~        8     8\t   | | | |_| || |__   |  \\| | | | | .  . || |_/ / |__ | |_/ /");
    puts("\t8     8                 8     8\t   | | |  _  ||  __|  | . ` | | | | |\\/| || ___ \\  __||    / ");
    puts("\t8   ] 8                 8 [   8\t   | | | | | || |___  | |\\  | |_| | |  | || |_/ / |___| |\\ \\ ");
    puts("\t8 [ ] 8                 8 [ ] 8\t   \\_/ \\_| |_/\\____/  \\_| \\_/\\___/\\_|  |_/\\____/\\____/\\_| \\_|");
    puts("\t8 [ ] !8               8| [ ] 8");
    puts("\t8 [ ]s88b-oo- xxx -oo-d88s[ ] 8");
    puts("\t8 [,88  8i'`   ~   '`i8  88.] 8");
    puts("\t8 88`   88s'88` '88`gf8   '88 8");
    puts("\t888   ,g8s/8. ooo ,8\\g8s.   888");
    puts("\t88`  i888888fo_X_of888888i  '88");
    puts("\tV    YY'`~'`  ~~~  '` ~ YY    V");
    puts("\t      \"\"                 \"\" ");
    puts("");
}
