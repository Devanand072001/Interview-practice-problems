#include <stdio.h>
void power(int, int);
void main(){
    int base, exponent;
    printf("base ^ exponent\n");
    printf("Enter base value: \n");
    scanf("%d", &base);
    printf("Enter exponent value: \n");
    scanf("%d", &exponent);
    power(base, exponent);
   
}
void power(int base, int exponent){
    int result = 1;
     for(int i = 1; i <= exponent; i++){
        result = result * base;
    }
    printf("%d ^ %d = %d\n", base, exponent, result);
}