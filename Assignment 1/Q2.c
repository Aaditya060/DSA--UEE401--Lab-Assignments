#include <stdio.h>

int main()
{
    int num;
    int n;
    int count_zero =0;
    int count_neg = 0;
    int count_pst=0;
    
    printf("Enter total numbers you want to display: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("enter %d number: ",i);
        scanf("%d",&num);
        
        if(num>0){
            
            count_pst += 1;
        }
        else if(num<0){
            
            count_neg += 1;
        }
        else if(num == 0){
            
            count_zero += 1;
        }
        else{
            printf("You entered invalid number");
        }
    }
    
    printf("Total number of Positive Number are: %d",count_pst);
    printf("\nTotal number of Negative Number are: %d",count_neg);
    printf("\nTotal number of Zero's are: %d",count_zero);
}
