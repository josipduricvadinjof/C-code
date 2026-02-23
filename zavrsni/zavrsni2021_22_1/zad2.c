#include <stdio.h>
#include <math.h>

typedef struct {
   double x;
   double y;
} tocka_t;


tocka_t *pokNaNajblizuTocku(tocka_t *polje, int n)
{
    tocka_t *najbliza = polje;
    double minUdalj = sqrt(polje[0].x * polje[0].x +
                           polje[0].y * polje[0].y);

    for (int i = 1; i < n; i++) {
        double udalj = sqrt(polje[i].x * polje[i].x +
                            polje[i].y * polje[i].y);

        if (udalj <= minUdalj) {   // <= zbog "posljednje"
            minUdalj = udalj;
            najbliza = &polje[i];
        }
    }

    return najbliza;
}
