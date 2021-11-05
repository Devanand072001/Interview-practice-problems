// HCF = GCD (HCF and GCD are same)
#include <stdio.h>
int gcd_recursion(int, int);
void main(){
    int a, b;
    printf("Enter 2 nums: \n");

    scanf("%d%d", &a, &b);
    int min = (a < b) ? a : b;
    int gcd = 0;
    while (min >= 2)
    {
        if((a % min == 0) && (b % min ==0)){
            gcd = min;
        }
        min--;
    }
    printf("gcd :%d\n", gcd);
    printf("recursion: %d\n", gcd_recursion(a, b));
}
int gcd_recursion(int a, int b){
    // if(b != 0){
    //     printf("%d %d\n", a,b);
         
    //     return gcd_recursion(b, a % b);
    //     }  
    // else    
    //     return a;
    if(a == 0)
        return b;
    else
        return(b%a, a);
}