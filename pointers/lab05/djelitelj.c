#include <stdio.h>

int brojDjelitelja(int testNum){

    int brojDjelitelja = 0;

    for (int i = 2; i < testNum; i++) {
        if (testNum % i == 0) {
            brojDjelitelja++;
        }
    }

    return brojDjelitelja;

}

void najmanjiBrojDjelitelja(int m, int n, int *p1, int *p2){

    int min = m;

    for(int i = m; i < n; i++){

        if(brojDjelitelja(i) <= brojDjelitelja(min)){

            min = i;

        }
    }

    *p2 = brojDjelitelja(min);
    *p1 = min;

    return;


}


