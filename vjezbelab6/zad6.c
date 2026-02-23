#include <stdio.h>
#include <math.h>

void stddev(float *a, int n, float *std){
    float mean;
    float suma = 0;
    for(int i = 0; i < n; i++){
        suma += *(a + i);
    }

    mean = suma / n;

    float sq_diff_mean = 0;
    for(int i = 0; i < n; i++){
        float diff_mean = *(a + i) - mean;
        sq_diff_mean += diff_mean * diff_mean;
    }

    *std = sqrt(sq_diff_mean / n);

}

int IndexOfMaxdev(float *a, int n, int m) {
    int max_index = 0;
    float max_std = -1.0f;

    for (int i = 0; i < n; i++) {
        float current_std;
        stddev(a + i * m, m, &current_std); // Izračun standardne devijacije i-tog retka

        if (current_std > max_std) {
            max_std = current_std;
            max_index = i;
        }
    }

    return max_index;
}