#include <stdio.h>
#include <stdlib.h>
/*zhta apo ton xrhsth 4 arithmous a b c d opou einai arithmiths kai 
paronomasths 2 kalsmatvn antisoixa, na emfanizei tis basikes prajeis ton 
duo auton klasmaton */
int main() {
int a,b,c,d;
printf("pls give me 4 numbers: ");
scanf("%d %d %d %d",&a,&b,&c,&d);
if (b==0&&d==0)
    printf("give the correct numbers\n");
else {
    printf("%d/%d + %d/%d = %d/%d\n",a ,b ,c ,d ,(a+b)*(b*d) ,(b*d));
    printf("%d/%d - %d/%d = %d/%d\n",a ,b ,c ,d ,(a-b)*(b*d) ,(b*d));
    printf("%d/%d + %d/%d = %d/%d\n",a ,b ,c ,d ,(a*b) ,(b*d));
    if (c!=0)
        printf("%d/%d + %d/%d = %d/%d\n",a ,b ,c ,d ,(a*d) ,(b*c));
   else
    printf("give the correct numbers\n");
}
return 0;
}