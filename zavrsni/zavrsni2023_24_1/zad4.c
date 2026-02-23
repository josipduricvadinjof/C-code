int izracunajElipsu(double a, double b, double *P, double *O, double *e, double *f) {
    const double PI = 3.141592654;

    // Provjera valjanosti argumenata
    if (a < 0 && b < 0) return -1;
    if (a < 0) return -2;
    if (b < 0) return -3;
    if (a < b) return -4;

    // Površina
    *P = PI * a * b;

    // Opseg (Ramanujanova aproksimacija)
    double h = (a - b) * (a - b) / ((a + b) * (a + b));
    *O = PI * (a + b) * (1 + (3 * h) / (10 + sqrt(4 - 3 * h)));

    // Ekscentricitet
    *e = sqrt(a * a - b * b) / a;

    // Duljina fokusa
    *f = sqrt(a * a - b * b);

    return 0;
}
