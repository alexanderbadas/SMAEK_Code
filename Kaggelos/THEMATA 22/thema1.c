#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*na graftei sunarthsh h opoia dexetai 3 
akeraious arithmous kai ektupvnei tis pragmatikes 
rizes toy trionumoy ax^2+bx+c=0 na ginetai se kathe 
periptwsh h katallhlh ektupvsi*/
int main () {

    double a, b, c, delta;
    printf("pls give me 3 numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("the numbers you gave me are (%.3lf)-(%.3lf)-(%.3lf)\n", a , b, c);
    delta = b*b - 4*a*c;
    if (a==0) {
        if (b==0 && c!=0) {
            printf("there is no real solution\n");
        }
        else {
            printf("the solution is %.3lf\n", -c / b);
        }
    }
    else {
        if (delta<0) {
            printf("there is no real solution\n");
        }
        else if (delta==0) {
            printf("there are same solutions which they are equal to %.3lf\n", (-b) / (2*a));
        }
        else {
            printf("there are 2 different solutions the %.3lf and the %.3lf\n", (-b + sqrt(delta)) / (2*a) , (-b - sqrt(delta)) / (2*a));
        }
    }
    return 0;
}