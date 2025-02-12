#include <stdio.h>

int main() {
    int case_var , a , b , c;
    
    printf("enter number a :");
    scanf ("%d",&a );
    
    
    printf("enter number b :");
    scanf ("%d",&b );
    
    
    printf("enter number c :");
    scanf ("%d",&c );

    if(a<b){
        if(b<c){
            printf("c is greater");
        }
        else{
            printf("b is greater");
        }
    }
    else{
        printf("a is greater");
    }
    
return 0;
}