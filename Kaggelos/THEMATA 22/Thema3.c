#include <stdio.h>
#include <stdlib.h>
/*na dinei 2 arithmous akeraious kai na 
upologizei me xrhsh domhs for thn dunamh
me vash to mikrotero kai ektheth ton megalutero*/
int main () {
int x,y,b,p,r=1;
printf("pls give me 2 numbers: ");
scanf("%d %d",&x ,&y);
if (x>=y) {
    b = y;
    p = x;
}
else {
    b = x;
    p = y;
}
for (int i=1;i<=p;i++)
    r = r*b;
printf("the result is: %d\n",r);
return 0;
}