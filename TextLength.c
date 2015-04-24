#include <stdio.h>
// อย่าลืม include <string.h> ด้วยนะครับ
#include <string.h>
int main()
{
    char s[100];
 
    printf("Input string : ");
    gets(s);
 
    printf("\n\nString ( %s ) length is ( %d ) \n\n", s, strlen(s));
 
    return 0;
}