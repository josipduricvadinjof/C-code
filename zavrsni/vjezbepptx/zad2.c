#include <stdio.h>
#include <string.h>

#define MAX_GLASACA 100

void glasaj(int glasacId, int opcija)
{
    static int glasao[MAX_GLASACA + 1] = {0};
    static int rezultati[4] = {0};

    if (glasacId < 1 || glasacId > MAX_GLASACA)
        return;

    if (opcija < 1 || opcija > 3)
        return;

    if (glasao[glasacId])
        return;

    glasao[glasacId] = 1;
    rezultati[opcija]++;

    printf("Opcija 1: %d\n", rezultati[1]);
    printf("Opcija 2: %d\n", rezultati[2]);
    printf("Opcija 3: %d\n\n", rezultati[3]);
}


int main(void)
{
    int id, opcija;

    while (1)
    {
        printf("ID glasaca (0 za kraj): ");
        scanf("%d", &id);

        if (id == 0)
            break;

        printf("Opcija (1-3): ");
        scanf("%d", &opcija);

        glasaj(id, opcija);
    }

    return 0;
}
