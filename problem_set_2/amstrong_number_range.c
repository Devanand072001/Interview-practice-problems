#include <math.h>
#include <stdio.h>
int is_amstrong(int, int);
int count(int);
int power(int, int);
void main()
{
    long start, end;
    printf("Enter starting and ending\n");
    scanf("%ld%ldd", &start, &end);
    for (int i = start + 1; i < end; i++)
    {
        if (is_amstrong(i, count(i)))
            printf("%d ", i);
    }
    printf("\n");
}
int count(int num)
{
    int rem = 0, count = 0;
    while (num)
    {
        rem = num % 10;
        num = num / 10;
        count++;
    }
    return count;
}
int is_amstrong(int num, int count)
{
    int n = num, rem, sum = 0;
    while (n)
    {
        rem = n % 10;
        n = n / 10;
        // sum = sum + (int)pow(rem, count);
        sum = sum + power(rem, count);
    }
    if (num == sum)
        return 1;
    else
        return 0;
}
int power(int base, int exponent)
{
    int ans = 1;
    for (int i = 1; i <= exponent; i++)
    {
        ans = ans * base;
    }
    return ans;
}