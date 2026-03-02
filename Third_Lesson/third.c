#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;
    printf("Dwse dyo arirmous pou xorizontai me paula (n1 - n2)\n");
    scanf("%d - %d", &n1, &n2);

    if (n1 > n2){
        printf("O prwtos arithmos einai megaluteros apo ton deutero\n");
    }
    else if (n1 < n2){
        printf("O deuteros arithmos einai megaluteros apo ton prwto\n");
    }
    else {
        printf("Oi arithmoi einai isotimoi\n");
    }

    printf("to athrisma tous einai %d\n", n1 + n2);
    printf("h diafora einai %d\n", n1 - n2);
    printf("to ginomeno tous einai %d\n", n1 * n2);
    if (n2 != 0){
        printf("h diairesi tous einai %f\n", n1 / (n2 + 0.00));
    }
    else {
        printf("Den mporoume na diaireisoume me 0\n");
    }

    return 0;

}