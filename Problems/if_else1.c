// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1;
    printf("enter a number 1:");
    scanf("%d",&num1);
  
    if (num1<12){
            printf("you are child and get  50 percentage discount");
    }    
    else if (num1>=12 && num1<18){
            printf("you are teenager and get a 10 percentage discount");
    }
    else if (num1==18){
            printf("get a 20 percentage discount");
    }
    else if (num1>18){
            printf("you are adult and no discount");
    }
    else if (num1>=60){
            printf("you are senior citizen and get 30 percent discount");
    }
    
    
    return 0;
}