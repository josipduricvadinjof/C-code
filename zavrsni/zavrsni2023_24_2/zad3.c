#include <stdio.h>



static int indeks = 0;
static int djelitelji = 0;

int brojiDjelj3Kumulativno(int *p, int n, int delta)
{
    if (indeks >= n)
        return djelitelji;

    int kraj = indeks + delta;
    if (kraj > n)
        kraj = n;

    for (int i = indeks; i < kraj; i++) {
        if (*(p + i) % 3 == 0)
            djelitelji++;
    }

    indeks = kraj;
    return djelitelji;
}






int main(void)
{
   int p[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
   printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
   printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
   printf("\n%d", brojiDjelj3Kumulativno(p, 10, 4));
   return 0;
}