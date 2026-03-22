#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 void fizzbuzz(int n){
        for (int i = 1; i < n; i++){
            if (i%3==0 && i%5==0){
                printf("FizzBuzz\n"); }
            else if (i%3 == 0){
                printf("Fizz\n"); }
            else if (i%5 == 0){
                printf("Buzz\n"); }
            else{
                printf("%d\n", i); }
        }
    }


int main(void)
{
    printf("Hello World\n");

    char name;
    printf("What's your name?\n");
    scanf("%c", &name);
    printf("Hi %c\n",name);

    int x, y;
    printf("Please enter two numbers:\n");
    scanf("%d %d", &x, &y);
    printf("Their sum is %d\n", x+y);

    int r;
    printf("Please gimme the radius of the circle:\n");
    scanf("%d", &r);
    printf("The area of the circle is %f\n", 3.14* pow((double)r,(double)2));

    int z;
    printf("What's your temperature in Celsius?\n");
    scanf("%d", &z);
    printf("Your temperature in Fahrenheit is %f\n", (z*1.8)+32);

    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
        if(a%2==0)
        {
             printf("The number is even\n");
        }
        else
        {
            printf("The number is odd\n");
        }

        fizzbuzz(100);

    

    return 0;
}
