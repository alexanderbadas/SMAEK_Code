#include <stdio.h>
#include <stdlib.h>

int main () {

int x, sum=0, count=0;
float average;
while (x!=-100) {
  printf("pls type temp(-100 to exit): ");
  scanf("%d", &x);
  if (x!=-100) {
    sum+=x;
    count++;
  }
}
if (count!=0) {
  average=(sum*1.0)/count;
  printf("you gave %d temps and average= %f\n", count, average);
}
else {
  printf ("den mou edoses tipota\n");
}
  return 0;
}








