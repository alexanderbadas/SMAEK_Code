#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*να γραφτει προγραμμα το οποιο ζηταει απο τον 
χρηστη 2 ακεραιους αριθμους απο την γραμμη εντολων 
ως ορίσματα n,m και υπολογιζει την σειρα απο i=1 
εως m, (m+2) / (99-i) του  με χρηση συναρτησης*/

int main () {

    int n, m;
    double sum = 0.0;
    printf("pls give me 2 numbers with a space betwen them: ");
    scanf("%d %d", &n, &m);
    printf("you gave %d and %d and the sum of the series (m+2) / (99-i) is :\t", n, m);
    for (int i=1;i<=m;i++) {
        sum = sum + ((double)m+2.0) / (99.0-(double)i);
    }
    printf("%lf\n", sum);
    return 0;
}