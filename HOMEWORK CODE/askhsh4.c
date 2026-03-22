#include <stdio.h>
#include <stdlib.h>
/*na graftei programma to opoio na zhta apo ton xrhsth 
3 arithmous kai na tous vazei se aujousa seira*/
int main() {
int a,b,c,max,min,med;
printf("pls give me 3 numbers: ");
scanf("%d %d %d",&a,&b,&c);
min=a;
if (b<=min)
  min=b;
if (c<=min)
  min=c;
max=a;
if (b>=max)
  max=b
if (c>=max)
  max=c
med=a+b+c-max-min;
printf("the numbers u gave in ascending order are %d-%d-%d\n",min ,med ,max);

return 0;
}








