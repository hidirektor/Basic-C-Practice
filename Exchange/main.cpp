#include <iostream>

using namespace std;

int main() {
    float dseurokucukbin = 3.85;
    float dseurokucukbesbin = 3.89;
    float dseurobuyukbesbin = 3.90;
    float dsdolarkucukbin = 3.54;
    float dsdolarkucukbesbin = 3.57;
    float dsdolarbuyukbesbin = 3.58;
    float dssterlinkucukbin = 4.50;
    float dssterlinkucukbesbin = 4.57;
    float dssterlinbuyukbesbin = 4.60;
    float dsisvicrefrankikucukbin = 3.55;
    float dsisvicrefrankikucukbesbin = 3.61;
    float dsisvicrefrankibuyukbesbin = 3.67;
    float daeurokucukbin = 3.98;
    float daeurokucukbesbin = 3.94;
    float daeurobuyukbesbin = 3.92;
    float dadolarkucukbin = 3.68;
    float dadolarkucukbesbin = 3.63;
    float dadolarbuyukbesbin = 3.62;
    float dasterlinkucukbin = 4.70;
    float dasterlinkucukbesbin = 4.66;
    float dasterlinbuyukbesbin = 4.62;
    float daisvicrefrankikucukbin = 3.75;
    float daisvicrefrankikucukbesbin = 3.70;
    float daisvicrefrankibuyukbesbin = 3.69;

    cout << "Doviz Buromuza Hosgeldiniz !\n";
    string musteriisim;
    cout << "Lutfen Isim ve Soyisim Giriniz: ";
    getline (cin, musteriisim);
    cout << "Sayin " << musteriisim << " \nDoviz Bozdurmak Istiyorsaniz 1 Doviz Almak Istiyorsaniz 2 Yazin\n";
    int girdi;
    float musteriparasi;
    cin >> girdi;
    switch(girdi) {
        case 1:
            cout << "Sayin " << musteriisim << " Doviz Bozdurmak Uzeresiniz\n";
            cout << "Lutfen Bozdurmak Istediginiz Para Birimini Secin:\n";
            cout << "Euro Birimi Icin 1\n";
            cout << "Dolar Birimi Icin 2\n";
            cout << "Sterlin Birimi Icin 3\n";
            cout << "Isvicre Frank Birimi Icin 4 Yaziniz.\n";
            int parabirimi;
            cin >> parabirimi;
            switch(parabirimi) {
                case 1:
                    cout << "Sayin " << musteriisim << " Euro Bozdurmak Uzeresiniz\n";
                    float musteriparasieuro;
                    cout << "Lutfen Bozdurmak Istediginiz Euro Miktarini Girin: ";
                    cin >> musteriparasieuro;
                    float musterikazanceuro;
                    if(musteriparasieuro <=1000) {
                        musterikazanceuro = musteriparasieuro * dseurokucukbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dseurokucukbin << " Kur Degerinden " << musteriparasieuro << " Euro Bozdurdunuz.\n";
                        cout << musterikazanceuro << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else if(musteriparasieuro >1000 && musteriparasieuro <= 5000) {
                        musterikazanceuro = musteriparasieuro * dseurokucukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dseurokucukbesbin << " Kur Degerinden " << musteriparasieuro << " Euro Bozdurdunuz.\n";
                        cout << musterikazanceuro << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else {
                        musterikazanceuro = musteriparasieuro * dseurobuyukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dseurobuyukbesbin << " Kur Degerinden " << musteriparasieuro << " Euro Bozdurdunuz.\n";
                        cout << musterikazanceuro << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    }
                    break;
                case 2:
                    cout << "Sayin " << musteriisim << " Dolar Bozdurmak Uzeresiniz\n";
                    float musteriparasidolar;
                    cout << "Lutfen Bozdurmak Istediginiz Dolar Miktarini Girin: ";
                    cin >> musteriparasi;
                    float musterikazancdolar;
                    if(musteriparasidolar <=1000) {
                        musterikazancdolar = musteriparasidolar * dsdolarkucukbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dsdolarkucukbin << " Kur Degerinden " << musteriparasidolar << " Dolar Bozdurdunuz.\n";
                        cout << musterikazancdolar << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else if(musteriparasidolar >1000 && musteriparasidolar <= 5000) {
                        musterikazancdolar = musteriparasidolar * dsdolarkucukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dsdolarkucukbesbin << " Kur Degerinden " << musteriparasidolar << " Dolar Bozdurdunuz.\n";
                        cout << musterikazancdolar << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else {
                        musterikazancdolar = musteriparasidolar * dsdolarbuyukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dsdolarbuyukbesbin << " Kur Degerinden " << musteriparasidolar << " Dolar Bozdurdunuz.\n";
                        cout << musterikazancdolar << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    }
                    break;
                case 3:
                    cout << "Sayin " << musteriisim << " Sterlin Bozdurmak Uzeresiniz\n";
                    float musteriparasisterlin;
                    cout << "Lutfen Bozdurmak Istediginiz Sterlin Miktarini Girin: ";
                    cin >> musteriparasisterlin;
                    float musterikazancsterlin;
                    if(musteriparasisterlin <=1000) {
                        musterikazancsterlin = musteriparasisterlin * dssterlinkucukbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dssterlinkucukbin << " Kur Degerinden " << musteriparasisterlin << " Sterlin Bozdurdunuz.\n";
                        cout << musterikazancsterlin << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else if(musteriparasisterlin >1000 && musteriparasisterlin <= 5000) {
                        musterikazancsterlin = musteriparasisterlin * dssterlinkucukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dssterlinkucukbesbin << " Kur Degerinden " << musteriparasisterlin << " Sterlin Bozdurdunuz.\n";
                        cout << musterikazancsterlin << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else {
                        musterikazancsterlin = musteriparasisterlin * dssterlinbuyukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dssterlinbuyukbesbin << " Kur Degerinden " << musteriparasisterlin << " Sterlin Bozdurdunuz.\n";
                        cout << musterikazancsterlin << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    }
                    break;
                case 4:
                    cout << "Sayin " << musteriisim << " Isvicre Franki Bozdurmak Uzeresiniz\n";
                    float musteriparasiisvicrefranki;
                    cout << "Lutfen Bozdurmak Istediginiz Isvicre Franki Miktarini Girin: ";
                    cin >> musteriparasiisvicrefranki;
                    float musterikazancisvicrefranki;
                    if(musteriparasiisvicrefranki <=1000) {
                        musterikazancisvicrefranki = musteriparasiisvicrefranki * dsisvicrefrankikucukbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dsisvicrefrankikucukbin << " Kur Degerinden " << musteriparasiisvicrefranki << " Isvicre Franki Bozdurdunuz.\n";
                        cout << musterikazancisvicrefranki << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else if(musteriparasiisvicrefranki >1000 && musteriparasiisvicrefranki <= 5000) {
                        musterikazancisvicrefranki = musteriparasiisvicrefranki * dsisvicrefrankikucukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dsisvicrefrankikucukbesbin << " Kur Degerinden " << musteriparasiisvicrefranki << " Isvicre Franki Bozdurdunuz.\n";
                        cout << musterikazancisvicrefranki << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else {
                        musterikazancisvicrefranki = musteriparasiisvicrefranki * dsisvicrefrankibuyukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dsisvicrefrankibuyukbesbin << " Kur Degerinden " << musteriparasiisvicrefranki << " Isvicre Franki Bozdurdunuz.\n";
                        cout << musterikazancisvicrefranki << " Turk Lirasi Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    }
                    break;
                default:
                    cout << "\nSayin " << musteriisim << " Lutfen Gecerli Bir Para Birimi Secin\n";
            }
            break;
        case 2:
            cout << "Sayin " << musteriisim << " Doviz Almak Uzeresiniz\n";
            cout << "Sayin " << musteriisim << " Lutfen Almak Istediginiz Para Birimini Secin\n";
            cout << "Euro Birimi Icin 1\n";
            cout << "Dolar Birimi Icin 2\n";
            cout << "Sterlin Birimi Icin 3\n";
            cout << "Isvicre Frank Birimi Icin 4 Yaziniz.\n";
            int parabirimialis;
            cin >> parabirimialis;
            switch(parabirimialis) {
                case 1:
                    cout << "Sayin " << musteriisim << " Euro Satin Almak Uzeresiniz\n";
                    float musteriparasitl;
                    cout << "Lutfen Bozdurmak Istediginiz Turk Lirasi Miktarini Girin: ";
                    cin >> musteriparasitl;
                    float musterikazanctl;
                    if(musteriparasitl <=1000) {
                        musterikazanctl = musteriparasitl / daeurokucukbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << daeurokucukbin << " Kur Degerinden " << musteriparasitl << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctl << " Euro Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else if (musteriparasitl > 1000 && musteriparasitl <=5000) {
                        musterikazanctl = musteriparasitl / daeurokucukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << daeurokucukbesbin << " Kur Degerinden " << musteriparasitl << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctl << " Euro Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else {
                        musterikazanctl = musteriparasitl / daeurobuyukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << daeurobuyukbesbin << " Kur Degerinden " << musteriparasitl << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctl << " Euro Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    }
                    break;
                case 2:
                    cout << "Sayin " << musteriisim << " Dolar Satin Almak Uzeresiniz\n";
                    float musteriparasitld;
                    cout << "Lutfen Bozdurmak Istediginiz Turk Lirasi Miktarini Girin: ";
                    cin >> musteriparasitld;
                    float musterikazanctld;
                    if(musteriparasitld <=1000) {
                        musterikazanctld = musteriparasitld / dadolarkucukbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dadolarkucukbin << " Kur Degerinden " << musteriparasitld << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctld << " Dolar Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else if (musteriparasitld > 1000 && musteriparasitld <=5000) {
                        musterikazanctld = musteriparasitld / dadolarkucukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dadolarkucukbesbin << " Kur Degerinden " << musteriparasitld << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctld << " Euro Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else {
                        musterikazanctld = musteriparasitld / dadolarbuyukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dadolarbuyukbesbin << " Kur Degerinden " << musteriparasitld << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctld << " Euro Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    }
                    break;
                case 3:
                    cout << "Sayin " << musteriisim << " Sterlin Satin Almak Uzeresiniz\n";
                    float musteriparasitls;
                    cout << "Lutfen Bozdurmak Istediginiz Turk Lirasi Miktarini Girin: ";
                    cin >> musteriparasitls;
                    float musterikazanctls;
                    if(musteriparasitls <=1000) {
                        musterikazanctls = musteriparasitls / dasterlinkucukbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dasterlinkucukbin << " Kur Degerinden " << musteriparasitls << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctls << " Sterlin Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else if (musteriparasitls > 1000 && musteriparasitls <=5000) {
                        musterikazanctls = musteriparasitls / dasterlinkucukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dasterlinkucukbesbin << " Kur Degerinden " << musteriparasitls << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctls << " Sterlin Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else {
                        musterikazanctls = musteriparasitls / dasterlinbuyukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << dasterlinbuyukbesbin << " Kur Degerinden " << musteriparasitls << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctls << " Sterlin Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    }
                    break;
                case 4:
                    cout << "Sayin " << musteriisim << " Isvicre Franki Satin Almak Uzeresiniz\n";
                    float musteriparasitlif;
                    cout << "Lutfen Bozdurmak Istediginiz Turk Lirasi Miktarini Girin: ";
                    cin >> musteriparasitlif;
                    float musterikazanctlif;
                    if(musteriparasitlif <=1000) {
                        musterikazanctlif = musteriparasitlif / daisvicrefrankikucukbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << daisvicrefrankikucukbin << " Kur Degerinden " << musteriparasitlif << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctlif << " Isvicre Franki Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else if (musteriparasitlif > 1000 && musteriparasitlif <=5000) {
                        musterikazanctlif = musteriparasitlif / daisvicrefrankikucukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << daisvicrefrankikucukbesbin << " Kur Degerinden " << musteriparasitlif << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctlif << " Isvicre Franki Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    } else {
                        musterikazanctlif = musteriparasitlif / daisvicrefrankibuyukbesbin;
                        cout << "\nSayin " << musteriisim << "!\n";
                        cout << daisvicrefrankibuyukbesbin << " Kur Degerinden " << musteriparasitlif << " Turk Lirasi Bozdurdunuz.\n";
                        cout << musterikazanctlif << " Sterlin Satin Aldiniz.\n";
                        cout << "Tesekkur Eder yine bekleriz. Iyi Gunler !\n";
                    }
                    break;
                default:
                    cout << "\nSayin " << musteriisim << " Lutfen Gecerli Bir Para Birimi Secin.\n";
            }
            break;
        default:
            cout << "\nSayin " << musteriisim << " Lutfen Sadece 1 ve 2 Yazin\n";
    }
    return 0;
}
