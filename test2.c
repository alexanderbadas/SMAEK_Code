#include <stdio.h>
#include <stdlib.h>

int main() {
    while (true) {
        int a, b, c, d;
        int flag = 1;
        printf("dwse 4 arithmous me keno: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        while (b == 0 || d == 0) {
            printf("den mporoume na kanoume prakseis me paranomasti 0 (dld to 2o kai 4o psifio)\ndwse 4 arithmous me keno: ");
            scanf("%d %d %d %d", &a, &b, &c, &d);
        }

        printf("\noi prakseis tha ginoun me ta klasmata %d/%d kai %d/%d\n\n", a, b, c, d);

        if (c == 0) {
            printf("epeidh to 3o noumero einai 0, den orizetai h praksi ths diaireshs\nan thes allakse ton allios dwse ksana 0 kai h praksi den tha gini \n\n");
            scanf("%d", &c);
            if (c == 0)
            {
                flag = 0;
            }
        }

        printf("to %d/%d + %d/%d einai %d/%d\n", a, b, c, d, a * d + c * b, b * d);
        printf("to %d/%d - %d/%d einai %d/%d\n", a, b, c, d, a * d - c * b, b * d);
        printf("to %d/%d * %d/%d einai %d/%d\n", a, b, c, d, a * c, b * d);

        if (flag) {
            printf("to %d/%d / %d/%d einai %d/%d\n", a, b, c, d, a * d, b * c);
        }

        printf("do you want to restart the program? (y/n): ");
        char answer;
        scanf(" %c", &answer);
        if (answer == 'n' || answer == 'N') {
            break;
        }

        return 0;
    }
}