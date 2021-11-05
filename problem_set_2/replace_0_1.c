#include<stdio.h>
int replace(int);
void main(){
    int num = 102405;
    printf("%d\n", replace(num));
   
    
}
int replace(int num){
    int digit;
     while (num)
    {   
        digit = num % 10;
        if(digit == 0)
            digit = 1;
        return replace(num / 10) * 10 + digit;
    }
}