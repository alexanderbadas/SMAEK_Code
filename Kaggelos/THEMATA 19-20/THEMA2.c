#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*na graftei sunarthsh pou na dexetai os
orisma enan akeraio arithmo x kai na epistrefei 
to athroisma 1/(1+1)^2+1/(1+2)^2+...+1/(1+x)^2 
an to x einai thetikos akeraios, diaforetika na ektuponei -1*/
int main () {

    int x;
    double sum = 0.0;
    printf("pls give me a positive integer: ");
    scanf("%d",&x);
    if (x > 0){
        for (int i=1;i<=x;i++){
            sum += 1.0/pow(1+i,2);
        }
        printf("the sum is: %.4f\n",sum);
    } else {
        printf("-1\n");
    }








return 0;   
}