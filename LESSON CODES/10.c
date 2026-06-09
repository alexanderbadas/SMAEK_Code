#include <stdio.h>
#include <stdlib.h>

int main () {

int x, sum=100, count=-1;
float average;
do {
  printf("pls type temp(-100 to exit): ");
  scanf("%d", &x);
 
  sum+=x;
  count++;
  
}while (x!=-100);
if (count!=0) {
  average=(sum*1.0)/count;
  printf("you gave %d temps and average= %f\n", count, average);
}
else {
  printf ("den mou edoses tipota\n");
}
  return 0;
}








