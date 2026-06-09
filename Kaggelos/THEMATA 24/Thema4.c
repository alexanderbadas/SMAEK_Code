#include <stdio.h>
#include <stdlib.h>

/*να γραφτει προγραμμα το οποιο να ζητα απο τον χρηστη να δωσει εναν κωδικο, ακεραιο αριθμο 4 ψηφιων
ο σωστος κωδικος ειναι το 2572 και ειναι αποθηκευμενο στο προγραμμα
για την σωστη εισαγωγη του κωδικου ο χρηστης εχει συνολικα 3 ευκαιριες*/

int main () {
    int password, count=1;
    while (true) { 
        printf("pls type the password (%d/3)\n", count);
        scanf("%d", &password);
        if (password==2572) {
            printf("mprabo to brhkes kai mphkes\n");
            break;
        }
        else {
            if (count==3) {
            printf("sorry bro you are locked\n");
            break;
            }
            else {
                count++;
            }
        }
    }
    return 0;
}