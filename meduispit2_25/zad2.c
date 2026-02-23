#include <stdio.h>

struct Osoba{
    char ime[21];
    short rodenje;
    short smrt;
};

int main (void){

    struct Osoba osobe[20] = {
        {"ElizabetaI", 1533, 1603},
        {"Mozart", 1756, 1791},
        {"Nixon", 1913, 1994},
        {"Lenjin", 1870, 1924},
        {"Kant", 1724, 1804},
        {"Newton", 1643, 1727},
        {"Bismarck", 1815, 1898},
        {"Napoleon", 1769, 1821},
        {"MargaretAnnNeve", 1792, 1903},
        {"EmmaMorano", 1899, 2017},
        {"LujXIV.", 1638, 1715}
    };

    int broj = 11;  // već imamo 11 osoba

    for(int i = broj; i < 20; i++){
        printf("Osoba %d:\n", i + 1);

        printf("Ime i prezime:");
        scanf("%20s", osobe[i].ime);

        if(osobe[i].ime[0] == '.'){
            break;
        }

        printf("Rodenje: ");
        scanf("%hd", &osobe[i].rodenje);

        printf("Smrt: ");
        scanf("%hd", &osobe[i].smrt);

        broj++;  // imamo još jednu osobu
    }

    printf("Godina za provjeru:");
    int godina;
    scanf("%d", &godina);

    printf("Suvremenici:\n");

    int found = 0;

    for(int i = 0; i < broj; i++){
        if(godina >= osobe[i].rodenje && godina <= osobe[i].smrt){
            printf("%s (%d - %d)\n",
                   osobe[i].ime,
                   osobe[i].rodenje,
                   osobe[i].smrt);
            found = 1;
        }
    }

    if(!found){
        printf("Nema suvremenika.\n");
    }

    return 0;
}
