#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*na diabazei enan akeraio arithmo kai na 
briskei posa prifia exei posa einai artia kai posa einai peritta*/

int main () {

    int num, digit, count=0, odd=0, even=0;

    printf("pls give me a number: ");
    scanf("%d", &num);
    for (;num !=0; num = num / 10) {
        digit = num % 10;
        count++;
        if (digit % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }   
    }
    printf("the number you gave me has %d digits. From them %d are even and %d are odd\n", count, even, odd);

    return 0;   
}