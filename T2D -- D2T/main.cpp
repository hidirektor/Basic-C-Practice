#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

void numberToText() {
    //Milyar
    //Milyon
    //Binler
    //Yüzler
    //Onlar
    //Birler

    __int64 cevirilecekSayi;
    cout << "Lutfen 12 Rakamli Bir Sayi Girin: ";
    cin >> cevirilecekSayi;

    if(cevirilecekSayi > 999999999999 || cevirilecekSayi <100000000000) {
        cout << cevirilecekSayi << " Sayisi 12 Basamakli Degildir !";
    } else {
        cout << "Girilen Sayi: " << cevirilecekSayi;
        cout << "\nSayinin Okunusu: \n";
        switch (cevirilecekSayi/100000000000) {
            case 9:
                cout << "Dokuz Yuz ";
                break;
            case 8:
                cout << "Sekiz Yuz ";
                break;
            case 7:
                cout << "Yedi Yuz ";
                break;
            case 6:
                cout << "Alti Yuz ";
                break;
            case 5:
                cout << "Bes Yuz ";
                break;
            case 4:
                cout << "Dort Yuz ";
                break;
            case 3:
                cout << "Uc Yuz ";
                break;
            case 2:
                cout << "Iki Yuz ";
                break;
            case 1:
                cout << "Yuz ";
                break;
        }
        switch ((cevirilecekSayi%100000000000)/10000000000) {
            case 9:
                cout << "Doksan ";
                break;
            case 8:
                cout << "Seksen ";
                break;
            case 7:
                cout << "Yetmiş ";
                break;
            case 6:
                cout << "Altmis ";
                break;
            case 5:
                cout << "Elli ";
                break;
            case 4:
                cout << "Kirk ";
                break;
            case 3:
                cout << "Otuz ";
                break;
            case 2:
                cout << "Yirmi ";
                break;
            case 1:
                cout << "On ";
                break;
            case 0:
                break;
        }
        switch ((cevirilecekSayi%10000000000)/1000000000) {
            case 9:
                cout << "Dokuz Milyar ";
                break;
            case 8:
                cout << "Sekiz Milyar ";
                break;
            case 7:
                cout << "Yedi Milyar ";
                break;
            case 6:
                cout << "Alti Milyar ";
                break;
            case 5:
                cout << "Bes Milyar ";
                break;
            case 4:
                cout << "Dort Milyar ";
                break;
            case 3:
                cout << "Uc Milyar ";
                break;
            case 2:
                cout << "Iki Milyar ";
                break;
            case 1:
                cout << "Bir Milyar ";
                break;
            case 0:
                cout << "Milyar ";
                break;
        }
        switch ((cevirilecekSayi%1000000000)/100000000) {
            case 9:
                cout << " Dokuz Yuz ";
                break;
            case 8:
                cout << " Sekiz Yuz ";
                break;
            case 7:
                cout << " Yedi Yuz ";
                break;
            case 6:
                cout << " Alti Yuz ";
                break;
            case 5:
                cout << " Bes Yuz ";
                break;
            case 4:
                cout << " Dort Yuz ";
                break;
            case 3:
                cout << " Uc Yuz ";
                break;
            case 2:
                cout << " Iki Yuz ";
                break;
            case 1:
                cout << " Yuz ";
                break;
            case 0:
                break;
        }
        switch ((cevirilecekSayi%100000000)/10000000) {
            case 9:
                cout << "Doksan ";
                break;
            case 8:
                cout << "Seksen ";
                break;
            case 7:
                cout << "Yetmis ";
                break;
            case 6:
                cout << "Altmis ";
                break;
            case 5:
                cout << "Elli ";
                break;
            case 4:
                cout << "Kirk ";
                break;
            case 3:
                cout << "Otuz ";
                break;
            case 2:
                cout << "Yirmi ";
                break;
            case 1:
                cout << "On ";
                break;
            case 0:
                break;
        }
        switch ((cevirilecekSayi%10000000)/1000000) {
            case 9:
                cout << "Dokuz Milyon ";
                break;
            case 8:
                cout << "Sekiz Milyon ";
                break;
            case 7:
                cout << "Yedi Milyon ";
                break;
            case 6:
                cout << "Alti Milyon ";
                break;
            case 5:
                cout << "Bes Milyon ";
                break;
            case 4:
                cout << "Dort Milyon ";
                break;
            case 3:
                cout << "Uc Milyon ";
                break;
            case 2:
                cout << "Iki Milyon ";
                break;
            case 1:
                cout << "Bir Milyon ";
                break;
            case 0:
                if(cevirilecekSayi % 10000000 == 0) {
                    cout << "Milyon ";
                } else {
                    break;
                }
        }
        switch ((cevirilecekSayi%1000000)/100000) {
            case 9:
                cout << "Dokuz Yuz ";
                break;
            case 8:
                cout << "Sekiz Yuz ";
                break;
            case 7:
                cout << "Yedi Yuz ";
                break;
            case 6:
                cout << "Alti Yuz ";
                break;
            case 5:
                cout << "Bes Yuz ";
                break;
            case 4:
                cout << "Dort Yuz ";
                break;
            case 3:
                cout << "Uc Yuz ";
                break;
            case 2:
                cout << "Iki Yuz ";
                break;
            case 1:
                cout << "Yuz ";
                break;
            case 0:
                break;
        }
        switch ((cevirilecekSayi%100000)/10000) {
            case 9:
                cout << "Doksan ";
                break;
            case 8:
                cout << "Seksen ";
                break;
            case 7:
                cout << "Yetmis ";
                break;
            case 6:
                cout << "Altmis ";
                break;
            case 5:
                cout << "Elli ";
                break;
            case 4:
                cout << "Kirk ";
                break;
            case 3:
                cout << "Otuz ";
                break;
            case 2:
                cout << "Yirmi ";
                break;
            case 1:
                cout << "On ";
                break;
            case 0:
                if(cevirilecekSayi%100000 != 0) {
                    cout << "Bin ";
                } else {
                    break;
                }
        }
        switch ((cevirilecekSayi%10000)/1000) {
            case 9:
                cout << "Dokuz Bin ";
                break;
            case 8:
                cout << "Sekiz Bin ";
                break;
            case 7:
                cout << "Yedi Bin ";
                break;
            case 6:
                cout << "Alti Bin ";
                break;
            case 5:
                cout << "Bes Bin ";
                break;
            case 4:
                cout << "Dort Bin ";
                break;
            case 3:
                cout << "Uc Bin ";
                break;
            case 2:
                cout << "Iki Bin ";
                break;
            case 1:
                cout << "Bir Bin ";
                break;
            case 0:
                if(cevirilecekSayi % 10000 == 0) {
                    cout << "Bin ";
                } else {
                    break;
                }
        }
        switch ((cevirilecekSayi%1000)/100) {
            case 9:
                cout << "Dokuz Yuz ";
                break;
            case 8:
                cout << "Sekiz Yuz ";
                break;
            case 7:
                cout << "Yedi Yuz ";
                break;
            case 6:
                cout << "Alti Yuz ";
                break;
            case 5:
                cout << "Bes Yuz ";
                break;
            case 4:
                cout << "Dort Yuz ";
                break;
            case 3:
                cout << "Uc Yuz ";
                break;
            case 2:
                cout << "Iki Yuz ";
                break;
            case 1:
                cout << "Yuz ";
                break;
            case 0:
                break;
        }
        switch ((cevirilecekSayi%100)/10) {
            case 9:
                cout << "Doksan ";
                break;
            case 8:
                cout << "Seksen ";
                break;
            case 7:
                cout << "Yetmis ";
                break;
            case 6:
                cout << "Altmis ";
                break;
            case 5:
                cout << "Elli ";
                break;
            case 4:
                cout << "Kirk ";
                break;
            case 3:
                cout << "Otuz ";
                break;
            case 2:
                cout << "Yirmi ";
                break;
            case 1:
                cout << "On ";
                break;
            case 0:
                break;
        }
        switch ((cevirilecekSayi%10)/1) {
            case 9:
                cout << "Dokuz.";
                break;
            case 8:
                cout << "Sekiz.";
                break;
            case 7:
                cout << "Yedi.";
                break;
            case 6:
                cout << "Alti.";
                break;
            case 5:
                cout << "Bes.";
                break;
            case 4:
                cout << "Dort.";
                break;
            case 3:
                cout << "Uc.";
                break;
            case 2:
                cout << "Iki.";
                break;
            case 1:
                cout << "Bir.";
                break;
            case 0:
                break;
        }
    }
}

