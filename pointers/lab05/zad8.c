#include <stdio.h>
#include <math.h>

void PomicniProsjek(double *ulaz, double *izlaz, int *n, int *prozor){

    for (int i = 0; i < *n; i++) {
        int k = *prozor;
        if (k > i + 1) k = i + 1;          // na početku prozor je manji

        double suma = 0.0;
        for (int j = i - k + 1; j <= i; j++) {
            suma += ulaz[j];
        }

        izlaz[i] = suma / (double)k;
    }



}

int main (void){

    int n, prozor;
    
    printf("Unesite broj elemenata ulaznog niza:\n");
    scanf("%d", &n);
    double ulaz[n], izlaz[n];
    printf("Unesite elemente ulaznog niza:\n");

    for(int i = 0; i < n; i++){

        scanf("%lf", &ulaz[i]);

    }
    printf("Unesite velicinu prozora:\n");
    scanf("%d", &prozor);

    printf("Ulazni niz: ");
    for(int i = 0; i < n; i++){

       printf("%.2lf ", ulaz[i]);

    }

    PomicniProsjek(ulaz,izlaz,&n,&prozor);

    printf("Filtrirani niz: ");
    for(int i = 0; i < n; i++){

       printf("%.2lf ", izlaz[i]);

    }








    return 0;
}