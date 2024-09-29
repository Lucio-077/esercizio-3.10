#include <stdio.h>

int main(void) {
    float eta,prezzo;
    printf("Inserisci eta: ");
    scanf("%f",&eta);
    if (eta<5) {
        printf("il prezzo e' gratis!");
    }
    else if (eta==10) {
        printf("il prezzo e' 1 euro");
    }
    else
        if (eta>=11 && eta<=17) {
            printf("il prezzo e' 1.50 euro");
        }
        else if (eta>=18 && eta<=26) {
            printf("il prezzo e' 2 euro");
        }
    else if (eta>26) {
        printf("il prezzo e' 3 euro");
    }
}

