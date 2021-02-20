#include <stdio.h>

int main() {
    int bakteri= 1;
    int saatboludakika = 60/5;
    int bolunmesayisi;

    printf("\nBaslangictaki Bakteri Sayisi: %d", bakteri);
    for(bolunmesayisi=1; bolunmesayisi<=saatboludakika; bolunmesayisi++) {
        bakteri = bakteri*2;
        printf("\n%d. Bolunme Sonrasi Bakteri Sayisi: %d", bolunmesayisi, bakteri);
    }
    return 0;
}
