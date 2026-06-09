#include <stdio.h>
#include <stdlib.h>

/*να ζητα απο τον χρηστη 4 ακεραιους αριθμους, οι αριθμοι να αποτελουν 2 κλασματα a/b kai c/d το προγραμμα να εμφανιζει
το αθροισμα των 2 κλασματων
τη διαφορα τους
το γινομενο τους
ποιο ειναι μεγαλυτερο
να γινεται ελεγχος ωστε κανενας παρονομαστης να μην ειναι μηδεν*/

int main () {
    int a,b,c,d;
    printf ("pls give me 4 numbers with a space between, a b c d (the b and d must be diferent of 0): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (b==0 || d==0) {
        printf("false numbers for klasmata\n");
    }
    else {
        printf("%d/%d + %d/%d = %d/%d\n",a,b,c,d, a*d+c*b, b*d);
        printf("%d/%d - %d/%d = %d/%d\n",a,b,c,d, a*d-c*b, b*d);
        printf("%d/%d x %d/%d = %d/%d\n",a,b,c,d, a*c, b*d);
    }
    if (c==0) {
        printf("i cannot diaireso this klasmata\n");
    }
    else {
        printf("%d/%d / %d/%d = %d/%d\n",a,b,c,d, a*d, b*c);
    }
    return 0;
}