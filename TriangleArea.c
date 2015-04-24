#include <stdio.h>
 
int main()
{
    float base;
    float height;
 
    printf("\nInput Value Of Base : ");
    scanf("%f", &base);
 
    printf("Input Value Of Height : ");
    scanf("%f", &height);
      
    printf("\nArea Of a Triangle is %.2f \n\n", 0.5 * base * height);
 
    return 0;
}