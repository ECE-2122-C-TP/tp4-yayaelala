#include <stdio.h>
#include "fonctions.h"

int getMax(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}
int saisirEntier() {
    int a=0;
    printf ("saisir un entier :");
    scanf ("%d", &a);
    return a;
}
int calculAire(int longueur, int largeur){
    return longueur * largeur;
}
int calculPerimetre(int longueur, int largeur){
    return (longueur + largeur)*2;
}
int comparer(int a, int b){
    if (a%b==0){
        return 1;
    }
    return 0;
}
int multiple_3(int a){
    if (a%3==0){
        return 1;
    }
    return 0;
}
int superieur10(int a){
    if (a>=10){
        return 1;
    }
    return 0;
}
float moyenne (int a, int b, int c){
        return (a+b+c)/3;
}