#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ime[50];
    char prezime[50];
    char brojTelefona[15];
} kontakt_s;

/* funkcija za stvaranje kontakta */
kontakt_s *stvoriKontakt(char *ime, char *prezime, char *brojTelefona) {
    kontakt_s *novi = malloc(sizeof(kontakt_s));
    if (novi == NULL) {
        return NULL;
    }

    strcpy(novi->ime, ime);
    strcpy(novi->prezime, prezime);
    strcpy(novi->brojTelefona, brojTelefona);

    return novi;
}

/* uklanja znak '\n' */
void ukloni_novi_red(char *s) {
    char *p = strchr(s, '\n');
    if (p != NULL) {
        *p = '\0';
    }
}

int main(void) {
    int n;

    printf("Unesite broj novih kontakta > ");
    scanf("%d", &n);
    getchar(); /* uklanjanje '\n' iz ulaza */

    /* polje pokazivača na kontakte */
    kontakt_s **imenik = malloc(n * sizeof(kontakt_s *));
    if (imenik == NULL) {
        return 1;
    }

    char ime[50], prezime[50], broj[15];

    for (int i = 0; i < n; i++) {
        printf("Unesite ime kontakta %d > ", i + 1);
        fgets(ime, 50, stdin);
        ukloni_novi_red(ime);

        printf("Unesite prezime kontakta %d > ", i + 1);
        fgets(prezime, 50, stdin);
        ukloni_novi_red(prezime);

        printf("Unesite broj telefona kontakta %d > ", i + 1);
        fgets(broj, 15, stdin);
        ukloni_novi_red(broj);

        imenik[i] = stvoriKontakt(ime, prezime, broj);
    }

    printf("\nIspis imenika:\n");

    for (int i = 0; i < n; i++) {
        printf("Kontakt %d: %s %s, %s\n",
               i + 1,
               imenik[i]->ime,
               imenik[i]->prezime,
               imenik[i]->brojTelefona);
    }

    /* oslobađanje memorije */
    for (int i = 0; i < n; i++) {
        free(imenik[i]);
    }
    free(imenik);

    return 0;
}

