#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void odrediBrojNominacija(const char* imeDatTxt, const char* imeDatBin)
{
    FILE *ftxt = fopen(imeDatTxt, "r");
    FILE *fbin = fopen(imeDatBin, "wb+");

    if (!ftxt || !fbin)
        return;

    char redak[256];
    int sifKatTxt, godina, sifFilm;
    char nazivKat[31], naslov[51];

    struct oscar_s zapis;
    int pronaden;

    while (fgets(redak, sizeof(redak), ftxt)) {

        if (sscanf(redak, "%d;%30[^;];%d;%d;%50[^\n]",
                   &sifKatTxt, nazivKat,
                   &godina, &sifFilm, naslov) != 5)
            continue;

        rewind(fbin);
        pronaden = 0;

        while (fread(&zapis, sizeof(zapis), 1, fbin) == 1) {
            if (strcmp(zapis.nazivKategorija, nazivKat) == 0) {
                zapis.ukNominacija++;
                fseek(fbin, -sizeof(zapis), SEEK_CUR);
                fwrite(&zapis, sizeof(zapis), 1, fbin);
                pronaden = 1;
                break;
            }
        }

        if (!pronaden) {
            strcpy(zapis.nazivKategorija, nazivKat);
            zapis.ukNominacija = 1;

            fseek(fbin, 0, SEEK_END);
            zapis.sifKategorija = (int)(ftell(fbin) / sizeof(zapis)) + 1;
            fwrite(&zapis, sizeof(zapis), 1, fbin);
        }
    }

    fclose(ftxt);
    fclose(fbin);
}
