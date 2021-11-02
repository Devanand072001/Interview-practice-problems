#include <stdio.h>
void main()
{
    char ch;
    scanf("%s", &ch);
    printf("ascii of %c is %d\n", ch, ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("vowel\n");
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("consonent\n");
    else
        printf("number\n");
}