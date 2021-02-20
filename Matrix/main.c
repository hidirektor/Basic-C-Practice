#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

struct Matris {
    int satirSayisi;
    int sutunSayisi;
    int **matris;
    int transpoze[10000];
};
struct Matris mtr;

void matrisSatirSutunBilgisi() {
    printf("Satir Sayisini Giriniz: ");
    scanf("%d", &mtr.satirSayisi);
    if (mtr.sutunSayisi > 100) {
        printf("Dostum Maalesef Maksimum 100 Boyutlu Bir Matris Olusturabilirsin.");
        exit(1);
    }
    printf("Sutun Sayisini Giriniz: ");
    scanf("%d", &mtr.sutunSayisi);
    if (mtr.sutunSayisi > 100) {
        printf("Dostum Maalesef Maksimum 100 Boyutlu Bir Matris Olusturabilirsin.");
        exit(1);
    }
}

void matrisOlustur() {
    srand(time(NULL));
    static int i,j;
    mtr.matris = (int**)malloc(mtr.satirSayisi*sizeof(int*));
    for(i=0; i<mtr.satirSayisi; i++) {
        mtr.matris[i] = (int*)malloc(mtr.sutunSayisi*sizeof(int));
        for(j=0; j<mtr.sutunSayisi; j++) {
            mtr.matris[i][j] = (int*)malloc(mtr.sutunSayisi*sizeof(int));
            mtr.matris[i][j]=5 + rand()%40000;
        }
    }
}

void matrisSirala() {
    srand(time(NULL));
    int i,j,t;
    int gecici;
    for(t=1; t<(mtr.satirSayisi*mtr.sutunSayisi); t++) {
        for(i=0; i<mtr.satirSayisi; i++) {
            for(j=0; j<mtr.sutunSayisi-1; j++) {
                if (mtr.matris[i][j]>mtr.matris[i][j+1]) {
                    gecici=mtr.matris[i][j];
                    mtr.matris[i][j]=mtr.matris[i][j+1];
                    mtr.matris[i][j+1]=gecici;
                }
            }
        }
        for(i=0; i<mtr.satirSayisi-1; i++) {
            if (mtr.matris[i][mtr.sutunSayisi-1]>mtr.matris[i+1][0]) {
                gecici=mtr.matris[i][mtr.sutunSayisi-1];
                mtr.matris[i][mtr.sutunSayisi-1]=mtr.matris[i+1][0];
                mtr.matris[i+1][0]=gecici;
            }
        }
    }
}

void matrisYazdir() {
    int i, j;
    for(i=0; i<mtr.satirSayisi; i++) {
        for(j=0; j<mtr.sutunSayisi; j++) {
            printf("%d\t", mtr.matris[i][j]);
        }
        printf("\n");
    }
}

void matrisTranspoze() {
    int i,j;

    for(i=0;i<mtr.sutunSayisi;i++) {
        for(j=0;j<mtr.satirSayisi;j++) {
            printf("%d\t", mtr.matris[j][i]);
        }
        printf("\n");
    }
}

void matrisSave() {
    int i, j;
    FILE *hedef_dosya;
    hedef_dosya = fopen("transpoze.txt", "w+");
    fprintf(hedef_dosya, "Matrisin İlk Hali: \n");
    for(i=0; i<mtr.satirSayisi; i++) {
        for(j=0; j<mtr.sutunSayisi; j++) {
            fprintf(hedef_dosya, "%d\t", mtr.matris[i][j]);
        }
        fprintf(hedef_dosya, "\n");
    }
    printf("\nMatris Basariyla transpoze.txt Dosyasina Yazildi.");
    fclose(hedef_dosya);
}

void matrisTranspozeSave() {
    int i, j;
    FILE *hedef_dosya;
    hedef_dosya = fopen("transpoze.txt", "a");
    fprintf(hedef_dosya, "\nMatrisin Transpozeli Hali: \n");
    for(i=0;i<mtr.sutunSayisi;i++) {
        for(j=0;j<mtr.satirSayisi;j++) {
            fprintf(hedef_dosya, "%d\t", mtr.matris[j][i]);
        }
        fprintf(hedef_dosya, "\n");
    }
    printf("\nMatrisin Transpozesi Basariyla transpoze.txt Dosyasina Yazildi.");
    fclose(hedef_dosya);
}

bool kaprekarKontrol(int n) {
    if (n == 1) {
        return true;
    }
    int sayikare = n*n;
    int mid = 0;
    while (sayikare) {
        mid++;
        sayikare /= 10;
    }
    sayikare = n*n;
    for (int sag=1; sag<mid; sag++) {
        int ntc = pow(10, sag);
        if (ntc == n) {
            continue;
        }
        int toplam = ((sayikare/ntc) + sayikare) % ntc;
        if (toplam == n) {
            return true;
        }
    }
    return false;
}

void diziElemanlariniKaydet() {
    int i, j, matrisElemani[10000];
    FILE *hedef_dosya;
    hedef_dosya = fopen("matrisElemanlari.txt", "w+");
    for(i=0;i<mtr.sutunSayisi;i++) {
        for(j=0;j<mtr.satirSayisi;j++) {
            fprintf(hedef_dosya, "%d ", mtr.matris[j][i]);
        }
    }
    printf("\nTranspozeli Matrisin Elemanlari Basariyla matrisElemanlari.txt Dosyasina Yazildi.");
    fclose(hedef_dosya);
    hedef_dosya = fopen("matrisElemanlari.txt", "r");
    printf("\n");
    for (i = 0; i<mtr.satirSayisi*mtr.sutunSayisi; i++){
        fscanf(hedef_dosya, "%d ", &matrisElemani[i]);
        mtr.transpoze[i] = matrisElemani[i];
        //printf("%d ", matrisElemani[i]);
    }
    fclose(hedef_dosya);

}

void kaprekarSave() {
    int i;
    FILE *kaprekar_dosya;
    kaprekar_dosya = fopen("kaprekar.txt", "w+");
    fprintf(kaprekar_dosya, "Transpozeli Matrisin Kaprekar Olan Elemanları: \n");
    fclose(kaprekar_dosya);
    for (i = 0; i<mtr.satirSayisi*mtr.sutunSayisi; i++){
        if (kaprekarKontrol(mtr.transpoze[i])==true) {
            kaprekar_dosya = fopen("kaprekar.txt", "a+");
            fprintf(kaprekar_dosya, "%d ", mtr.transpoze[i]);
            fclose(kaprekar_dosya);
        }
    }
    printf("\nTranspozesi Alinan Matrisin,");
    printf("\nKaprekar Olan Elemanlari kaprekar.txt Dosyasina Kaydedilir.");
    printf("\nEger Hicbir Elemani Kaprekar Degilsi Dosyada Sadece");
    printf("\nTranspozeli Matrisin Kaprekar Olan Elemanları:");
    printf("\nYazisini Gorursunuz...");
}

void matrisSistem() {
    matrisSatirSutunBilgisi();
    matrisOlustur();
    printf("\nMatrisin Ilk Hali: \n");
    matrisYazdir();
    printf("\nMatrisin Siralanmis Hali: \n");
    matrisSirala();
    matrisYazdir();
    matrisSave();
    printf("\nMatrisin Transpozeli Hali: \n");
    matrisTranspoze();
    matrisTranspozeSave();
    diziElemanlariniKaydet();
    kaprekarSave();
    free(mtr.matris);
}

int main() {
    matrisSistem();
    return 0;
}
