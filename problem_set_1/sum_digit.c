#include <stdio.h>
void main(){
    int num = 12345,sum = 0, digit = 0;

    while(num != 0){
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("%d\n", sum);
}