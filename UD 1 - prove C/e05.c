#include <stdio.h>
int main (){
    int a=0;
    int b=0;
    int c=0;

    printf("inserisci il primo valore: ");
    scanf("%d", &a);

    printf("inserisci il secondo valore: ");
    scanf("%d", &b);

    printf("stampa la variabile %d %d \n", a, b);

    c=a;
    a=b;
    b=c;

    printf("stampa la variabile %d %d \n", a, b);

    return 0;
}











