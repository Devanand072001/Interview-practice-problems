// amstrong number = 153 (1, 5, 3) => count = 3
// 1^3 + 5^3 + 3^3 = 153
// 1634
// 1^4 + 6^4 + 3^4 + 4^4 = 1634

#include <math.h>
#include <stdio.h>

// note:
// complilation command :
//  gcc amstrong_number.c -lm -o amstrong_number && ./amstrong_number

int count(int);
int amstrong(int, int);
int power(int, int);
void main()
{
    int num = 9474;
    if (num == amstrong(num, count(num)))
        printf("%d is amstrong number\n", num);
    else
        printf("%d is not amstrong number\n", num);
}
// count no of digits
int count(int num)
{
    int count = 0, rem = 0;
    while (num)
    {
        rem = num % 10;
        num = num / 10;
        count++;
    }
    return count;
}
int amstrong(int num, int count)
{
    int sum = 0, rem = 0;
    while (num)
    {
        rem = num % 10;
        num = num / 10;
        // sum = sum + (int)pow(rem, count);
        sum = sum + power(rem, count);
    }
    return sum;
}
int power(int base, int exponent){
    int ans = 1;
    for(int i = 1; i <= exponent; i++){
        ans = ans * base;
    }
    return ans;
}