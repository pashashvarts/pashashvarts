#include <stdio.h>//pidkluchenya bibliotek//
#include<locale.h>
#include<math.h>
int main() {

    int x; //ogolochenya zminnux//
    int y;
    setlocale(LC_CTYPE, "ru");//pidkluchenya pidtrumku kuruluci pociycbkoi movu//
    printf("¬вед1ть число x:   \n");//BuBedenya texty na ekran //
    scanf("%d", &x);//BBedenya znachenya zminnoy x//

    y = pow (x, 3) - 4 * pow (x,2) - 5 * x + 9 + cos (x) ; 
    printf("\tx \t y \n");//BuBedenya texty na ekran //
    printf("\t%d \t %d\n", x, y);//BuBudenya texty na ekran //


    return 0;//Buxid iz programu //
}
