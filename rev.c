#include <stdio.h>
void main(){
    int num = 12345,rem = 0,rev = 0;
    while (num != 0)
    {   
        rem = num % 10; //5, 4, 3, 2, 1
        num = num / 10; //1234, 123, 12, 1
            // (0 x 10) + 5 = 0 + 5
            // (5 x 10) + 4 = 50 + 4
            // (54 x 10) + 3 = 540 + 3
            // (543 x 10) + 2 = 5430 + 2
            // (5432 x 10 ) + 1 = 54320 + 1
            // (54321 x 10) + 0 
            // printf("(rev * 10)%d + rem %d =  %d\n",(rev * 10) , rem,(rev * 10) + rem);
        rev = (rev * 10) + rem;
    }
    printf("rem: %d\n", rev);
}