#include <stdio.h>
int prime(int);
void main(){
    int start, end;
    printf("Enter starting and ending\n");
    scanf("%d%d", &start, &end);
    printf("prime numbers between %d and %d are: \n",start, end);
    for(int i = start ; i < end; i++){
        if(prime(i) && i != 1)
            printf("%d ", i);
    }
}
int prime(int num){
    int is_prime = 1;
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            is_prime = 0;
            break;
        }
    }
    // if(is_prime)
    //     return 1;
    // else
    //     return 0;
    return is_prime;
}