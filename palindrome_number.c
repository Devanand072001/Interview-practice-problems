#include <stdio.h>
int check_palindrome(int);
void main()
{
    int num;
    scanf("%d", &num);
    if (num == check_palindrome(num))
        printf("palindrome number\n");
    else
        printf("not palindrome number\n");
}
int check_palindrome(int n)
{
    int rev = 0, rem = 0;
    while (n)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    return rev;
}