#include <stdio.h>
int main(){
    int num = 25;
    int rem = 0, binary = 0, i = 1;
    while (num >= 1)
    {
        rem = num % 2;
        num = num / 2; 
        binary = binary + rem * i; 
        i = i * 10;
    }
    printf("%d\n", binary);
    return 0;
}