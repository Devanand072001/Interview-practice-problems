#include <stdio.h>
int is_prime(int);
void main(){
    int num = 54;
    int is_expressed = 0;
    for(int i = 2; i <= num; i++){
        // if 
        if(is_prime(i) && is_prime(num - i) ){
            is_expressed = 1;
            printf("%d + %d = %d\n", i , (num - i), i + (num - i));
        }
    }
    if(!is_expressed){
        printf("%d cannot be expressed as sum of two prime numbers\n", num);
    }
    
}
int is_prime(int n){
    int prime_flag = 1;
    if (n <= 1)
        return 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime_flag = 0;
            break;
        }
    }
    return prime_flag;
}