#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*na graftei porgramma to opoio zhta apo ton xrhsth 
enan akeraio arithmo n kai upologizei thn seira apo 
i=1 eos n, tou 2 / (2 + i) me xrhsh anadromikhs sunarthshs*/

int main () {

    int n;
    double sum=0.0;
    printf("pls give me an integer number: ");
    scanf("%d", &n);
    printf("the number you gave me is %d. I will now calculate the sum of the series 2/(2+i) for i=1 to %d.\n", n, n);
    for (int i=1;i<=n;i++) {
        sum += 2.0 / (2.0 +i);
    }   
    printf("the sum of this series is: %.3lf\n", sum);
    return 0;
}