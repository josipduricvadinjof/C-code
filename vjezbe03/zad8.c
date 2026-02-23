#include <stdio.h>
int main(void) {
 float b1, b2, b3, b4, b5;
 int brojac = 0;
 printf("Upisite pet brojeva > ");
 scanf("%f %f %f %f %f", &b1, &b2, &b3, &b4, &b5);
 if (b1 > 0.f)
 brojac = brojac + 1;
 if (b2 > 0.f)
 brojac = brojac + 1;
 if (b3 > 0.f)
 brojac = brojac + 1;
 if (b4 > 0.f)
 brojac = brojac + 1;
 if (b5 > 0.f)
 brojac = brojac + 1;
 if (brojac >= 3) {
 printf("Barem tri su veca od nule");
 } else {
 printf("Niti tri nisu veca od nule");
 }
 return 0;
}
