//wap to sum of digit
#include<stdio.h>
int main(){

    int n,sum=0;
    printf("enter any number: ");
    scanf("%d",&n);
    int remainder;
    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
       
    }
     printf("the sum of digit of given number is %d",sum);
    
    return 0;
}