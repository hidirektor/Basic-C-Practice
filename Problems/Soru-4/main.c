#include <stdio.h>

int main() {
    int kumepuani=12;
    int takimpuani[10] = {2,1,0,0,2,1,1,2,1,0};
    int takimgercekpuani[10];
    int i=0;
    int toplam=0, j;
    //printf("%d ", takimpuani[0]);
    do {
        if(takimpuani[i] == 2) {
            takimgercekpuani[i] = 3;
        } else if(takimpuani[i] == 1) {
            takimgercekpuani[i] = 0;
        } else if(takimpuani[i] == 0) {
            takimgercekpuani[i] = 1;
        }
        i++;
    }
    while(i < 10);
    for(j=0; j<10; j++){
        toplam += takimgercekpuani[j];
    }
    //printf("%d ", takimgercekpuani[0]);
    if(toplam < kumepuani) {
        printf("\nMaalesef Takiminiz Sonraki Maclara Katılamayacaktır!");
    } else if(toplam >= 12) {
        printf("\nTakiminizin Toplam Puani: %d", toplam);
        printf("\nTakiminiz Sonraki Maclara Katilmaya Hak Kazanmistir!\n");
    }
}
