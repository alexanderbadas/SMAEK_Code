#include <stdio.h>
#include <stdlib.h>

int main () {
/*diabazo 5 arithmous kai tous athroizo*/
int x, arr[5], sum=0;
printf("pls type 5 numbers: \n");
for (int i=0;i<5;i++) {
    scanf("%d", &x);
    arr[i] = x;
    sum += x;
}
printf("the sum is %d\n\n", sum);

/*brhsko ton megalutero kai ton mikrotero*/
int max ,min;
max = arr[0];
min = arr[0];
for (int i=0;i<5;i++) {
    if (arr[i]>=max) {
        max = arr[i];
    }
    if (arr[i]<=min) {
        min = arr[i];
    }
}
printf("the min is %d and the max is %d\n\n",min ,max);

return 0;
}