#include <stdio.h>

int main()
{
    int dividendo;
    int divisore;
    int risultato;

    printf("Inserisci il numero da dividere\n");
    scanf("%d", &dividendo);

    for(divisore = 1; divisore <= dividendo; divisore++){
        if(dividendo % divisore == 0){
            risultato = dividendo / divisore;
            printf("%d\n", risultato);
        }
    }

    return 0;
}
