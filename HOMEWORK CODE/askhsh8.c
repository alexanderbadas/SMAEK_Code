#include <stdio.h>
#include <stdlib.h>
/*να γραφτει προγραμμα που να ζητα απο τον χρηστη 2 αριθμους επαναληπτικα
μεχρι το γινομενο τους να ειναι μικροτερο του 20. Αυτοι οι 2 αριθμοι θα 
περνανε σαν ορισμα σε μια συναρτηση η οποια υπολογιζει και επιστρεφει την δυναμη
με βαση τον μικροτερο και εκθετη τον μεγαλυτερο με χρηση δομης for*/

float F (int a,int b) {
    int min, max;
    float result=1;
    if (a < b) {
        min = a;
        max = b;
    }
    else {
        max = a;
        min = b;
    }
    if (max > 0) {
        for(int i=1;i<=max;i++) 
            result*=min;
        return result;
    }
    else if (max < 0) {
        for(int i=1;i<=-max;i++) 
            result*=min;
        return 1/result;
    }
    else {
        if (min==0) {
            printf("den orizetai\n");
            return -1;
        }
        return result;
    }
}

int main () {
int x,y;
float result=0;
do {
    printf("pls type 2 numbers (mult<20): ");
    scanf("%d %d", &x, &y);
}while (x*y >= 20);
printf("you selected %d %d\n", x, y);
result = F(x,y);
printf("%f\n", result);
return 0;
}




