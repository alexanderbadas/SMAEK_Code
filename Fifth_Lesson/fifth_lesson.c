#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2;
    int sum = 0;

    printf("pls vale dyo arithmous me keno");
    scanf("%d %d", &n1, &n2);
    printf("oi arithmoi pou edwses einai %d kai %d\n", n1, n2);

    if (n1 > n2) {
        for (int i = n2; i <= n1; i++){
            sum += i;
        }
        printf("to athroisma twn metaxi arithmwn einai %d\n", sum);
    }
    else if (n1 < n2) {
        for (int i = n1; i <= n2; i++){
            sum += i;
        }
        printf("to athroisma twn metaxi arithmwn einai %d\n", sum);
    }
    else {
        printf("oi arithmoi einai isotimoi ara to athroisma einai %d\n", n1 + n2);
    }

}