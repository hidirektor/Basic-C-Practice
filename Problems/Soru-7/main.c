#include <stdio.h>

int kareler_toplami(int karelertoplamidegeri) {

    int i, toplam = 0;
    for(i=0; i<=karelertoplamidegeri; i++){
        toplam += i*i;
    }
    return toplam;
}
int kup(int kupdegeri) {

    int toplam;
    toplam = kupdegeri*kupdegeri*kupdegeri;
    return toplam;

}
int main() {
    int sayi, i;
    int toplam,kupdegeri, karelertoplamidegeri;

    printf("Lutfen Bir Sayi Gir: ");
    scanf("%d", &sayi);

    toplam = kup(sayi) + kareler_toplami(sayi);
    kupdegeri = kup(sayi);
    karelertoplamidegeri = kareler_toplami(sayi);
    printf("Girilen Sayi: %d", sayi);
    printf("\nKareler Toplami: %d", karelertoplamidegeri);
    printf("\nSayinin Kubu: %d", kupdegeri);
    printf("\nKareler Toplami + Kup Toplami: %d", toplam);
    
    return 0;
}
