void spojiNizove(char *niz1, char *niz2, char *rez) {
    int i = 0, j = 0, k = 0;

    // Naizmjenično dodavanje po 2 znaka
    while (niz1[i] != '\0' || niz2[j] != '\0') {
        // Dodaj 2 znaka iz niz1
        if (niz1[i] != '\0') {
            rez[k++] = niz1[i++];
        }
        if (niz1[i] != '\0') {
            rez[k++] = niz1[i++];
        }

        // Dodaj 2 znaka iz niz2
        if (niz2[j] != '\0') {
            rez[k++] = niz2[j++];
        }
        if (niz2[j] != '\0') {
            rez[k++] = niz2[j++];
        }
    }

    // Završni null terminator
    rez[k] = '\0';
}
