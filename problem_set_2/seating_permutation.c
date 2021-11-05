#include <stdio.h>
int fact(int);

void main(){
    int n, r;
    // n = no of people
    // r = no of seats
    printf("Enter no of peaople and seats: \n");
    scanf("%d %d", &n, &r);
    
    if(r > n){
        int temp = n;
        n = r;
        r = temp;
    }
    int permutation = fact(n) / fact(n - r);
    printf("Permutation of seating: %d\n", permutation);
}
int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact  = fact * i;
    }
    return fact;
}