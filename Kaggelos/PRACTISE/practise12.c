#include <stdio.h>
#include <stdlib.h>

/*να γραφτει προγραμμα που να ζητα συνεχως αριθμους απο τον χρηστη και στο τελος να εμφανιζονται
ο μεσος ορος των θετικων
ο μεσος οσος των αρνητικων
το πληθος των θετικων
το πληθος των αρνητικων*/

int main () {
    int x, npos, nneg, sumpos=0, sumneg=0;
    printf("pls start to give me numbers if you want to stop give 0 :");
    do {
        scanf("%d", &x);
        if (x>0) {
            npos++;
            sumpos+=x;
        }
        else if (x<0) {
            nneg++;
            sumneg+=x;
        }
        else {
            break;
        }
    }while(x=!0);
    printf("meso oro thetikon: %f\nmeso oro negative: %f\narithmos positive: %d\narithmos negative: %d", sumpos*1.0/npos, sumneg*1.0/nneg, npos, nneg);
    return 0;
}