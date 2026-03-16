#include <stdio.h>
#include <stdlib.h>
//na graftei programma to opoio na zhta apo ton xrhsth 2 arithmous kai upologizei to athrisma olon ton arithmon metaji tous, kai auton//
int main()  {
int a,b,i,sum=0,max,min;
printf("pls type 2 numbers(num1 num2): ");
scanf("%d %d",&a ,&b);
printf("u typed %d %d\n",a ,b);
if(a>b){
  min=b;
  max=a;
}
else{
  min=a;
  max=b;
}
printf("max=%d min=%d\n",max ,min);
for (i=min;i<=max;i++)
  sum=sum + i;
printf("sum=%d\n",sum);
return 0;
}








