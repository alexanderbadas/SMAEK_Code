#include <stdio.h>
#include <stdlib.h>

/*να γραφτει συναρτηση η οποια να δεχεται 3 αριθμους ακεραιους και επιστρεφει
2*μικροετερος + 3*μεσαιος + 4*μεγαλυτερος
στην μαιν να ζητουνται οι 3 αριθμοι απο τον χρηστη και να εμφανιζεται το αποτελεσμα της συναρτησης*/

int F (int a,int b,int c) {
    int min, med, max, result=0;
    min=a;
    if (b<=min) {
        min=b;
    }
    if (c<=min) {
        min=c;
    }
    max=a;
    if (b>=max) {
        max=b;
    }
    if (c>=max) {
        max=c;
    }
    med = a+b+c-min-max;
    result = 2*min + 3*med +4*max;
    return result;
}

int main () {
    int x, y, z, result=0;
    printf("pls give me 3 numbers with a space between: ");
    scanf("%d %d %d", &x, &y, &z);
    result = F(x,y,z);
    printf("%d", result);
    return 0;
}