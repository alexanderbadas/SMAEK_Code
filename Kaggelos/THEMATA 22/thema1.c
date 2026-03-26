#include <stdio.h>
#include <stdlib.h>
/*na graftei sunarthsh h opoia dexetai 3 
akeraious arithmous kai ektupvnei tis pragmatikes 
rizes toy trionumoy ax^2+bx+c=0 na ginetai se kathe 
periptwsh h katallhlh ektupvsi*/
int main () {
int a,b,c,D,x1,x2;
printf("pls give me 3 numbers: ");
scanf("%d %d %d", &a ,&b ,&c);
D = b*b - 4*a*c;
x1 = (-b+pow(D,1/2))/(2*a);
x2= (-b-pow(D,1/2))/(2*a);
if (D>=0)
    printf("x1 = %f and x2 = %f\n",(float)x1,(float)x2);
else
    printf("it remains stable\n");
    return 0;
}