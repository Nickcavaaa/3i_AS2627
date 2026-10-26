#include <stdio.h>

int main (){

    float a = 0;
    float b = 0;
    float c = 0;
    float avg = 0;

    char junk;

    printf("inserisci il primo valore");
    scanf("%f", &a );
    junk = getchar();
    
    printf("inserisci il secondo valore");
    scanf("%f", &b);
    junk = getchar();

    printf("inserisci il terzo valore");
    scanf("%f", &c);
    junk = getchar();

    avg =(a + b + c)/3;

    printf("la media e: %2f \n", avg);

    if(avg>=6){
        printf("sei stato promosso \n");
    }
    else {
        printf("sei stato bocciato \n");
    }

    return 0;

}