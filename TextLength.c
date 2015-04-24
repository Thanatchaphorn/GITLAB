#include <stdio.h>
#include <string.h>
int main()
{
    char s[150];
 
    printf("Input string : ");
    gets(s);
 
    printf("\n\nString ( %s ) length is : ( %d ) \n\n", s, strlen(s));
 
    return 0;
}