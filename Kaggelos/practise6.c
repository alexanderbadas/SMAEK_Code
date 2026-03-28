#include <stdio.h>
#include <stdlib.h>

/* *
   **
   ***
   ****
   ***** */

int main () {

    int num;
    printf("pls my dear love give me lovely number: ");
    scanf("%d", &num);
    for (int i=1;i <= num;i++) {
        for (int j=1;j <= i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    
    
    
    return 0;
}