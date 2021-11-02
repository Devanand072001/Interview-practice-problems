#include <stdio.h>
int count_digit(int num){
     int count = 0;
        while (num != 0 ) {
            num = num / 10;
            count++;
        }
        return count;
}
void main(){
    int num;
    scanf("%d", &num);
    printf("%d\n", count_digit(num));
}