#include <stdio.h>

int main() {

    int NSayisi;
    int MSayisi;
    int i=1;
    int islem, toplam=0;
    printf("\nLutfen Bir N Sayisi Girin: ");
    scanf("%d", &NSayisi);
    printf("\nLutfen Bir M Sayisi Girin: ");
    scanf("%d", &MSayisi);
    do {
        int j= 1;
        do {
            islem = (i*i) + (2*i*j) + (j*j);
            toplam += islem;
            j++;
        }
        while(j<=MSayisi);
        i++;
    }
    while(i<=NSayisi);
    printf("\nIslem Toplami: %d", toplam);
    return 0;
}
