void danMjesec(int rbrDanGodina, int *dan, int *mjesec)
{
    int daniUMjesecu[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    int ostatak = rbrDanGodina;
    int m = 0;

    while (ostatak > daniUMjesecu[m]) {
        ostatak -= daniUMjesecu[m];
        m++;
    }

    *mjesec = m + 1;   // jer su mjeseci 1–12
    *dan = ostatak;
}
