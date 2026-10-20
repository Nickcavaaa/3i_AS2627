/*
    data 20.10.2026
    author: nicolas.cavagna
    descripition semplice programma che somma due valori richiesti in input.
*/
#include <stdio.h>

int main(){
    // dichiarazione delle variabili necessarie al nostro algoritmo
    int a;
    int b;
    int c;
    // junk e usata per pulire il buffer nelle frasi di input
    char junk;
    
    // inizializzazione delle variabili 
    a = 0; 
    b = 0;
    c = 0;

    // fase di input dei valori A e B
    printf("inserisci il valore a: ");
   scanf("%d", &a);
   junk = getchar();

   printf("inserisci il valore b:");
   scanf("%d", &b);
   junk = getchar();

   // calcolo in c la somma dei valori a e b 
   c = a + b;

   // comunico il valore della somma
   printf("la somma vale: %d\n", c);
   
    return 0;
}