#include <stdio.h>
void main(){
    int num = 8;
    int first = 0, second = 1;
    int third = 0;
    for (int i = 1; i < num; i++){
       printf("%d\n", first);
       third = first + second;
       first = second;
       second = third;
    }
}