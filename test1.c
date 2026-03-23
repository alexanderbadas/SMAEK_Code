#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, min, max;
    printf("pls give me 2 numbers: ");
    scanf("%d %d",&a,&b);
    if (a > b){
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    
    printf("o %d einai megalyteros apo ton %d\n", max ,min);
}