// 1       2       3       4
// 10^3   10^2     10^1     10^0
// => (1 x 1000) + (2 x 200) + (3 x 10) + (4 x 1) = 1234
//
// 'num / 10' => 123, 12, 1, 0
// 'num % 10' => 4, 3, 2, 1, 0
#include <stdio.h>
int main()
{
    int num = 1234, rem = 0;
    while (num > 0)
    {
        rem = (rem * 10) + num % 10;
        num = num / 10;
    }
    printf("%d\n", rem);
}