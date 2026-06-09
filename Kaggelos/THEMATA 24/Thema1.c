#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*να γραφτει προγραμμα το οποιο ζηταει απο τον 
χρηστη 2 ακεραιους αριθμους απο την γραμμη εντολων 
ως ορίσματα n,m και υπολογιζει την σειρα απο i=1 
εως m, (m+2) / (99-i) του  με χρηση συναρτησης*/

double F (int n, int m) {
    double sum = 0.0;
    if (m<1) {
        printf("to m prepei na einai megalutero apo to 1\n");
    }
    else {
        for (int i=1;i<=m;i++) {
            if (i==99) {
                sum =-1;
                break;
            }
            else {
                sum += ((double)m+2) / (99-i) ;
            }
        }
    }
    return sum;
}

int main () {
    int n,m;
    double sum;
    printf("pls give me 2 numbers with a space between: ");
    scanf("%d %d", &n, &m);
    sum = F(n,m);
    if (sum==-1) {
        printf("eisai ameo re malaka\n");
    }
    else {
        printf("to apotelesma ths seiras einai %.6f\n", sum);
    }
    return 0;
}