#include <stdio.h>

void main(){
    int month, year;
    scanf("%d %d", &month, &year);

    if(month == 2 ){
       if((year % 4 == 0) &&(year % 400 == 0 || year % 100 != 0) )
            printf("29\n");
        else
            printf("28\n");
    }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("31\n");
    else
        printf("30\n");
}
