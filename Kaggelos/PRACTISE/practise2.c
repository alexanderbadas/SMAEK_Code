#include <stdio.h>
#include <stdlib.h>

int main () {
/*diabazei arithmous se enan pinaka mexri na dosei o xrhsths 0*/
int i=0, x, arr[100], count=0, sum=0;
while (true) {
    printf("pls give me a number: ");
    scanf("%d", &x);
    arr[i] = x;
    sum += x;
    count++;
    i++;
    if (x==0) {
        break;
    }
}
printf("you gave me %d numbers whose summ is %d\n\n", count, sum);


/*apo autous tous arithmous na tuponei mono tous artious*/
int even;
printf("the even numbers you gave me are :\n\n");
for (int j=0;j < count;j++) {
    if ( arr[j] % 2 == 0 && arr[j] != 0) {
        printf("%d\n", arr[j]);
    }
}


return 0;
}