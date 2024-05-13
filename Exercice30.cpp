/*
Écrire 2 fonctions à un argument entier et une valeur de retour entière
permettant de préciser si l’argument reçu est multiple de 2 (pour la première
fonction) ou multiple de 3 (pour la seconde fonction).
Utiliser ces deux fonctions dans un petit programme qui lit un nombre entier et
qui précise s’il est pair, multiple de 3 et/ou multiple de 6
*/

#include <iostream>
using namespace std ;
int mul2 (int n)
{   if (n%2) return 0 ;
        else return 1 ;
}
int mul3 (int n)
{    if (n%3) return 0 ;
        else return 1 ;
}
int main()
{   int mul2 (int) ;
    int mul3 (int) ;
    int n ;
    cout << "donnez un entier : " ;
    cin >> n ;
    if (mul2(n)) cout << "il est pair\n" ;
    if (mul3(n)) cout << "il est multiple de 3\n" ;
    if (mul2(n) && mul3(n)) cout << "il est divisible par 6\n" ;
}

/* Résultat :
donnez un entier : 60
il est pair
il est multiple de 3
il est divisible par 6


=== Code Execution Successful ===
*/
