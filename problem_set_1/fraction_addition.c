#include <stdio.h>
int gcd(int, int);
int main(int argc, char const *argv[])
{
    //  x1      x2       (x1 * y2) + (x2 * y1)   numorator
    //----- +  ----- =  ---------------------- = ---------
    //  y1      y2              y1 * y2          denomator

    // numorator = (x1 * y2) + (x2 * y1)
    // denominator =  y1 * y2
    // simplification:
    // numorator = numorarotor / GCD(numorator , denominator)
    // denominator = denominator / GCD(numorator, denominator)
    int x1, y1, x2, y2, num ,den;
    // x1 = 1, y1 = 5, x2 = 3, y2 = 15;
    printf("Enter  x1, y1 value (x1 / y1): \n");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2, y2 value (x2 / y2): \n");
    scanf("%d %d", &x2, &y2);
    
    num = (x1 * y2) + (x2 * y1);
    den = y1 * y2;

    int gcd_ = gcd(num, den);

    num = num / gcd_;
    den = den / gcd_;
    printf("num /den = %d / %d \n",num,den);
    return 0;
}
int gcd(int a, int b){
    if(b != 0)
        return gcd(b, a % b);
    else
        return a;
}
