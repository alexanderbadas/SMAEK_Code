#include<stdio.h>
#include<stdlib.h>
/*να γραφτει συναρτηση που να υπολογιζει το παραγοντικο ενος 
αριθμου και να το επιστρεφει και αν δεν υπολογιζεται να επιστρεφει -1*/
int fact (int n) {
    int result=1;
    if (n<0) 
        result=-1;
    else 
        for (int i=2;i<=n;i++) 
            result*=i;    
    return result;
}


int main () {
int x,result;
printf("pls type a number: ");
scanf("%d", &x);
result=fact(x);
if (result==-1)
    printf("%d! den orizetai\n",x);
else 
    printf("%d! = %d \n",x,result);

return 0;
}



