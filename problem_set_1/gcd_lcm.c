#include <stdio.h>
int gcd(int, int);
int main(){
    int a = 4, b = 2;
    int a_b = a * b;
    int lcm = (a / gcd(a ,b)) * b;
    printf("%d\n", lcm);
    return 0;
}

int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }