#include <stdio.h>
#include <stdlib.h>

int main() 
{
/*na graftei programma se glvssa c 
to opoio zhta 2 akeraioys arithmous kai 
sthn sunexeia emfanizei mynhma o prvtos htan 
megalhteros h o deuterow htan megalitros h oi 
ariumoi htan isoi kai sthn sunexeia emfanizi tis 4 
basikes prajeis metajy tvn ariumvn*/
int age;
printf("pls type your age: ");
scanf("%d",&age);
if (age < 0)
  printf("pls type your correct age\n");
else if((age>=0)&&(age<18))
  printf("you are a kid\n");
else if((age>=18)&&(age<30))
  printf("you are young\n");
else if((age>=30)&&(age<50))
  printf("you are too old\n");
else
  printf("ok\n");

printf("hi my name is angelos, age=%d\n",age);

return 0;
}








