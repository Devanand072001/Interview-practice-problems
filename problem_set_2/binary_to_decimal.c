#include <math.h>
#include <stdio.h>

int main(){
    long num;
    scanf("%ld", &num);
    int sum = 0, i = 0;
    while(num){
        int digit = num % 10;
        num = num / 10;
        sum = sum + pow(2, i) * digit;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}