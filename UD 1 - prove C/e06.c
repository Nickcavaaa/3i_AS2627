#include <stdio.h>
int main(){
    int v1,v2,v3,v4;
    int somma;
    char junk;  
    
    printf("inserisci il primo valore");
    scanf("%d",&v1);
    junk = getchar();
   
    printf("inserisci il secondo valore");
    scanf("%d",&v2);
    junk = getchar();
   
   
    printf("inserisci il terzo valore");
    scanf("%d",&v3);
    junk = getchar();
    
    printf("inserisci il quarto valore");
    scanf("%d",&v4);
    junk= getchar();

    somma=0;
    
    if((v1 >=10)  &&  (v1 <=20)) {
        printf("valore v1: %d\n", v1);
        somma = somma + v1;
    }
    if((v2 >=10)  && (v2 <=20)){
        printf("valore v2: %d\n", v2);
        somma = somma + v2;
    }
    if((v3 >=10)  && (v3 <=20)){
        printf("valore v3: %d\n", v3);
        somma = somma + v3;
    }
    if((v4 >=10)  && (v4 <=20)){
        printf("valore v4: %d\n", v4);
        somma = somma + v4;

    }
    
    printf("\nsomma dei valori idonei: %d\n", somma);

    return 0;
}