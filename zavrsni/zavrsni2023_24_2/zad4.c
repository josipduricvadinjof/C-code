#include <stdio.h>

struct zapis_s {
    char naziv[11];
    int sifra;
};

void parnepar(char* ulazdat, char* izlazdat)
{
    FILE *fb = fopen(ulazdat, "rb");
    FILE *ft = fopen(izlazdat, "w");

    if (!fb || !ft) {
        if (fb) fclose(fb);
        if (ft) fclose(ft);
        return;
    }

    struct zapis_s prev, curr, next;
    int ima_prev = 0, ima_next = 0;

    /* učitaj prvi zapis */
    if (fread(&curr, sizeof(curr), 1, fb) != 1) {
        /* prazna ulazna datoteka */
        fclose(fb);
        fclose(ft);
        return;
    }

    /* pokušaj učitati sljedeći */
    ima_next = (fread(&next, sizeof(next), 1, fb) == 1);

    while (1) {
        if (curr.sifra % 2 == 0) {
            /* parna šifra */
            if (ima_prev)
                fprintf(ft, "%s %d\n", prev.naziv, prev.sifra);
            fprintf(ft, "%s %d\n", curr.naziv, curr.sifra);
        } else {
            /* neparna šifra */
            fprintf(ft, "%s %d\n", curr.naziv, curr.sifra);
            if (ima_next)
                fprintf(ft, "%s %d\n", next.naziv, next.sifra);
        }

        if (!ima_next)
            break;

        /* pomak zapisa */
        prev = curr;
        curr = next;
        ima_prev = 1;

        ima_next = (fread(&next, sizeof(next), 1, fb) == 1);
    }

    fclose(fb);
    fclose(ft);
}
