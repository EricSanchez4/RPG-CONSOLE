/*
** ETNA PROJECT, 2022
** RPG
** File description:
** main
*/

#include "rpg.h"
#include "Enemy.h"
#include "Players.h"
#include "Boss.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *my_readline(void);
void my_putchar(char c);
char *my_strdup(const char *src);
int my_strcmp(const char *s1, const char *s2);

int my_strlen(const char *str)
{
    int len = 0;
    while (str[len])
    {
        len++;
    }
    return len;
}

void my_put_nbr(int nb)
{
  int	mod;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  mod = (nb % 10);
          nb = (nb - mod) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + mod);
        }
      else
        my_putchar(48 + nb % 10);
    }
}

void my_write(const char *str)
{
    write(1, str, my_strlen(str));
}

void my_long_write(const char *str)
{
    int len;
    len = 0;
    while(str[len])
    {
        my_putchar(str[len]);
        len++;
        usleep(100000);
    }
}
int img_dragon(){

    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⢿⣿⣿⣷⣶⣤⣄⣀⡀⠀⠀⠀⢀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⣀⣠⣤⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⡏⠀⣿⣿⣿⣿⠿⠛⢿⣿⠀⠀\n");
    my_write("⠀⠀⣠⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠇⠀⠀\n");
    my_write("⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⢀⠀⠀⠀\n");
    my_write("⠀⢸⣿⣿⣿⣿⣿⣿⣿⠿⠛⠋⠉⠀⠀⠀⠀⠘⠛⠻⠿⠿⣿⣷⣤⣤⡾⠀⠀⠀\n");
    my_write("⠀⢸⣿⣿⣿⣿⡿⠋⠁⠀⠀⠀⠀⠀⠈⠲⣦⣄⠀⠀⠀⠀⠀⠀⠈⠉⠁⠀⠀⠀\n");
    my_write("⠀⢸⣿⣿⣿⠟⠀⢀⣀⣠⣤⣤⣄⣀⣀⡀⠈⢻⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⢸⣿⣿⣿⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣀⣼⣿⣶⣄⡀⠀⠀⠀⠀\n");
    my_write("⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠛⠛⠛⠛⢿⣿⣿⣿⣿⣿⡿⠿⢿⣶⣤⡀⠀\n");
    my_write("⠀⢸⣿⣿⣿⣿⣿⣿⠟⠉⠀⠀⠀⠀⠀⠀⠺⣿⣿⣿⣿⡿⠁⠀⠀⠀⢹⡟⠁⠀\n");
    my_write("⠀⢸⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣇⠀⠀⠀⠀⠈⠀⠀⠀\n");
    my_write("⠀⢸⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣷⣴⠖⠀⠀⠀⠀⠀\n");
    my_write("⠀⠈⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
return 0;
}

int img_gumble(){

    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀         \n")  ;
    my_write("       ___                             \n");
    my_write("         .';:;'.                       \n");
    my_write("        /_' _' /\'   __                \n");
    my_write("        ;a/ e= J/-''  '.               \n");
    my_write("        \' ~_   (  -'  ( ;_ ,.         \n");
    my_write("         L~''_.    -.  \' ./  )        \n");
    my_write("         ,'-' '-._  _;  )'   (         \n");
    my_write("       .' .'   _.'')  \'  \'(  |       \n");
    my_write("      /  (  .-'   __\'{`', \'  |       \n");
    my_write("     / .'  /  _.-'   '  ; /  |         \n");
    my_write("    / /    '-._'-,     / / \' (        \n");
    my_write(" __/ (_    ,;' .-'    / /  /_'-._      \n");
    my_write("`'-'` ~`  ccc.'   __.','     \'j\'L\'  \n");
    my_write("                 .='/|\7               \n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
return 0;
}


int img_gobelin(){

    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣿⣿⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠢⣤⣀⡀⠀⠀⠀⢿⣧⣄⡉⠻⢿⣿⣿⡿⠟⢉⣠⣼⡿⠀⠀⠀⠀⣀⣤⠔⠀\n");
    my_write("⠀⠀⠈⢻⣿⣶⠀⣷⠀⠉⠛⠿⠶⡴⢿⡿⢦⠶⠿⠛⠉⠀⣾⠀⣶⣿⡟⠁⠀⠀\n");
    my_write("⠀⠀⠀⠀⠻⣿⡆⠘⡇⠘⠷⠠⠦⠀⣾⣷⠀⠴⠄⠾⠃⢸⠃⢰⣿⠟⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠋⢠⣾⣥⣴⣶⣶⣆⠘⣿⣿⠃⣰⣶⣶⣦⣬⣷⡄⠙⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⢋⠛⠻⠿⣿⠟⢹⣆⠸⠇⣰⡏⠻⣿⠿⠟⠛⡙⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠈⢧⡀⠠⠄⠀⠈⠛⠀⠀⠛⠁⠀⠠⠄⢀⡼⠁⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠈⢻⣦⡀⠃⠀⣿⡆⢰⣿⠀⠘⢀⣴⡟⠁⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣦⡀⠘⠇⠸⠃⢀⣴⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣷⣄⣠⣾⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    my_write("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
return 0;
}

Player_t **playersListe()
{
    int i = 0;
    Player_t **playerList = malloc( (5 + 1) * sizeof(Player_t*)); 
   while (i < 5)
    {
            playerList[i] = malloc(1 * sizeof(Player_t));
            playerList[i]->name = Player_name[i];
            playerList[i]->hp = Player_hp[i];
            playerList[i]->mp = Player_mp[i];
            playerList[i]->str = Player_str[i];
            playerList[i]->inte = Player_inte[i];
            playerList[i]->def = Player_def[i];
            playerList[i]->res = Player_res[i];
            playerList[i]->spd = Player_spd[i];
            playerList[i]->luck = Player_luck[i];
        i++;
    } 
   return playerList;
}

Enemy_t **enemyListe()
{
    int i = 0;
    Enemy_t **enemyList = malloc( (10 + 1) * sizeof(Enemy_t*)); 
   while (i < 10)
    {
            enemyList[i] = malloc(1 * sizeof(Enemy_t));
            enemyList[i]->name = Enemy_name[i];
            enemyList[i]->hp = Enemy_hp[i];
            enemyList[i]->mp = Enemy_mp[i];
            enemyList[i]->str = Enemy_str[i];
            enemyList[i]->inte = Enemy_inte[i];
            enemyList[i]->def = Enemy_def[i];
            enemyList[i]->res = Enemy_res[i];
            enemyList[i]->spd = Enemy_spd[i];
            enemyList[i]->luck = Enemy_luck[i];
        i++;
    } 
   return enemyList;
}

Boss_t **bossListe()
{
    int i = 0;
    Boss_t **bossList = malloc( (7 + 1) * sizeof(Boss_t*)); 
   while (i < 7)
    {
            bossList[i] = malloc(1 * sizeof(Boss_t));
            bossList[i]->name = Boss_name[i];
            bossList[i]->hp = Boss_hp[i];
            bossList[i]->mp = Boss_mp[i];
            bossList[i]->str = Boss_str[i];
            bossList[i]->inte = Boss_inte[i];
            bossList[i]->def = Boss_def[i];
            bossList[i]->res = Boss_res[i];
            bossList[i]->spd = Boss_spd[i];
            bossList[i]->luck = Boss_luck[i];
        i++;
    } 
   return bossList;
}
int my_Random()
{
    time_t t;
    int randomr;
    /* Intializes random number generator */
    srand((unsigned) time(&t));
    randomr = rand() % 100;
   return randomr;
}

void my_battle(const char *nameEnemy, int e)
{
    char *answers;
    Player_t **playerList;
    Enemy_t **enemyList; 
    //Boss_t **bossList; ############### A dé-commenté quand on l'utilise
    
   
    playerList = playersListe();
    enemyList = enemyListe();
    //bossList = bossListe(); ############### A dé-commenté quand on l'utilise
    if (my_strcmp(nameEnemy, "Goblin") == 0){
        img_gobelin();
        my_long_write("Un gobelin !!\n");
        usleep(1000000);
        my_write("HP Enemie: ");
        my_put_nbr(enemyList[0]->hp);
        my_write("Vos HP: ");
        my_put_nbr(playerList[e]->hp);
        my_long_write("Que veux tu faire ?\n");
        my_write("[1]Attaquer       [2]Defense      [3]Soin        [4]Voler     [5]Fuir\n");
        char myAction = 't';
        while (myAction == 't' && (enemyList[0]->hp > 0 && playerList[e]->hp > 0 )) {
            answers = my_readline();
            for(int i = 0; i < 5; i++)
            {
                if ((my_strcmp(answers, "1") == 0) || (my_strcmp(answers, "2") == 0) || (my_strcmp(answers, "3") == 0) || (my_strcmp(answers, "4") == 0) || (my_strcmp(answers, "5"))) {
                    myAction = 'f';
                } 

            }
            if (myAction == 'f') {
            if (my_strcmp(answers, "1") == 0){ // Attack Case
                    int randomr = my_Random();
                    if (randomr < playerList[e]->luck){
                        enemyList[0]->hp = enemyList[0]->hp - (playerList[e]->str * 2);
                        my_write("❗Goblin take a crit from player.❗\nHP du Gobelin: ");
                        my_put_nbr(enemyList[0]->hp);
                    } else {
                        enemyList[0]->hp = enemyList[0]->hp - playerList[e]->str;
                        my_write("⚔️ Goblin take a simple hit from player ⚔️ \n");
                        my_put_nbr(enemyList[0]->hp);
                    }
                
            
            }
            if (my_strcmp(answers, "2") == 0){ // Defensive Case



            }
            if (my_strcmp(answers, "3") == 0){ // Heal Case
                playerList[e]->hp = (Player_hp[e] /2) + playerList[e]->hp;

            }
            if (my_strcmp(answers, "4") == 0){ // thieft Case

            }
            if (my_strcmp(answers, "5") == 0){ // Fuir Case

            }
            } else {
                my_long_write("Je n'ai pas compris l'action a éffectué.\n");
            }
        }

    } else if (my_strcmp(nameEnemy, "Orc") == 0){


    } else if (my_strcmp(nameEnemy, "Troll") == 0){


    } else if (my_strcmp(nameEnemy, "Skeleton") == 0){


    } else if (my_strcmp(nameEnemy, "Zombie") == 0){


    } else if (my_strcmp(nameEnemy, "Vampire") == 0){


    } else if (my_strcmp(nameEnemy, "Demon") == 0){


    } else if (my_strcmp(nameEnemy, "Dragon") == 0){


    } else if (my_strcmp(nameEnemy, "Golem") == 0){


    } else if (my_strcmp(nameEnemy, "Wizard") == 0){


    }

}


int main()
{
    char *answers;
    int e;
    Player_t **playerList;
    //Enemy_t **enemyList; 
    //Boss_t **bossList; ############### A dé-commenté quand on l'utilise
    
   
    playerList = playersListe();
    //enemyList = enemyListe();
    //bossList = bossListe(); ############### A dé-commenté quand on l'utilise
    my_write("⚔️  Le Fléau ETNA. ⚔️\n");
    usleep(1000000);
    my_long_write("Bienvenue à toi jeune aventurier !\n");
    usleep(1000000);
    my_write("Je fais partie de la guilde ETNA, nous recherchons des frères d'armes pour combatte avec nous nos ennemis.\n");
    usleep(1000000);
    my_write("Tu rejoindra une équipe de jeunes aventuriers encadré par ton chef de guilde.\n");
    usleep(1000000);
    my_write("Choisis ton personage :\n");
    for(int i = 0; i < 5; i++){
        my_write(playerList[i]->name);
        my_write("\n");
    }

    char mySwitch = 't';
    while (mySwitch == 't') {
        answers = my_readline();
        for(int i = 0; i < 5; i++){
            if ((my_strcmp(answers, "Link") == 0) || (my_strcmp(answers, "Young_Link") == 0) || (my_strcmp(answers, "Impa") == 0) || (my_strcmp(answers, "Sheik") == 0) || (my_strcmp(answers, "Hylia") == 0)) {
                mySwitch = 'f';
            } 

        }
        if (mySwitch == 'f') {
           if (my_strcmp(answers, "Link") == 0){e = 0;}
           if (my_strcmp(answers, "Young_Link") == 0){e = 1;}
           if (my_strcmp(answers, "Impa") == 0){e = 2;}
           if (my_strcmp(answers, "Sheik") == 0){e = 3;}
           if (my_strcmp(answers, "Hylia") == 0){e = 4;}
        } else {
            my_long_write("Je n'ai pas compris.\n");
        }
    }
    
    usleep(1000000);
    my_long_write( answers );
    my_long_write( ", voici tes stats : \n");
    my_write("HP: ");
    my_put_nbr(playerList[e]->hp);
    my_write("\n");
    my_write("MP: ");
    my_put_nbr(playerList[e]->mp);
    my_write("\n");
    my_write("FORCE: ");
    my_put_nbr(playerList[e]->str);
    my_write("\n");
    my_write("INTELLIGENCE: ");
    my_put_nbr(playerList[e]->inte);
    my_write("\n");
    my_write("DEFENSE: ");
    my_put_nbr(playerList[e]->def);
    my_write("\n");
    my_write("RESISTANCE: ");
    my_put_nbr(playerList[e]->res);
    my_write("\n");
    my_write("SPEED: ");
    my_put_nbr(playerList[e]->spd);
    my_write("\n");
    my_write("CHANCE: ");
    my_put_nbr(playerList[e]->luck);
    my_write("\n");
    usleep(1000000);
    my_write("Bon, ta première mission consistera a récupérer nos civils prisonniers capturés par un groupe de goblins. En premier lieu nous attaquerons leurs grottes. Tu devras prouver ta place dans notre guilde en combattent les gobelins et leurs alliés. Attention les goblins ne sont jamais seuls. \n");
    usleep(1000000);
    my_long_write("Est tu prêts à accomplir ta première mission ? \n");
    usleep(1000000);
    my_long_write("Bonne chance !!\n");
    usleep(1000000);
    my_long_write("Vous vous mettez avec votre nouvelle guilde en route pour la grotte des gobelins.\n");
    my_long_write("👣      👣      👣      👣      👣\n\n");


    my_battle("Goblin",e); // Premier Combat !
    my_long_write("⚔️ 🟩 🟩  Vous avez gagné votre premier combat ! 🟩 🟩 ⚔️ ");
    usleep(1000000);
    my_long_write("En continuant les chemins de la grotte vous appercevais des passages étroit et décidez avec l'accord de la guilde d'y acceder.\n");
    usleep(1000000);
    my_long_write("Le chemin vous a séparé de votre guilde quand surgis un enemi.\n");


   



    
    
}
