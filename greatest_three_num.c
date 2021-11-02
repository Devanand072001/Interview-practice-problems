#include <stdio.h>
void main(){
    int num1, num2, num3;
    printf("Enter 3 nums: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    int max = (num1 > num2)? ( (num1 > num3)? num1 : num3 ) : ((num2 > num3)? num2 : num3);
    printf("Max: %d\n",max);
}