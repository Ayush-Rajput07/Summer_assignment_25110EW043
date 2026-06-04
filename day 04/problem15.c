//wap to check whether a number is armstrong or not
#include <stdio.h>
int main() {
    int n,x,sum=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    x=n;
    while(x>0){             
        rem=x%10;
        sum=sum+rem*rem*rem;
        x=x/10;


    }
    printf("Sum of cubes of digits: %d\n", sum);
    if(sum==n){
        printf("The number is an Armstrong number.\n");
    }
    else{
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}