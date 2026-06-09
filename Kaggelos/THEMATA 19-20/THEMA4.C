#include<stdio.h>  
#include<stdlib.h>
#include<math.h>
/*na zhta apo ton xrhsth epanalelhmena akeraious 
arithmous mexri na mazepsei 100 thetikoys kai tous 
apothikeuei se enan pinaka. sthn sunexeia ektuponei 
ola ta stoixeia tou pinaka pou eiani megalutera apo 
ton meso oro ton stoixeion tou pinaka*/
int main () {
    int arr[100];
    int x,i=0;
    while (i<100) {
        printf("give me an integer number: ");
        scanf("%d",&x);
        if (x>0)
            arr[i]=x;
        i++;
    }
    int sum = 0;
    for (i=0;i<100;i++){
        sum += arr[i];
    }
    float avg = (float)sum / 100;
    printf("the average is: %.2f\n",avg);
    
    for (i=0;i<100;i++){
        if (arr[i] > avg){
            printf("%d is greater than the average\n",arr[i]);
        }
    }
    return 0;
}