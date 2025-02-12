// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1;
    printf("enter a number 1:");
    scanf("%d",&num1);
  
    if (num1>0){
            printf("it is positive");
            if (num1%2==0){
                printf("it is even");
            }
            else{
                printf("it is odd");
            }
    }    
    else if(num1<0){
        printf("it is negative");
        if(num1%5==0){
            printf("it is divisible by 5");
        }
        else{
            printf ("it is not divisible by 5");
        }
    }
    return 0;
}