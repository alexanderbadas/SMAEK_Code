#include <stdio.h>
#include <stdlib.h>
/*na lambanei enan eptapsifio arithmo opou ta 
2 prota na einai to x ta 2 epomena to y kai ta 3
 alla na einai to poso exei
 peristrafei se meires kai na upologizei 
 to paragontiko ths dekadas toy 3psifiou*/
int main () {
int num,x,y,angle,i,result=1;
printf("pls give me a 7-digit number:  ");
scanf("%d",&num);
x = num / 100000;
num = num % 100000;
y = num / 1000;
num = num % 1000;
angle = num % 365;
printf("your coordinates are ( %d , %d ) angle = %d\n",x ,y,angle);
for (i=1;i<=(num/10);i++)
    result = result * i;
printf("%d\n",num);
return 0;
}