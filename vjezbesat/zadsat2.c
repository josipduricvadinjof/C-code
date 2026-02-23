#include <stdio.h>

int main(void) {
    
    float x1, x2, x, y, y1, y2;
    printf("Unesite kordinate donjeg lijevog ugla >");
    scanf("%f %f", &x1, &y1);
    printf("Unesite kordinate gornjeg desnog ugla >");
    scanf("%f %f", &x2, &y2);


    if(x < x1 || x > x2 || y > y2 || y < y1) {

        printf("Tocka (%f, %f) se ne nalazi u pravokutniku", x, y);

    }


    else {

        float xs, ys;
        xs = (x1 + x2) / 2;
        ys = (y1 + y2) /2;
        
        if(x > x1 && x < xs && y > y2 && y < ys) 
        {
            printf("Tocka (%f, %f) se nalazi u kvadrantu A", x, y);
        }

        if(x < xs && x < x2 && y > ys && y < y2) 
        {
            printf("Tocka (%f, %f) se nalazi u kvadrantu B", x, y);
        }

        if(x > x1 && x < xs && y > y1 && y < ys) 
        {
            printf("Tocka (%f, %f) se nalazi u kvadrantu C", x, y);
        }
        
        if(x > xs && x < x2 && y > y1 && y < ys) 
        {
            printf("Tocka (%f, %f) se nalazi u kvadrantu D", x, y);
        }

    }


    
 return 0;
}