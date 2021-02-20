#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

struct Parkur {
    int parkurUzunluk;
    int yarismaciHP;
    int engelSayisi;
    //int engelMesafe[5];
    int **engelMesafe;
};
struct Parkur prkr;

void genelBilgiler() {
    srand(time(NULL));
    prkr.yarismaciHP=100;
    FILE *hedef_dosya;
    hedef_dosya = fopen("log.txt", "w+");
    printf("Yarismacinin Cani: %d HP\n", prkr.yarismaciHP);
    fprintf(hedef_dosya, "Yarismacinin Cani: %d HP\n", prkr.yarismaciHP);
    fclose(hedef_dosya);
}

void parkurOlustur() {
    prkr.parkurUzunluk = 50 + rand()%51;
    FILE *hedef_dosya;
    hedef_dosya = fopen("log.txt", "a");
    printf("Parkur Uzunlugu: %d Metre\n", prkr.parkurUzunluk);
    fprintf(hedef_dosya, "Oyun İle İlgili Genel Bilgiler:\n");
    fprintf(hedef_dosya, "Parkur Uzunluğu: %d Metre\n", prkr.parkurUzunluk);
    fclose(hedef_dosya);
}

void engelOlustur() {
    prkr.engelSayisi = 2 + rand() % 4;
    FILE *hedef_dosya;
    hedef_dosya = fopen("log.txt", "a");
    printf("Parkurdaki Engel Sayisi: %d Engel\n", prkr.engelSayisi);
    fprintf(hedef_dosya, "Parkurdaki Engel Sayısı: %d Engel\n", prkr.engelSayisi);
    fclose(hedef_dosya);
}

void engelMesafeOlustur() {
    randomSistem:
    printf(" ");
    int i;
    prkr.engelMesafe = (int**)malloc(prkr.engelSayisi*sizeof(int*));
    int temp=2+(rand()%prkr.parkurUzunluk);
    prkr.engelMesafe[0]=temp;
    for(i=1;i<prkr.engelSayisi;i++) {
        int a;
        int k;
        do {
            k=0, a=0;
            srand(time(NULL));
            temp=2+(rand()%prkr.parkurUzunluk);
            for(;k<i;k++) {
                if(temp==prkr.engelMesafe[k]) {
                    a=a+1;
                }
            }
        }while(a>0);
        prkr.engelMesafe[i]=temp;
    }
    int t;
    for(t=0; t<prkr.engelSayisi; t++) {
        if(prkr.engelMesafe[t] > prkr.parkurUzunluk) {
            goto randomSistem;
        } else {
            continue;
        }
    }
}

void engelMesafeleriSirala() {
    int i,gecici,tut;

    for(gecici=1;gecici<10;gecici++) {
        for (i=0;i<prkr.engelSayisi - 1;i++) {
            if (prkr.engelMesafe[i]>prkr.engelMesafe[i+1]) {
                tut=prkr.engelMesafe[i];
                prkr.engelMesafe[i]=prkr.engelMesafe[i+1];
                prkr.engelMesafe[i+1]=tut;
            }
        }
    }
    int s;
    FILE *hedef_dosya;
    hedef_dosya = fopen("log.txt", "a");
    printf("Engel Mesafeleri: \n");
    fprintf(hedef_dosya, "Engel Mesafeleri:\n");
    for(s=0;s<prkr.engelSayisi; s++) {
        printf("%d\t", prkr.engelMesafe[s]);
        fprintf(hedef_dosya, "%d\t", prkr.engelMesafe[s]);
    }
    printf("\n");
    fprintf(hedef_dosya, "\n");
    fclose(hedef_dosya);
}

bool asallikKontrol(int j, int k) {
    int i,s=0,ks;
    if(j<k) {
        ks = j;
    } else {
        ks = k;
    }
    for(i=2;i<=ks;i++) {
        if(j%i==0 && k%i==0) s=1;
    }
    if (s==0) {
        return true;
    }
    else {
        return false;
    }
}

