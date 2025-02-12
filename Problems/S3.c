//do while program
#include <stdio.h>

int main() {
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    do {
        printf("%d\n",x);
        x--;
    } while (x>0);

    return 0;
}
