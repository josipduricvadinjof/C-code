#include <stdio.h>

struct LEGO{
    char ime[50];
    int brojevidjelova[5];
};

int main (void){

    struct LEGO figura[50] = {{"FireworkGuy", {14822018, 13562018, 43222017, 52112017, 34222018}},
                {"WrestlingChampion", {93212015, 34122015, 34772012, 22222014, 13452013}},
                {"CactusGirl", {32332018, 93212015, 34772012, 52112017, 34882016}},
                {"Dobby", {98762018, 97652018, 34772018, 32452016, 34212017}},
                {"Cheerleader", {12322010, 14562010, 32462010, 23762010, 98792010}},
                {"Zombie", {56432010, 76482010, 47822010, 78652010, 45322010}},
                {"Forestman", {23652010, 34762009, 64832008, 57532010, 54882009}},
                {"Mariachi/MaracaMan", {23672010, 93212010, 32452016, 54882010, 34672010}}
            };



    
    for(int i = 8; i < 50; i++){

        printf("Unos %d. figure: \n", i + 1);
        printf("Naziv:");
    
        while (getchar() != '\n');
        fgets(figura[i].ime, sizeof(figura[i].ime), stdin);


        if(figura[i].ime[0] == '-' ){
            break;
        }

        printf("Serijski brojevi: ");
        for(int j = 0; j < 5; j++){
            scanf("%d", &figura[i].brojevidjelova[j]);
            while (getchar() != '\n');
        }
        
        
        
    }
    
    
    printf("Serijski broj dijela za provjeru: ");
    int trazenibroj;
    scanf("%d", &trazenibroj);

    printf("Figure koje sadrze dio %d su:", trazenibroj);

    int postoji = 0;

    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 5; j++){
            if(figura[i].brojevidjelova[j] == trazenibroj){
                printf("%s", figura[i].ime);
                postoji++;
            }
        }
    }

    if(postoji == 0){
        printf("Nema figura!");
    }
    

    




    return 0;
}