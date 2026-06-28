/*
 Write a C program to input a year and check whether it is a leap year using if-else.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x;
    puts("Enter your num:");
    scanf("%d",&x);
    if(x%4==0){
        printf("leap");
    }
    else{
        printf("not leap");

    }
}
