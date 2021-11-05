#include <stdio.h>
int check_leap(int);
void main(){
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);
    if( year % 400 == 0)
        printf("leap year\n");
    else if(year % 100 == 0)
        printf("not leap year\n");
    else if( year % 4 == 0)
        printf("leap year\n");
    else
        printf("not leap year\n");
    
    printf("________________\n\n");
    
    if (check_leap(year))
        printf("leap\n");
    else 
        printf("not leap\n");
    
}
int check_leap(int year){
    if((year % 4 == 0) && (year % 4 == 0 || year % 100 !=0))
        return 1;
    else
        return 0;
}