void yarismaSistemi() {
    int i = 0;
    printf("Yarisma BASLADI !!\n");
    FILE *hedef_dosya;
    hedef_dosya = fopen("log.txt", "a");
    fprintf(hedef_dosya, "Yarışma BAŞLADI !!\n");
    do {
        switch(prkr.engelSayisi) {
            case 2:
                if (i == prkr.engelMesafe[0] || i == prkr.engelMesafe[1]) {
                    parkurKontrol:
                    printf("Yarismaci %d. Metreye Kadar Bir Engelle Karsilasmadi.\n", i);
                    fprintf(hedef_dosya, "Yarışmacı %d. Metreye Kadar Bir Engelle Karşılaşmadı.\n", i);
                    if (asallikKontrol(i,prkr.yarismaciHP) == true) {
                        printf("%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal.\n", i, prkr.yarismaciHP, i);
                        fprintf(hedef_dosya, "%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal.\n", i, prkr.yarismaciHP, i);
                        prkr.yarismaciHP = prkr.yarismaciHP - i;
                        printf("Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        if (prkr.yarismaciHP == 0 || prkr.yarismaciHP <0) {
                            printf("Maalesef Oyunu Kaybettin.\n");
                            fprintf(hedef_dosya, "Maalesef Oyunu Kaybettin.\n");
                            exit(0);
                        } else {
                            i++;
                        }
                    } else {
                        printf("%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal Degildir.\n", i, prkr.yarismaciHP, i);
                        fprintf(hedef_dosya, "%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal Degildir.\n", i, prkr.yarismaciHP, i);
                        printf("Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                    }
                } else if(i == prkr.parkurUzunluk) {
                    if (i != prkr.engelMesafe[0] || i != prkr.engelMesafe[1]) {
                        printf("TEBRIKLER!!\n");
                        fprintf(hedef_dosya, "TEBRIKLER!!\n");
                        printf("Oyunu %d HP Ile Kazandin.\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Oyunu %d HP Ile Kazandin.\n", prkr.yarismaciHP);
                    } else {
                        goto parkurKontrol;
                    }
                }
                i++;
            case 3:
                if (i == prkr.engelMesafe[0] || i == prkr.engelMesafe[1] || i == prkr.engelMesafe[2]) {
                    parkurKontrol2:
                    printf("Yarismaci %d. Metreye Kadar Bir Engelle Karsilasmadi.\n", i);
                    fprintf(hedef_dosya, "Yarışmacı %d. Metreye Kadar Bir Engelle Karşılaşmadı.\n", i);
                    if (asallikKontrol(i,prkr.yarismaciHP) == true) {
                        printf("%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal.\n", i, prkr.yarismaciHP, i);
                        fprintf(hedef_dosya, "%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal.\n", i, prkr.yarismaciHP, i);
                        prkr.yarismaciHP = prkr.yarismaciHP - i;
                        printf("Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        if (prkr.yarismaciHP == 0 || prkr.yarismaciHP <0) {
                            printf("Maalesef Oyunu Kaybettin.\n");
                            fprintf(hedef_dosya, "Maalesef Oyunu Kaybettin.\n");
                            exit(0);
                        } else {
                            i++;
                        }
                    } else {
                        printf("%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal Degildir.\n", i, prkr.yarismaciHP, i);
                        fprintf(hedef_dosya, "%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal Degildir.\n", i, prkr.yarismaciHP, i);
                        printf("Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                    }
                } else if(i == prkr.parkurUzunluk) {
                    if (i != prkr.engelMesafe[0] || i != prkr.engelMesafe[1] || i != prkr.engelMesafe[2]) {
                        printf("TEBRIKLER!!\n");
                        fprintf(hedef_dosya, "TEBRIKLER!!\n");
                        printf("Oyunu %d HP Ile Kazandin.\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Oyunu %d HP Ile Kazandin.\n", prkr.yarismaciHP);
                    } else {
                        goto parkurKontrol2;
                    }
                }
                i++;
            case 4:
                if (i == prkr.engelMesafe[0] || i == prkr.engelMesafe[1] || i == prkr.engelMesafe[2] || i == prkr.engelMesafe[3]) {
                    parkurKontrol3:
                    printf("Yarismaci %d. Metreye Kadar Bir Engelle Karsilasmadi.\n", i);
                    fprintf(hedef_dosya, "Yarışmacı %d. Metreye Kadar Bir Engelle Karşılaşmadı.\n", i);
                    if (asallikKontrol(i,prkr.yarismaciHP) == true) {
                        printf("%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal.\n", i, prkr.yarismaciHP, i);
                        fprintf(hedef_dosya, "%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal.\n", i, prkr.yarismaciHP, i);
                        prkr.yarismaciHP = prkr.yarismaciHP - i;
                        printf("Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        if (prkr.yarismaciHP == 0 || prkr.yarismaciHP <0) {
                            printf("Maalesef Oyunu Kaybettin.\n");
                            fprintf(hedef_dosya, "Maalesef Oyunu Kaybettin.\n");
                            exit(0);
                        } else {
                            i++;
                        }
                    } else {
                        printf("%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal Degildir.\n", i, prkr.yarismaciHP, i);
                        fprintf(hedef_dosya, "%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal Degildir.\n", i, prkr.yarismaciHP, i);
                        printf("Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                    }
                } else if(i == prkr.parkurUzunluk) {
                    if (i != prkr.engelMesafe[0] || i != prkr.engelMesafe[1] || i != prkr.engelMesafe[2] || i != prkr.engelMesafe[3]) {
                        printf("TEBRIKLER!!\n");
                        fprintf(hedef_dosya, "TEBRIKLER!!\n");
                        printf("Oyunu %d HP Ile Kazandin.\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Oyunu %d HP Ile Kazandin.\n", prkr.yarismaciHP);
                    } else {
                        goto parkurKontrol3;
                    }
                }
                i++;
            case 5:
                if (i == prkr.engelMesafe[0] || i == prkr.engelMesafe[1] || i == prkr.engelMesafe[2] || i == prkr.engelMesafe[3]) {
                    parkurKontrol4:
                    printf("Yarismaci %d. Metreye Kadar Bir Engelle Karsilasmadi.\n", i);
                    fprintf(hedef_dosya, "Yarışmacı %d. Metreye Kadar Bir Engelle Karşılaşmadı.\n", i);
                    if (asallikKontrol(i,prkr.yarismaciHP) == true) {
                        printf("%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal.\n", i, prkr.yarismaciHP, i);
                        fprintf(hedef_dosya, "%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal.\n", i, prkr.yarismaciHP, i);
                        prkr.yarismaciHP = prkr.yarismaciHP - i;
                        printf("Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        if (prkr.yarismaciHP == 0 || prkr.yarismaciHP <0) {
                            printf("Maalesef Oyunu Kaybettin.\n");
                            fprintf(hedef_dosya, "Maalesef Oyunu Kaybettin.\n");
                            exit(0);
                        } else {
                            i++;
                        }
                    } else {
                        printf("%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal Degildir.\n", i, prkr.yarismaciHP, i);
                        fprintf(hedef_dosya, "%d. Metrede Bir Engel Var. %d ve %d Aralarinda Asal Degildir.\n", i, prkr.yarismaciHP, i);
                        printf("Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Yarismaci HP: %d HP\n", prkr.yarismaciHP);
                    }
                } else if(i == prkr.parkurUzunluk) {
                    if (i != prkr.engelMesafe[0] || i != prkr.engelMesafe[1] || i != prkr.engelMesafe[2] || i != prkr.engelMesafe[3] || i != prkr.engelMesafe[4]) {
                        printf("TEBRIKLER!!\n");
                        fprintf(hedef_dosya, "TEBRIKLER!!\n");
                        printf("Oyunu %d HP Ile Kazandin.\n", prkr.yarismaciHP);
                        fprintf(hedef_dosya, "Oyunu %d HP Ile Kazandin.\n", prkr.yarismaciHP);
                    } else {
                        goto parkurKontrol4;
                    }
                }
                i++;
        }
    }while(i<prkr.parkurUzunluk+1);
    fclose(hedef_dosya);
}

void parkurSistem() {
    genelBilgiler();
    parkurOlustur();
    engelOlustur();
    engelMesafeOlustur();
    engelMesafeleriSirala();
    yarismaSistemi();
}

int main() {
    parkurSistem();
    free(prkr.engelMesafe);
    return 0;
}
