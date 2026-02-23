#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));

    double a = 10.0;
    double b = 15.0;
    double broj;
    int frek[10] = {0};
    int index;

    /* generiranje 5 000 000 brojeva */
    for (int i = 0; i < 5000000; i++)
    {
        broj = (double)rand() / RAND_MAX * (b - a) + a;

        index = (int)((broj - a) / 0.5);

        if (index >= 10)
            index = 9;

        frek[index]++;
    }

    /* ispis frekvencija */
    for (int i = 0; i < 10; i++)
    {
        double donja = a + i * 0.5;
        double gornja = donja + 0.5;

        if (i < 9)
            printf("[%.1f - %.1f) -> %d\n", donja, gornja, frek[i]);
        else
            printf("[%.1f - %.1f] -> %d\n", donja, gornja, frek[i]);
    }

    return 0;
}
