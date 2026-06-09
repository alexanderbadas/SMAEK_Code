#include <stdio.h>
#include <stdlib.h>

/*να γραφει συναρτηση η οποια επιστρεφει μικροτερο στο τετραγωνο και μεγαλυτερο στον κυβο
στο κυριο προγραμμα να ζητουνται επαναληπτικα 2 αριθμοι μεχρι το αθροισμα τους να ειναι μικροτερο απο 30
στην συνεχεια να καλειται η συναρτηση και να εμφανιζεται το αποτελεσμα*/

int minmax (int a, int b) {
    int min, max, sqmin, cbmax; 
    if (a>b) {
        min = b;
        max = a;
    }
    else {
        min = a;
        max = b;
    }
    sqmin = min*min;
    cbmax = max*max*max;
    printf("min squared: %d \nmax cubed: %d\n", sqmin, cbmax);
    return 0;
}

int main () {
    int a,b,result=0;
    do {
    printf("pls give me 2 numbers with a space between: ");
    scanf("%d %d", &a, &b);
    }while (a+b>30);
    result = minmax(a,b);
    return 0;
}