#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1. Να διαβαζει εναν ακεραιο αριθμο Ν
2. Να υπολογιζει ποσα ψηφία εχει, ποσα ειναι αρτια και ποσα ειναι περιττα
3. να υπολογιζει το αθροισμα των ψηφιων
4. να ελεγχει αν ο αριθμος ειναι παλιδρομος
*/

int main () {

    int num, digit, count=0, odd=0, even=0, sum=0;

    printf("pls give me a number: ");
    scanf("%d", &num);
    for (;num !=0; num = num / 10) {
        digit = num % 10;
        sum += digit;
        count++;
        if (digit % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }   
    }
    printf("the number you gave me has %d digits. From them %d are even and %d are odd\n", count, even, odd);
    printf("the sum of the number's digits is %d\n", sum);
    return 0;
}