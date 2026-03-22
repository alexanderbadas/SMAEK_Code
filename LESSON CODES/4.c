#include <stdio.h>
#include <stdlib.h>
/*na graftei programma to opoio na zhta apo ton xrhsth 2 arithmous 
kai upologizei to athrisma olon ton arithmon metajh auton*/
int main()  {
int i, x,result=1;

printf("pls type a number: ");
scanf("%d", &x);
if (x>=0){
  for(i=1;i<=x;i++) 
    result=result*i;
  printf("%d! = %d\n",x,result);
}
else
  printf("den orizetai\n");
return 0;
}








