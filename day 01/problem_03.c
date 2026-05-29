//wap to factorial
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of N :");
    scanf("%d",&n);
    int fact=1;
    for(i=1;i<=n;i++) 
    fact=fact*i; 
    printf("factortial of given number is %d\n",fact);
    return 0;
    
    
    
}

