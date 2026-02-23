void kriptirajTekst(char *tekst, int *kljucZaDekript, int brojZamjena)
{
    int duljina = strlen(tekst);

    // 1. inicijalizacija ključa
    for (int i = 0; i < duljina; i++)
        kljucZaDekript[i] = i;

    // 2. zamjene
    for (int i = 0; i < brojZamjena; i++)
    {
        int a = rand() % duljina;
        int b = rand() % duljina;

        // zamjena znakova u tekstu
        char temp = tekst[a];
        tekst[a] = tekst[b];
        tekst[b] = temp;

        // zamjena indeksa u ključu
        int tempIdx = kljucZaDekript[a];
        kljucZaDekript[a] = kljucZaDekript[b];
        kljucZaDekript[b] = tempIdx;
    }
}
