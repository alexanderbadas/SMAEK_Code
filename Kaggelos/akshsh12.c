#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int tries=0;
    int unlocked = 1;
    int ch1 = 0,ch2 = 0;
    int pass1,pass2,input1,input2;

    printf("dwse 2 kwdikous me koma: ");
    scanf("%d,%d",&pass1,&pass2);

    while (input1 != pass1 || input2 !=pass2){
        
        if (input1 != pass1){
            printf("\n\ndwse kwdiko ena: ");
            scanf("%d", &input1);
        } else {
            ch1 = 1;
        }

        if (input2 != pass2){
            printf("\ndwse kwdiko dyo: ");
            scanf("%d", &input2);
        } else {
            ch2 = 1;
        }

        if (!ch1 || !ch2){
            tries += 1;
            printf ("\nlathos kapoios kwdikos, exeis akoma %d propsathies \n", 5-tries);
        }

        if (tries == 5){
            unlocked = 0;
            break;
        }
        
    }

    if (unlocked){
        printf("\nsygxarhthria, brikes tous kwdikous\n");
    } else {
        printf("\nLathos kwdikos polles fores, to systima klidwse\n");
    }


    return 0;
}