#include <stdio.h>

void oyunBilgi() {
    printf("Sayi Bulmaca !!");
    printf("\nOyunun Amaci Bir Sayi Girerek,");
    printf("\nBilgisayarin Tuttugu Sayiyi Bulmak.");
    printf("\n\nEger Oyuna Hazirsan Asagiya Bir Deger Gir:))");
    printf("\nUnutma Oyun Bilgisayarin Tuttugu Sayiyi Bulana Kadar Devam Eder!");
    printf("\nIyi Oyunlar !!");
}

void oyunSistem() {
    int kullaniciGirdisi;
    int makineSayisi = 35;

    oyun:
    printf("\n\nLutfen Bir Deger Gir: ");
    scanf("%d", &kullaniciGirdisi);
    if(kullaniciGirdisi < makineSayisi) {
        printf("Dostum Maalesef Bilgisayarin Tuttugu Degerden KUCUK Bir Deger Girdin.");
        goto oyun;
    } else if(kullaniciGirdisi > makineSayisi) {
        printf("Dostum Maalesef Bilgisayarin Tuttugu Degerden BUYUK Bir Deger Girdin.");
        goto oyun;
    } else if(kullaniciGirdisi == makineSayisi) {
        printf("TEBRIKLER!\nOyunu KAZANDIN!");
    }
}
int main() {
    oyunBilgi();
    oyunSistem();
    return 0;
}
