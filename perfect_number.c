#include <stdio.h>
void main(){
    // int num = 28;
    // perfect number => sum of factors of num = num
    // 1 + 2 + 4 + 7 + 14 = 28
    long int num,sum = 0;
    printf("Enter number:\n ");
    scanf("%ld", &num);

    for(int i = 1; i < num; i++){
        if (num % i == 0) {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    if(sum == num){
        printf("perfect number\n");
    }
    else{
        printf("not perfect number");
    }
}