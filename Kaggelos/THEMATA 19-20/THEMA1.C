#include<stdio.h>
#include<stdlib.h>
/*na zhta apo ton xrhsth 20 
akeraious thetikous arithmous
kai na tous apothikeuei se enan 
pinaka a, na zhta apo ton xrhsth 
allous 20 akeraious arithmous kai 
na tous apothikeuei se enan pinaka b.
Na upologizei to athroisma ton 2 pinakwn
kai na to apothikeueis se enan pinaka c.
Na emfanizei to athroisma tou megaluterou
kai tou mikroterou kai ton logo tous apo ton pinaka c */
int main () {
    printf("For the first array:\n");
    int arr_a[20];
    for (int i=0;i<20;i++){
        printf("pls give me a posotive integer:");
        scanf("%d",&arr_a[i]);
    }
    printf("For the second array:\n");
    int arr_b[20];
    for (int i=0;i<20;i++){
        printf("pls give me a posotive integer:");
        scanf("%d",&arr_b[i]);
    }
    int arr_c[20];
    for (int i=0;i<20;i++){
        arr_c[i] = arr_a[i] + arr_b[i];
    }
    int max = arr_c[0];
    int min = arr_c[0];
    for (int i=1;i<20;i++){
        if (arr_c[i] > max){
            max = arr_c[i];
        }
        if (arr_c[i] < min){
            min = arr_c[i];
        }
    }
    printf("the sum of the biggest and the smallest is: %d\n",max + min);
    printf("the ratio of the biggest to the smallest is: %.2f\n",(float)max / min);
return 0;    
}