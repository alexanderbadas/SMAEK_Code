#include <stdio.h>
#include <stdlib.h>

/*na graftei porgramma to opoio zhta apo ton xrhsth 
enan akeraio arithmo n kai upologizei thn seira apo 
i=1 eos n, tou 2 / (2 + i) me xrhsh anadromikhs sunarthshs*/

double F (int n) {
    double sum=0.0;
    if (n>=1) {
        for (int i=1;i<=n;i++) {
            sum = sum + (2.0 / (2.0+i));
        }
    }
    else {
        printf("re ameo prepei n>1\n");
    }
    return sum;
}

int main () {
    int n;
    double sum=0.0;
    printf("pls give me an integer number: ");
    scanf("%d", &n);
    sum= F (n);
    printf("the number you gave me is %d. The sum of the series 2/(2+i) for i=1 to %d is %lf\n", n, n, sum);
    return 0;
}