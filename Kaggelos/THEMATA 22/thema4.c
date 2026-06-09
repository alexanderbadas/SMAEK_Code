#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
/*na graftei programma to opio zhtaei 
apo ton xrhsth na dosei 2 diadoxika passwords. 
kai gia ta 2 passwords  o xrhsths exei sunolika 5 eukairies. 
na ginetai se kathe periptwsh h katallhlh ektupvsi*/
int main () {
int pass1,pass2,intput1,intput2,tries=5;
printf("pls give me 2 passwords to set: ");
scanf("%d %d",&pass1 ,&pass2);
while (pass1!=intput1||pass2!=intput2){
    printf("you have %d tries left\n",tries);
    printf("type first password: ");
    scanf("%d",&intput1);
    printf("type second password: ");
    scanf("%d",&intput2);
    tries--;
    if (pass1==intput1 && pass2==intput2){
        printf("welcome");  
    }
    if (tries==0){
        printf("re eisai malakas den jereis ta passwords");
    }
}
return 0;
} 