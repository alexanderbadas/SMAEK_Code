#include <stdio.h>
#include <stdlib.h>

/*na diabazei 10 arithmous kai na metra posoi einai >0 posoi <0 kai posoi =0*/

int main() {
    int num,  count1=0, count2=0, count3=0;
    printf("pls give me 10 numbers: \n");
    for (int i=0;i<10;i++) {
        scanf("%d", &num);
        if ( num > 0) {
            count1++;       
        }
        else if ( num < 0) {
            count2++;
        }
        else {
            count3++;
        }

    }
    printf("from the 10 numbers you gave me the %d are possitive the %d are negative and the %d are zero\n", count1, count2, count3);    
    
    return 0;
}