#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Function.h"

struct ListePlante
{
  char NomPlante[50];
  char categoriePlante[50];
  char Desc[150];
  char photo[100];
  float humidite;
  float temp;
  char fleuraison[20];
  int plante_id;
};

void start() // Lance le programme
{
  menu();
}

void menu() // Menu principale
{
  printf("\x1b[34m\x1b[47m  MENU PRINCIPALE  \n\n\x1b[0m");
  printf("1. Plantes\n");
  printf("2. Sauvegarde\n");
  printf("3. Ajoutez une plante\n");
  printf("4. Quitter\n");
  choix();
}

void choix() // Fonction choix du menu
{
  int choix;
  printf("Votre choix : ");
  scanf("%d", &choix);
  while (choix<1 && choix >4 )
  {
    printf("Votre choix : ");
    scanf("%d", &choix);
  }
  switch (choix)
  {
  case 1:
    printf("\x1b[34m\x1b[47m  MENU DES PLANTES  \n\n\x1b[0m");
    ChoixPlante();// afficherliste();
    break;
  case 2:
    printf("Sauvegardes");
    //Fonction sauvegarde
    break;
  case 3:
    printf("Ajout d'une plante");
    //Fonction ajouter plante
    break;
  case 4:
    exit(1);
  }
}



void ChoixPlante() // Fonction choix du menu
{
  printf("01. Plante 1  11. Plante 11  22 .Plante 21\n");
  printf("02. Plante 2  12. Plante 12  22 .Plante 22\n");
  printf("03. Plante 3  13. Plante 13  23. Plante 23\n");
  printf("04. Plante 4  14. Plante 14  24. Plante 24\n");
  printf("05. Plante 5  15. Plante 15  25. Plante 25\n");
  printf("06. Plante 6  16. Plante 16  26. Plante 26\n");
  printf("07. Plante 7  17. Plante 17  27. Plante 27\n");
  printf("08. Plante 8  18. Plante 18  28. Plante 28\n");
  printf("09. Plante 9  19. Plante 19  29. Plante 29\n");
  printf("10. Plante 10 20. Plante 20  30. Plante 30\n");
  printf("31. Retour menu principale\n");

  int choix,i = 1;
  printf("Choisissez l'une des plantes parmis la liste affiche : ");
  scanf("%d", &choix);
  while (choix < 1 || choix > 31)
  {
    printf("Choisissez l'une des plantes parmis la liste affiche : ");
    scanf("%d", &choix);
  }
  switch (choix)
  {
  case 1:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
     printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 2:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
     printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 3:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
     printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 4:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 5:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 6:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 7:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 8:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 9:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 10:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 11:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 12:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 13:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;  
  case 14:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 15:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 16:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 17:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 18:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 19:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 20:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 21:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 22:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 23:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 24:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 25:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n"); 
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 26:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 27:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 28:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 29:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 30:
    printf("Nom de la Plante : ???\n");
    printf("Categorie de la plante : ???\n");
    printf("Description de la plante : ???\n");
    printf("Humidite : ???\n");
    printf("Temparature optimale :  ???\n");
    printf("luminosité optimale : ???\n");
    printf("Appuie sur 0 pour continué \n");
    scanf("%d",&i);
    while (i != 0) {
      printf("Appuie sur 0 pour continué \n");
      scanf("%d",&i);
    }
    ChoixPlante();
    break;
  case 31:
  menu();
  }
}