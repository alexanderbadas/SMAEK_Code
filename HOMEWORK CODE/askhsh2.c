#include <stdio.h>
#include <stdlib.h>
/*na graftei programma se glossa c pou na zhtaei apo ton 
xrhsth enan arithmo kai na emfanizei thn propaidia autou mexri to 10*/
int main() {
int x;
printf("pls give me a number: ");
scanf("%d",&x);
int i;
for(i=1;i<11;i++)
printf("%d * %d = %d\n",i ,x ,i*x);
printf("this is the multiplication of the number you gave me till 10\n");



return 0;
}








