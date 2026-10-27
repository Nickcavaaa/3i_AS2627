#include <stdio.h>

int main () {

    float lato_1 = 0;
    float lato_2 = 0;
    float perimetro = 0;
    float area = 0;

    char junk;

    printf("inserisci la lunghezza del primo lato");
    scanf("%f" , &lato_1);
    junk = getchar();

    printf("inserisci la lunghezza del secondo lato");
    scanf("%f" , &lato_2);
    junk = getchar();

    if(lato_1 == lato_2); {
      perimetro = lato_1 * 4;
      printf("la figura e un quadrato,perimetro = %.2f \n ", perimetro);
    }
    else{
        area = lato_1 * lato_2;
        printf("la figura e un rettangolo, area = %.2f \n ", area);
    }
    
    
    return 0;













}