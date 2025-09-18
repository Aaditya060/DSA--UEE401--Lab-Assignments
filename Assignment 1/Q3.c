#include <stdio.h>

int main()
{
    float sal;
    float tax;
    printf("Enter your salary: ");
    scanf("%f",&sal);
    
    if(sal<15000){
        
        tax = 0 + (0.15*sal);
    }
    else if(sal<30000){
        tax = 2250 + (0.18*(sal-15000));
    }
    else if(sal<50000){
        tax = 5400 + (0.22*(sal-30000));
    }
    else if(sal<80000){
        tax = 11000 + (0.27*(sal-50000));
    }
    else if(sal<150000){
        tax = 21600 + (0.33*(sal-80000));
    }
    else if(sal<0 || sal>150000){
        return -1;
    }
    
    printf("Total paybale tax is: %f",tax);
}
