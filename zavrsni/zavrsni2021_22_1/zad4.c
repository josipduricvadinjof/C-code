#include <stdio.h>
#include <string.h>
#include <stdlib.h>




void increaseLowest(char *fileName, int percentage)
{
    FILE *f = fopen(fileName, "rb+");
    if (f == NULL)
        return;

    struct record r;
    int minSalary = -1;
    long posMin = 0;
    long pos = 0;

    while (fread(&r, sizeof(struct record), 1, f) == 1) {

        if (minSalary == -1 || r.salary < minSalary) {
            minSalary = r.salary;
            posMin = pos;
        }

        pos++;
    }

    if (minSalary != -1) {
        fseek(f, posMin * sizeof(struct record), SEEK_SET);
        fread(&r, sizeof(struct record), 1, f);

        r.salary += r.salary * percentage / 100;

        fseek(f, posMin * sizeof(struct record), SEEK_SET);
        fwrite(&r, sizeof(struct record), 1, f);
    }

    fclose(f);
}
