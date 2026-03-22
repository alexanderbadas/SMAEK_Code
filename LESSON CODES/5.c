#include <stdio.h>
#include <stdlib.h>
//oles tis propedies apo to 1 eos 10//
int main()  {
int i, x;

for(x=1;x<=10;x++)   {
  for(i=1;i<=10;i++) 
    printf("%d * %d = %d\n",i,x,i*x);
  printf("------------------\n");
}
return 0;
}








