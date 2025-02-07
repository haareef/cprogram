#include <stdio.h>

int main() {
    int case_var , a , b , c;
    
    printf("enter number 1 :");
    scanf ("%d",&a );
    
    
    printf("enter number 2 :");
    scanf ("%d",&b );
    
    
    printf("enter a case :");
    scanf ("%d",&case_var );

    // Switch statement
    switch (case_var) {
    case 1:
        c=a+b;
        printf("%d + %d = %d",a , b , c);
        break;

    case 2:
        c=a-b;
        printf("%d - %d = %d",a , b , c);
        break;

    case 3:
        c=a*b;
        printf("%d * %d = %d",a , b , c);
        break;
        
    case 4:
        c=a%b;
        printf("%d / %d = %d",a , b , c);
        break;
        
    default:
        printf("Default case is Matched.");
        break;
    }
return 0;
}