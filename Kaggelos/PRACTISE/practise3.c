#include <stdio.h>
#include <stdlib.h>

/*se 2 pinakes 5 theseon na diavazei tis times kai na apothhkeuei mono tis thetikes times tou.
na ftiaxtei tritos pinakas me to athroisma tou kai na ton ektuponei*/

int main () {

    int arr1[5], arr2[5], arr3[5], x, y;
    for (int i=1;i<=5;i++) {
        printf("give me a number for the first set: ");
        scanf("%d", &x);
        if ( x <= 0 ) {
            printf("give only positive numbers.\npls try again");
        }
        else {
            arr1[i] = x;
        }
    }
    for (int i=1;i<=5;i++) {
        printf("give me a number for the second set: ");
        scanf("%d", &y);
        if ( y <= 0 ) {
            printf("give only positive numbers.\npls try again\n");
        }
        else {
            arr2[i] = y;
        }
    }
    printf("the c array is:\n\n");
    for (int i=1;i<=5;i++) {
        arr3[i] = arr1[i] + arr2[i];
        printf("%d\n", arr3[i]);
    }
    return 0;
}