#include <stdio.h>

/* Vraca 1 ako je pravokutnik valjan (stranice > 0), inace 0 */
int ProvjeriPravokutnik(int x1, int y1, int x2, int y2) {
    return (x1 != x2) && (y1 != y2);
}

/* Duljina stranice na jednoj osi: |a-b|, vraca int */
int IzracunajDuljinuStranice(int k1, int k2) {
    int d = k1 - k2;
    return (d < 0) ? -d : d;
}

/* Opseg: 2*(a+b) */
int IzracunajOpseg(int a, int b) {
    return 2 * (a + b);
}

/* Povrsina: a*b */
int IzracunajPovrsinu(int a, int b) {
    return a * b;
}

/* Ucitava tocke, provjerava valjanost, racuna opseg i povrsinu, vraca preko pointera */
void IzracunajOpsegPovrsinu(int *opseg, int *povrsina) {
    int x1, y1, x2, y2;

    printf("Unesite koordinate za tocku 1 > ");
    scanf("%d %d", &x1, &y1);

    printf("Unesite koordinate za tocku 2 > ");
    scanf("%d %d", &x2, &y2);

    if (!ProvjeriPravokutnik(x1, y1, x2, y2)) {
        *opseg = -1;
        *povrsina = -1;
        return;
    }

    int a = IzracunajDuljinuStranice(x1, x2);
    int b = IzracunajDuljinuStranice(y1, y2);

    *opseg = IzracunajOpseg(a, b);
    *povrsina = IzracunajPovrsinu(a, b);
}

/* Ako ti sustav vec ima svoj main, obrisati ovaj main */
int main(void) {
    int opseg, povrsina;
    IzracunajOpsegPovrsinu(&opseg, &povrsina);
    printf("%d %d", opseg, povrsina);
    return 0;
}
