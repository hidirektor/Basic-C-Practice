#include <stdio.h>

int main() {
    char halitipi;
    float metrekare;
    printf("Fiyatlandirmalar:");
    printf("\nTweety Tipi Hali Icin: ");
    printf("\nKodu: T");
    printf("\nMetrakere Fiyat: 18.80 TL");
    printf("\nBugsBunny Tipi Hali Icin: ");
    printf("\nKodu: B");
    printf("\nMetrakere Fiyat: 17.80 TL");
    printf("\nSpiderman Tipi Hali Icin: ");
    printf("\nKodu: S");
    printf("\nMetrakere Fiyat: 19.20 TL");
    printf("\n\nLutfen Halinin Boyutunu Girin: ");
    scanf("%f", &metrekare);
    printf("\nLutfen Bir Hali Tipi Girin: ");
    scanf("%s", &halitipi);
    if (halitipi == 'T') {
        float ToplamFiyatT = metrekare * 18.80;
        printf("\n\nSecilen Hali Tipi: T");
        printf("\nHali Boyutu: %.2f m2", metrekare);
        printf("\nOdenecek Miktar: %.2f TL", ToplamFiyatT);
    } else if (halitipi == 'B') {
        float ToplamFiyatT = metrekare * 17.80;
        printf("\n\nSecilen Hali Tipi: B");
        printf("\nHali Boyutu: %.2f m2", metrekare);
        printf("\nOdenecek Miktar: %.2f TL", ToplamFiyatT);
    } else if (halitipi == 'S') {
        float ToplamFiyatT = metrekare * 19.20;
        printf("\n\nSecilen Hali Tipi: S");
        printf("\nHali Boyutu: %.2f m2", metrekare);
        printf("\nOdenecek Miktar: %.2f TL", ToplamFiyatT);
    } else {
        printf("\nLutfen Gecerli Bir Hali Tipi Girin");
    }
    return 0;
}
