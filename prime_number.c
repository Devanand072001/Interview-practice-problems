#include <stdio.h>
void main(){
    int num;
    printf("Enter number: \n");
    scanf("%d", &num);
    int is_prime = 1;
    for(int i = 2; i < num; i++){
        if( num % i == 0){
            is_prime = 0;
            break;
        }
    }
    if (is_prime)

       printf("prime\n");
    else
        printf("not prime\n");
    
}