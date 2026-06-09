#include <stdio.h>
#include <stdlib.h>
/*να γραφτει προγραμμα το οποιο να ζητα απο τον χρηστη επαναληπτικα αριθμους
και βρισκει τον μεσο ορο των αρνητικων και τον μεσο ορο των θετικων, αν ο χρηστης
δωσει τον αριθμο 0 να τερματιζει το προγραμμα*/

int main () {
int x=1,sump=0,sumn=0,countp=0,countn=0;
float mop, mon;
while (x!=0) {
    printf("pls give number: ");
    scanf("%d", &x);
    if (x>0) {
        countp++;
        sump+=x;
    }
    else if (x<0) {
        countn++;
        sumn+=x;
    }
}
mop = (sump*1.0)/countp;
mon = (sumn*1.0)/countn;
printf("%f for pos %f for neg\n",mop, mon);
return 0;
}




