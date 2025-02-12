#include <stdio.h>

int main() {
    int n;
    printf("enter a number 1:");
    scanf("%d",&n);
    
    int sum = 0;
    for ( int i=0 ; i<= n ; i++){
        sum = sum + i ;
    }
        printf("%d", sum);

    return 0;
}