/*Program služi za stvaranje jednostavnog telefonskog imenika u kojem se podaci o kontaktima pohranjuju dinamički. Za rad s kontaktima definiran je tip podatka kontakt_s, koji predstavlja strukturu sastavljenu od tri niza znakova: imena, prezimena i broja telefona. Svaki od tih nizova ima unaprijed definiranu maksimalnu duljinu kako bi se osiguralo dovoljno mjesta za pohranu podataka.

Za stvaranje pojedinog kontakta koristi se funkcija stvoriKontakt. Ta funkcija prima tri niza znakova – ime, prezime i broj telefona – te unutar funkcije dinamički alocira memoriju za jednu strukturu tipa kontakt_s pomoću funkcije malloc. Nakon uspješne alokacije, u članove strukture kopiraju se primljeni nizovi znakova koristeći funkciju strcpy. Budući da je memorija alocirana dinamički, funkcija vraća pokazivač na novostvorenu strukturu, čime se omogućuje da se kontakt koristi izvan same funkcije.

U glavnom programu najprije se od korisnika traži unos broja kontakata koje želi unijeti. Na temelju tog broja dinamički se alocira jednodimenzionalno polje pokazivača na strukture tipa kontakt_s. Svaki element tog polja predstavlja pokazivač na jedan kontakt u imeniku. Time se postiže da se svi kontakti nalaze u dinamički alociranoj memoriji, dok se u polju čuvaju samo njihove adrese.

Za unos podataka o kontaktima koristi se funkcija fgets, jer ona omogućuje siguran unos nizova znakova i može učitati i razmake, što je važno za imena poput „Ana Marija“. Budući da fgets u niz pohranjuje i znak novog retka ako ima mjesta, nakon svakog unosa taj se znak uklanja kako bi niz bio pravilno terminiran. Nakon unosa imena, prezimena i broja telefona, poziva se funkcija stvoriKontakt, a pokazivač koji ona vrati sprema se u odgovarajući element polja imenik.

Nakon što su svi kontakti uneseni, program prolazi kroz polje imenik i ispisuje podatke o svakom kontaktu redoslijedom kojim su uneseni. Budući da se u polju nalaze pokazivači na strukture, do pojedinih članova strukture pristupa se pomoću operatora ->.

Na kraju programa potrebno je osloboditi svu dinamički alociranu memoriju. To se radi u dva koraka: najprije se u petlji oslobađa memorija svakog pojedinog kontakta pomoću funkcije free, a zatim se oslobađa i samo polje pokazivača. Time se osigurava da program ne ostavlja zauzetu memoriju nakon završetka izvođenja.=Program služi za stvaranje jednostavnog telefonskog imenika u kojem se podaci o kontaktima pohranjuju dinamički. Za rad s kontaktima definiran je tip podatka kontakt_s, koji predstavlja strukturu sastavljenu od tri niza znakova: imena, prezimena i broja telefona. Svaki od tih nizova ima unaprijed definiranu maksimalnu duljinu kako bi se osiguralo dovoljno mjesta za pohranu podataka.

Za stvaranje pojedinog kontakta koristi se funkcija stvoriKontakt. Ta funkcija prima tri niza znakova – ime, prezime i broj telefona – te unutar funkcije dinamički alocira memoriju za jednu strukturu tipa kontakt_s pomoću funkcije malloc. Nakon uspješne alokacije, u članove strukture kopiraju se primljeni nizovi znakova koristeći funkciju strcpy. Budući da je memorija alocirana dinamički, funkcija vraća pokazivač na novostvorenu strukturu, čime se omogućuje da se kontakt koristi izvan same funkcije.

U glavnom programu najprije se od korisnika traži unos broja kontakata koje želi unijeti. Na temelju tog broja dinamički se alocira jednodimenzionalno polje pokazivača na strukture tipa kontakt_s. Svaki element tog polja predstavlja pokazivač na jedan kontakt u imeniku. Time se postiže da se svi kontakti nalaze u dinamički alociranoj memoriji, dok se u polju čuvaju samo njihove adrese.

Za unos podataka o kontaktima koristi se funkcija fgets, jer ona omogućuje siguran unos nizova znakova i može učitati i razmake, što je važno za imena poput „Ana Marija“. Budući da fgets u niz pohranjuje i znak novog retka ako ima mjesta, nakon svakog unosa taj se znak uklanja kako bi niz bio pravilno terminiran. Nakon unosa imena, prezimena i broja telefona, poziva se funkcija stvoriKontakt, a pokazivač koji ona vrati sprema se u odgovarajući element polja imenik.

Nakon što su svi kontakti uneseni, program prolazi kroz polje imenik i ispisuje podatke o svakom kontaktu redoslijedom kojim su uneseni. Budući da se u polju nalaze pokazivači na strukture, do pojedinih članova strukture pristupa se pomoću operatora ->.

Na kraju programa potrebno je osloboditi svu dinamički alociranu memoriju. To se radi u dva koraka: najprije se u petlji oslobađa memorija svakog pojedinog kontakta pomoću funkcije free, a zatim se oslobađa i samo polje pokazivača. Time se osigurava da program ne ostavlja zauzetu memoriju nakon završetka izvođenja.Program služi za stvaranje jednostavnog telefonskog imenika u kojem se podaci o kontaktima pohranjuju dinamički. Za rad s kontaktima definiran je tip podatka kontakt_s, koji predstavlja strukturu sastavljenu od tri niza znakova: imena, prezimena i broja telefona. Svaki od tih nizova ima unaprijed definiranu maksimalnu duljinu kako bi se osiguralo dovoljno mjesta za pohranu podataka.

Za stvaranje pojedinog kontakta koristi se funkcija stvoriKontakt. Ta funkcija prima tri niza znakova – ime, prezime i broj telefona – te unutar funkcije dinamički alocira memoriju za jednu strukturu tipa kontakt_s pomoću funkcije malloc. Nakon uspješne alokacije, u članove strukture kopiraju se primljeni nizovi znakova koristeći funkciju strcpy. Budući da je memorija alocirana dinamički, funkcija vraća pokazivač na novostvorenu strukturu, čime se omogućuje da se kontakt koristi izvan same funkcije.

U glavnom programu najprije se od korisnika traži unos broja kontakata koje želi unijeti. Na temelju tog broja dinamički se alocira jednodimenzionalno polje pokazivača na strukture tipa kontakt_s. Svaki element tog polja predstavlja pokazivač na jedan kontakt u imeniku. Time se postiže da se svi kontakti nalaze u dinamički alociranoj memoriji, dok se u polju čuvaju samo njihove adrese.

Za unos podataka o kontaktima koristi se funkcija fgets, jer ona omogućuje siguran unos nizova znakova i može učitati i razmake, što je važno za imena poput „Ana Marija“. Budući da fgets u niz pohranjuje i znak novog retka ako ima mjesta, nakon svakog unosa taj se znak uklanja kako bi niz bio pravilno terminiran. Nakon unosa imena, prezimena i broja telefona, poziva se funkcija stvoriKontakt, a pokazivač koji ona vrati sprema se u odgovarajući element polja imenik.

Nakon što su svi kontakti uneseni, program prolazi kroz polje imenik i ispisuje podatke o svakom kontaktu redoslijedom kojim su uneseni. Budući da se u polju nalaze pokazivači na strukture, do pojedinih članova strukture pristupa se pomoću operatora ->.

Na kraju programa potrebno je osloboditi svu dinamički alociranu memoriju. To se radi u dva koraka: najprije se u petlji oslobađa memorija svakog pojedinog kontakta pomoću funkcije free, a zatim se oslobađa i samo polje pokazivača. Time se osigurava da program ne ostavlja zauzetu memoriju nakon završetka izvođenja.*/