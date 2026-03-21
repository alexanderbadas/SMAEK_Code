#include <stdio.h>
#include <stdlib.h>

int main () {
int x,y;
char op;
printf("pls type 2 numbers and an operator (x)(+,-,*,/)(y): ");
scanf("%d%c%d",&x, &op, &y);
if (op == '+') 
    printf("to athroisma einai %d", x + y);
else if (op == '-')
    printf("h diafora einai %d", x - y);
else if (op == '*')
    printf("to ginomeno einai %d", x * y);
else
    if (y==0)
        printf("den pragmatopoieitai diairesi me 0");
    else
       printf("to piliko einai %0.3f", (float)x/y);
return 0;
}