typedef struct {
    char ara[10];
    char yazi[20];
    short int kat;
}cevirilecekDeger;

short int birCevir(char kont,char *yaziile) {

    unsigned char i=0,sonuc=1;
    char yazibirler[9][6]={"bir","iki","uc","dort","bes", "alti","yedi","sekiz","dokuz"};

    while(sonuc && i<9) {
        sonuc=strcmp(yazibirler[i],yaziile);
        i++;
    }
    if(sonuc && strlen(yaziile)) {
        return 0;
    } else if(strlen(yaziile)==0) {
        if(kont) {
            return 0;
        }
        else {
            return 1;
        }
    } else {
        return i;
    }
}

short int degerBul(char *yuzluk) {

    short int birCevir(char,char *);
    unsigned char i=0;
    short int deger=0;
    char *ptr,*ptr2,temp[20]={0},yazionlar[9][7]={"on","yirmi", "otuz","kirk","elli","altmis","yetmis","seksen","doksan"};
    ptr=strstr(yuzluk,"yuz");

    if(strlen(yuzluk)==0) {
        return 1;
    }
    if(ptr) {
        ptr2=yuzluk;
        while(ptr != ptr2) {
            temp[i]=*ptr2; ptr2+=1; i++;
        }
        deger+=100*birCevir(0,temp); ptr+=3;
    }
    else {
        ptr=yuzluk;
    }
    ptr2=NULL;
    i=0;
    while(ptr2==NULL && i<9) {
        ptr2=strstr(ptr,yazionlar[i]);
        i++;
    }
    if(ptr2) {
        deger+=10*i;
        ptr+=strlen(yazionlar[i-1]);
    }
    if(ptr) {
        deger+=birCevir(1,ptr);
    }

    return deger;
}

