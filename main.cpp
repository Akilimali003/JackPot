/**
* \Name: JackPot
* \Author: Vijey Rasam
* \Description: small JackPot game
* \Date: 18/07/2016, 10h 37min
* \Copyright: Public Domain
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
void presentation()
{
     cout << "\n";
     cout << "                          ** JACKPOT GAME **\n\n";
     cout << "=>ENGLISH\n";
     cout << "The goal of this game is to guess a number. You will be ask to type\n";
     cout << "a number (you have 5 guess)\n";
     cout << "Jackpot will then tell you if this number is too big or too small compared to the secret number to find.\n\n";

     cout << "=>FRANCAIS\n";
     cout << "La regle du jeu est de trouver un chiffre. Tu sera demander de choisir\n";
     cout << "le chiffre (Tu as 5 tours d'essaie)\n";
     cout << "Jackpot vous dira alors si le chiffre choisi est plus grand ou petit comparativement au numero secret a trouver.\n\n\n";
}
void version()
{
    cout << ".............\n";
    cout << "software created by Vijey GAME Designer Rasam ! (C)2016\n";
    cout << "version du logiciel: console 2.0\n";
    cout << "adresse du noyau: 00PN33Q27F2\n\n\n";
}
/** Prototypes de la fonction*/
void version();
void presentation();
void Start();
void GetResults();

int  i, j, life, death, reference;
char choix;

void Start()
{
     i = 0;
     j = 0;
     life = 0;
     death = -1;
     reference = 0;

     cout << "Choisissez le niveau de difficulte:\n"; // the user has to select a difficulty level
     cout << "1 : Facile (0-15)\n";
     cout << "2 : Moyen (0-30)\n";
     cout << "3 : Difficile (0-50)\n\n";
     cout << "Ou appuyer sur un autre touche pour quitter !\n";

     cin >> choix;                   // read the user's choice
     cout << "\n";

     switch (choix)
     {
        case '1' : reference = 15;  // the random number will be between 0 and reference
        break;
        case '2' : reference = 30;
        break;
        case '3' : reference = 50;
        break;
        default :
        system("color 9");
        version();
        system("pause");
        exit(0);
        break;
     }

     life = 5;         // number of life of the player
     srand((unsigned) time( NULL )); // init Rand() function
     j = rand() % reference;  // j get a random value between 0 and reference

     GetResults();

}

void GetResults()
{
    string nom;
    int bonus(25), apresBonus(75);
    int const tableau(5);
    int taille[tableau];
    taille[0] = 50;
    taille[1] = 40;
    taille[2] = 30;
    taille[3] = 20;
    taille[4] = 10;
     if (life <= 0)
        // if player has no more life then he lose
     {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "                             *******************\n";
        cout << "                             ** TU AS PERDU ! **\n";
        cout << "                             ****** 0Point *****\n";
        cout << "\n\n\n\n\n\n\n\n";
        system("color c");
        system("PAUSE");
        system("color a");
        system("cls");
        Start();
     }

     cout << "Choisissez un chiffre: \n";
     cin >> i;          // read user's number

     if ((i > reference) || (i < 0)) // if the user number isn't correct, restart
     {
        cout << "Erreur : Chiffre n'est pas compris entre 0 et \n" << reference;
        GetResults();
     }

     if ((i == j) && (life == 5))
     {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "                           ***************************\n";
        cout << "                           ** BRAVO, TU AS GAGNER ! **\n"; // the user found the secret number
        cout << "                           ******** "<< taille[0] <<"Points *********\n";
        cout << "\n\n\n\n\n\n\n\n";
        cout << "Entrer votre nom:"<<endl;
        cin >> nom;
        cout << "\n";
        cout << "Felicitation "<< nom << ", vous etes le meilleur joueur de JackPot!"<<endl;
        cout << "Bonus: "<<bonus<<"Points"<<endl;
        cout << nom <<", vous avez maintenant: "<< apresBonus<< "Points"<<endl<<endl;
        system("color d");
        system("PAUSE");
        system("color a");
        system("cls");
        Start();
     }
     if ((i == j) && (life == 4))
     {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "                           ***************************\n";
        cout << "                           ** BRAVO, TU AS GAGNER ! **\n"; // the user found the secret number
        cout << "                           ******** "<< taille[1] <<"Points *********\n";
        cout << "\n\n\n\n\n\n\n\n";
        system("color d");
        system("PAUSE");
        system("color a");
        system("cls");
        Start();
     }
     if ((i == j) && (life == 3))
     {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "                           ***************************\n";
        cout << "                           ** BRAVO, TU AS GAGNER ! **\n"; // the user found the secret number
        cout << "                           ******** "<< taille[2] <<"Points *********\n";
        cout << "\n\n\n\n\n\n\n\n";
        system("color d");
        system("PAUSE");
        system("color a");
        system("cls");
        Start();
     }
     if ((i == j) && (life == 2))
     {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "                           ***************************\n";
        cout << "                           ** BRAVO, TU AS GAGNER ! **\n"; // the user found the secret number
        cout << "                           ******** "<< taille[3] <<"Points *********\n";
        cout << "\n\n\n\n\n\n\n\n";
        system("color d");
        system("PAUSE");
        system("color a");
        system("cls");
        Start();
     }
     if ((i == j) && (life == 1))
     {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "                           ***************************\n";
        cout << "                           ** BRAVO, TU AS GAGNER ! **\n"; // the user found the secret number
        cout << "                           ******** "<< taille[4] <<"Points *********\n";
        cout << "\n\n\n\n\n\n\n\n";
        system("color d");
        system("PAUSE");
        system("color a");
        system("cls");
        Start();
     }

     else if (i > j)
     {
        cout << "Aussi GRAND\n";
        life += death;    // -1 to the user's "life"
        cout << "Niveau de vie: " << life << "\n\n";
        GetResults();
     }

     else if (i < j)
     {
        cout << "Aussi PETIT\n";
        life += death;
        cout << "Niveau de vie: " << life << "\n\n";
        GetResults();
     }
}

int main()
{

     system("color a");
     presentation();
     Start();

     system("PAUSE");
     return 0;
}
