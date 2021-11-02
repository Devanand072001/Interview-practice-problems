// num = 145
// strong number => 1! + 4! + 5! = 145
// 1, 2, 145, 40585, ...
#include <stdio.h>
int strong_num(int n);
int fact(int n);
void main()
{
    long int num;
    printf("Enter number:\n ");
    scanf("%ld", &num);
    // for(int i = 1; i <= num; i++){
    //     if( i == strong_num(i))
    //     printf("%d ", strong_num(i));
    // }
    if (num = strong_num(num))
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);
}
int strong_num(int n)
{
    int sum = 0, rem = 0;
    while (n > 0)
    {
        rem = n % 10;
        // printf("n: %d\n", n);
        n = n / 10;
        sum = sum + fact(rem);
        // printf("rem: %d\n", rem);
    }
    return sum;
}

int fact(int n)
{
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}