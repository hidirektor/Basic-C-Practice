#include<locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    int HamMaas;
    printf("Lutfen Ham Maasi Girin: ");
    scanf("%d", &HamMaas);
    printf("\nHam Maasi: %d", HamMaas);
    int CocukParasi = (HamMaas / 100) * 4;
    int CocukParasiylaBirlikte = HamMaas + CocukParasi;
    printf("\n\nCocuk Parasiyla Birlikte Maasi: %d", CocukParasiylaBirlikte);
    int Prim = (HamMaas / 100) * 6;
    int PrimleBirlikte = HamMaas + Prim;
    printf("\nPrimle Birlikte Maasi: %d", PrimleBirlikte);
    float NetMaas = HamMaas + CocukParasi + Prim;
    printf("\n\nPlasiyerin Net Maasi: %.2f", NetMaas);
    printf("\n");
    return 0;
}