void t2Num() {

    short int degerBul(char *);
    short int i,j,k,sifkont;
    char yaziile[175],*ptr,*ptr2,rakamile[35],temp;
    unsigned char bas=0,son=0,kontrol;

    cevirilecekDeger sayi[7]={NULL};
    strcat(sayi[0].ara,"kentilyon");
    strcat(sayi[1].ara,"katrilyon");
    strcat(sayi[2].ara,"trilyon");
    strcat(sayi[3].ara,"milyar");
    strcat(sayi[4].ara,"milyon");
    strcat(sayi[5].ara,"bin");
    cout << "Rakamlara Cevirmek Istediginiz Sayiyi Giriniz: " << endl;
    cin >> yaziile;

    for(i=0;i<=5;i++) {
        ptr=strstr(yaziile,sayi[i].ara);
        if(i==2 && ptr) {
            ptr=ptr-2;
            if(*ptr=='k' && *(ptr+1)=='a') {
                ptr=strstr(ptr+9,sayi[i].ara);
            }
            else {
                ptr=ptr+2;
            }
        }
        if(ptr) {
            son=ptr-yaziile;
            kontrol=1;
        } else {
            kontrol = 0;
        }
        if(kontrol) {
            for(j=bas,k=0;j<=son-1;j++,k++) {
                sayi[i].yazi[k]=yaziile[j];
            }
            sayi[i].yazi[k+1]=NULL;
            bas=son+strlen(sayi[i].ara);
            sayi[i].kat=degerBul(sayi[i].yazi);
        }
    }
    son=strlen(yaziile);
    for(j=bas,k=0;j<=son-1;j++,k++){
        sayi[6].yazi[k]=yaziile[j];
    }
    sayi[6].yazi[k+1]=NULL;
    sayi[6].kat=degerBul(sayi[6].yazi);

    if(strlen(sayi[6].yazi)==0) {
        sayi[6].kat=0;
    }
    k=0;
    sifkont=0;

    for(i=0;i<=6;i++) {
        for(j=3;j>=1;j--) {
            temp=(sayi[i].kat/(int)pow(10,j-1))%10+'0';
            if(temp!='0') {
                sifkont = 1;
            }
            if(sifkont) {
                rakamile[k]=temp;
                k++;
            }
        }
        rakamile[k]= NULL;
    }
    cout << "\nGirdiginiz Sayinin Rakam Formati: " << rakamile << "\n";
}

void textToNumber() {
    cout << "Rakamlara Cevirmek Istediginiz Sayiyi Yazarken" << endl;
    cout << "Bosluk" << endl;
    cout << "Turkce Karakter" << endl;
    cout << "Buyuk Harf" << endl;
    cout << "KULLANMAYIN !" << endl;
    t2Num();
}

int main( void ) {
    int secilecekYapi;
    cout << "Eger Sayidan Yaziya Donusturmek Istiyorsaniz Konsola, \n";
    cout << "1 Rakamini; Yazidan Sayiya Donusturmek Istiyorsaniz Konsola, \n";
    cout << "0 Rakamini Girin.\n";
    cout << "Tercihiniz: ";
    cin >> secilecekYapi;
    cout << endl;

    if (secilecekYapi == 1) {
        numberToText();
    } else if (secilecekYapi == 0) {
        textToNumber();
    } else {
        cout << "\nLutfen Gecerli Bir Secenek Belirtin.";
    }
}
