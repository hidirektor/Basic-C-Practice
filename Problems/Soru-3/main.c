#include <stdio.h>

int main() {
    int gun;
    printf("Lutfen Bir Sayi Girin: ");
    scanf("%d", &gun);

    switch(gun) {
        case 1:
            printf("\nSecilen Gun: %d", gun);
            printf("\nHaftanin %d. Gunu Pazartesidir.", gun);
            break;
        case 2:
            printf("\nSecilen Gun: %d", gun);
            printf("\nHaftanin %d. Gunu Salidir.", gun);
            break;
        case 3:
            printf("\nSecilen Gun: %d", gun);
            printf("\nHaftanin %d. Gunu Carsambadir.", gun);
            break;
        case 4:
            printf("\nSecilen Gun: %d", gun);
            printf("\nHaftanin %d. Gunu Persembedir.", gun);
            break;
        case 5:
            printf("\nSecilen Gun: %d", gun);
            printf("\nHaftanin %d. Gunu Cumadir.", gun);
            break;
        case 6:
            printf("\nSecilen Gun: %d", gun);
            printf("\nHaftanin %d. Gunu Cumartesidir.", gun);
            break;
        case 7:
            printf("\nSecilen Gun: %d", gun);
            printf("\nHaftanin %d. Gunu Pazardir.", gun);
            break;
        default:
            printf("\nDostum Maalesef Haftada 7 Gun Var.");
    }

    return 0;
}
