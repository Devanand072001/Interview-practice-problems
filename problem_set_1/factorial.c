#include <stdio.h>
long factorial(int);
long fact(int);
void main()
{
    int num;
    scanf("%d", &num);
    printf("%ld\n", factorial(num));
    printf("recursion: %ld\n",fact(num));
}
long factorial(int num)
{
    long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
long fact(int n){
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}