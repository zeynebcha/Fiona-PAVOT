#include "struct.h"
#include "construct.h"
#include "combat.h"

int main(void){
  int mode_jeu = 0;
  int dif = 0;
  int team_md = 0;
  Team t1,t2;
  srand(time(NULL));
  do{
    printf("Quel mode de jeux voulez-vous ?\n1 : pour Joueur VS Machine \n2 : pour Joueur VS Joueur");
  scanf("%d", &mode_jeu);
  }while((mode_jeu != 1) || (mode_jeu != 2));  //test de vérification
  if (mode_jeu==1){ //mode joueur vs machine
    Team computer;
    do{
      printf("Choix du mode de difficulté : \n1 : pour Noob \n2 : pour Facile \n3 : pour Moyen \n4 : pour Difficile \n");
      scanf("%d", &dif);
    }while((dif < 1) || (dif > 4));// test de vérification
    if(dif >= 1 && dif <= 3){
        // équipe machine généré aléatoirement 
        Combat(t1, computer, 1, dif);
    }
    else{
        // équipe prédéfinie
        team_md = rand()%3 + 1;
        if(team_md == 1){
          printf("Le joueur va jouer contre l'équipe prédéfinie 1 contenant Daera, Miroveed, Iela et Arel\n");

        }
        if(team_md == 2){
          printf("Le joueur va jouer contre l'équipe prédéfinie 2 contenant Nallmar, Ada, Deam et Lorel\n");
        }
        if(team_md == 3){
          printf("Le joueur va jouer contre l'équipe prédéfinie 3 contenant Tagriel, Nallmar, Arrion et Daera\n");
        }
        Combat(t1, computer, 1, dif);
    }
  }
  else{ //mode joueur vs joueur 
    
    Combat(t1,t2,1,0);  //0 pour le mode de difficulté puisqu'il n'y en a pas en Joueur vs Joueur
  }
}