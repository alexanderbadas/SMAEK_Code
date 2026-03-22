#include <stdio.h>
#include <stdlib.h>

int main() {
/*na graftei programma se glvssa c to opoio zhta 2 akeraioys 
arithmous kai sthn sunexeia emfanizei mynhma o prvtos htan megalhteros 
h o deuterow htan megalitros h oi ariumoi htan isoi kai sthn sunexeia 
emfanizi tis 4 basikes prajeis metajy tvn ariumvn*/
int x, y;
printf("pls give me 2 numbers: \n");
scanf("%d-%d",&x, &y);
if (x > y)
  printf("the first number is the bigger\n");
else if (x < y)
  printf("the second number is the bigger\n");
else
  printf("the 2 numbers are equal\n");

printf("to athroisma tous einai %d\n",x + y);
printf("h diafora tous einai %d\n",x - y);
printf("to ginomeno tous einai %d\n",x * y);
if (y!=0)
printf("to piliko tous einai %f\n", x / (y*1.0 ));
else 
printf("den mporei na ginei h dieresh\n");

return 0;
}








