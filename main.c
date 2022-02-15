#include <stdio.h>
#include <stdlib.h>

int tailleChaine(char *chaine);
void afficherCaracteres(char *chaine);

int main() {
    char motSecret[13];

    printf("Entrer un mot secret : ");

    if(motSecret && fgets(motSecret, 13, stdin) != NULL) {
        int *positionEntrer = NULL;
        printf("%s", motSecret);

        printf("%d", tailleChaine(motSecret));
    }

    return 0;
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
