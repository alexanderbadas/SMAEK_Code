#include<stdio.h>
#include<stdlib.h>
/*na graftei sunarthsh pou na dexetai os
orisma enan akeraio arithmo x kai na epistrefei 
to athroisma 1/(1+1)^2+1/(1+2)^2+...+1/(1+x)^2 
an to x einai thetikos akeraios, diaforetika na ektuponei -1*/
int main () {
    int x,i;
    printf("pls give me a positive integer:  ");
    scanf("%d",&x);
    if (x <= 0)
        printf("-1\n");
    else {
        float sum = 0;
        for (i=1;i<=x;i++);
            sum += 1/((1+i)*(1+i));
        printf("the sum is: %.2f\n",sum);
    } 
return 0;   
}