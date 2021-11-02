#include <stdio.h>
#include <ctype.h> //important
int main(int argc, char const *argv[])
{
    char ch ;
    scanf("%s", &ch);
    if(isalpha(ch))
        printf("alpha\n");
    else
        printf("not alpha\n");
    return 0;
}
