#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rechercheChar(char *chaine, char caractere);
int tailleChaine(char *chaine);
void afficherCaracteres(char *chaine);
void supprimerCaractereEntree(char *chaine);

int main() {
    char motSecret[15];
    int randNum = 0;

    srand(time(0));

    printf("Entrer un mot secret : ");

    if(motSecret && fgets(motSecret, 15, stdin) != NULL) {
        int *positionEntrer = NULL;

        supprimerCaractereEntree(motSecret);

        for(int i = 0; i < tailleChaine(motSecret); i++) {
            randNum = rand() % tailleChaine(motSecret);

            printf("%c\n", motSecret[randNum]);
        }

        afficherCaracteres(motSecret);
    }

    return 0;
}

int rechercheChar(char *chaine, char caractere) {
    int position = 0, i;

    if(caractere) {
        for(i = 0; chaine[i] != caractere; i++) {
            position++;
            if(i > tailleChaine(chaine)) {
                return -1;
            }
        }
        return position;
    }
    return -1;
}

int tailleChaine(char *chaine) {
    int taille = 0;
    for(int i = 0; chaine[i] != '\0'; i++) {
        taille++;
    }
    return taille;
}

void afficherCaracteres(char *chaine) {
    for(int i = 0; chaine[i] != '\0'; i++) {
        printf("%d : %c(%d)\n", i, chaine[i], chaine[i]);
    }
}

void supprimerCaractereEntree(char *chaine) {
    int index = rechercheChar(chaine, '\n');
    if(index) {
        chaine[index] = '\0';
    }
}
