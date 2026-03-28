#include <stdio.h>
#include <stdlib.h>

/*diavazei enan arithmo n kai emfanizei olous tous diairetes tou*/

int main () {
    
    int N;
    printf("pls my dear love give me a number: ");
    scanf("%d", &N);
    printf("the diairetes of N are:\n\n");
    for (int i=1;i<=N;i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}