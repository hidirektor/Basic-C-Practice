#include <stdio.h>

int main() {
    int sayi, sayi2, toplam=0, onlarbasamagi, yuzlerbasamagi;

    for(sayi=100; sayi<1000; sayi++) {
        yuzlerbasamagi=sayi/100;
        sayi2=sayi-(yuzlerbasamagi*100);
        onlarbasamagi=sayi2/10;
        if(onlarbasamagi == 8 && sayi % 3 == 0) {
            printf("%d Sayisinin Onlar Basamagi 8 ve 3 e bolunebiliyor.\n", sayi);
            toplam += sayi;
        }
    }
    printf("Bu Sayilarin Toplami: %d", toplam);
}
