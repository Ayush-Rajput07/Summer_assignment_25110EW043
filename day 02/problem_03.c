//wap to product of digit
#include<stdio.h>
int main(){

    int n,t=1,rem;
    printf("enter any numer: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        t=t*rem;
        n=n/10;
    }
    printf("product of digit of given number is %d: ",t);
    return 0;
}