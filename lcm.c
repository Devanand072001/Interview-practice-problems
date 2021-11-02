#include <stdio.h>
void lcm_while(int a, int b){
    int max = (a > b)? a : b;
    int lcm = 0;
    while(1){
        if( (max % a == 0) && (max % b == 0)){
             lcm = max;
             break;
        }
        max++;
    }
    printf("%d\n", lcm);
}
int lcm_recursion(int a, int b){
    int max = (a > b)? a : b;
    if((max % a == 0) && (max % b == 0)){
        return max;
    }
    max++;
    lcm_recursion(a, b);
}
void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    lcm_while(a, b);
    printf("recursion: %d\n", lcm_recursion(a, b));
}