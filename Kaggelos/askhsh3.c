#include <stdio.h>
#include <stdlib.h>
//na graftei programma to opoio na zhta apo ton xrhsth 2 arithmous kai upologizei to athrisma olon ton arithmon metajh auton//
int main() {
int x,i,y,min,max,result=0;
printf("pls give me 2 numbers: ");
scanf("%d %d",&x,&y);
if (x>y) {
  min = y;
  max = x;
}
else{
  min = x;
  max = y;
}
for (i=min;i<=max;i++)
  result = result + i;
printf("the sum of the numbers between is %d\n",result);


return 0;
}








