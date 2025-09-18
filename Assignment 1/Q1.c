#include <stdio.h>

int main()
{
    float mile;
    printf("Enter the Distance in Miles: ");
    scanf("%f",&mile);
    
    float km;
    
    km = 1.609*mile;
    
    printf("Your distance in kilometer is: %.3f",km);
}
