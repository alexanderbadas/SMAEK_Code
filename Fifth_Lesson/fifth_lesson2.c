#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    int n1, n2, n3;

    printf("pls vale tris arithmous me keno");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("oi arithmoi pou edwses einai %d kai %d kai %d\n", n1, n2, n3);


    if (n1 <= n2){
        a = n1;
        b = n2;
    } else {
        a = n2;
        b = n1;
    }
    if (n3 <= a){
        c = b;
        b = a;
        a = n3;
    } else if (n3 <= b){
        c = b;
        b = n3;
    } else {
        c = n3;
    }
    printf("oi aritmoi se seira mikroteros se megaliteros einai %d, %d, %d\n", a, b, c);

}