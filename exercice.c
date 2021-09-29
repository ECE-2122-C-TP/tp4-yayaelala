#include <stdio.h>
#include "exercice.h"
#include "fonctions.h"
void exercice1(){
    int a=0;
    int b=0;
    int max=0;
    printf("choisir le premier nombre :");
    scanf ("%d", &a);
    printf("choisir le second nombre : ");
    scanf ("%d", &b);
    max = getMax(a,b);
    printf("Max %d\n", max);
    return;
}
void exercice2(){
    int entier = 0;
    entier = saisirEntier();
    return;

}
void exercice3(){
    int longueur = 0;
    int largeur =0;
    int aire = 0;
    int perim = 0;
    printf ("saisir la valeur de la longueur :");
    scanf ("%d",&longueur);
    printf("saisir la valur de la largeur :");
    scanf ("%d", &largeur);
    aire = calculAire(longueur, largeur);
    perim = calculPerimetre(longueur, largeur);
    printf("l'aire du rectangle est %d: ", aire);
    printf("le périmètre du rectangle est %d:", perim);

    return;
}
void exercice4(){
    int a = 0;
    int b = 0;
    printf("saisir le premier nombre : ");
    scanf("%d",&a);
    printf("saisir le second nombre : ");
    scanf("%d",&b);
    printf ("est-ce que nombre1 est multiple de nombre2 : %d\n" , comparer(a,b));
    printf ("est-ce que nombre1 est multiple de 3 : %d\n" , multiple_3(a));
    printf ("est-ce que nombre1 est supérieur à 10 : %d\n" , superieur10(a));
    return;
    }
void exercice5(){
    int a = 0;
    int b = 0;
    int c =0;
    printf("saisir le premier nombre : ");
    scanf("%d",&a);
    printf("saisir le second nombre : ");
    scanf("%d",&b);
    printf("saisir le troisième nombre : ");
    scanf("%d",&c);
    if (a>20 || a<0 || b>20 || b<0 || c>20 || c<0){
        printf ("-1");
    }
    else {
        printf("la moyenne des 3 nombres est : %f\n ", moyenne(a, b, c));
    }
    return;


}