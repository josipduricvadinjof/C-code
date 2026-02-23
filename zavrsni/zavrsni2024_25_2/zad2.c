int odigrajKrug(int *igraci, int n, int cilj)
{
    static int poziv = 0;

    /* inicijalizacija pri prvom pozivu */
    if (poziv == 0) {
        for (int i = 0; i < n; i++) {
            igraci[i] = 0;
        }
    }

    if (poziv % 2 == 0) {
        /* uzlazni redoslijed */
        for (int i = 0; i < n; i++) {
            igraci[i] += rand() % 5 + 1;
            if (igraci[i] >= cilj) {
                poziv++;
                return i;
            }
        }
    } else {
        /* silazni redoslijed */
        for (int i = n - 1; i >= 0; i--) {
            igraci[i] += rand() % 5 + 1;
            if (igraci[i] >= cilj) {
                poziv++;
                return i;
            }
        }
    }

    poziv++;
    return -1;
}
