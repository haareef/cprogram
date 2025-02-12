#include <stdio.h>

int main() {

    int x;
    printf("enter a number :");
    scanf("%d",&x);
    do {
        printf("%d\n",x);
        x++;
    } while (x <=3);

    return 0;
}