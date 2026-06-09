#include <stdio.h>
#include <stdlib.h>
/*να γραφτει συναρτηση η οποια δεχεται 3 ορισματα ακεραιους αριθμους και επιστρεφει 
τον μικροτερο + 2 φορες τον μεσαιο + 3 φορες τον μεγαλυτερο*/

int F (int a,int b,int c) {
    int min, max, med;
    int result=0;
    if ((a >= b) && (a >= c))
        max = a;
    if ((b >= a) && (b >= c))
        max = b;
    if ((c >= b) && (c >= a))
        max = c;
    if ((a <= b) && (a <= c))
        min = a;
    if ((b <= a) && (b <= c))
        min = b;
    if ((c <= b) && (c <= a))
        min = c;
    med = a + b + c - min - max;
    result = min + 2*med + 3*max;
    return result;   
}

int main () {
int x,y,z;
int result=0;
printf("pls type 3 numbers : ");
scanf("%d %d %d", &x, &y, &z);
printf("you selected %d %d %d\n", x, y, z);
result = F(x,y,z);
printf("%d\n", result);
return 0;
}




