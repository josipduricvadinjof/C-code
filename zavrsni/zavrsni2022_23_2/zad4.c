double dist2D(double *mat, double *rez, int vel)
{
    double ukupno = 0.0;

    for (int i = 0; i < vel; i++) {
        double dx, dy;

        if (i == 0) {
            /* udaljenost prve tocke od (0,0) */
            dx = *(mat + i*2) - 0.0;
            dy = *(mat + i*2 + 1) - 0.0;
        } else {
            /* udaljenost Ti od Ti-1 */
            dx = *(mat + i*2)     - *(mat + (i-1)*2);
            dy = *(mat + i*2 + 1) - *(mat + (i-1)*2 + 1);
        }

        rez[i] = sqrt(dx*dx + dy*dy);
        ukupno += rez[i];
    }

    return ukupno;
}
