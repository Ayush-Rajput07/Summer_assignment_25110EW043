//wap to calculate sum of first sum N natural numner
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the valure of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("the sum of first N natural numbers is%d",sum);
    return 0;
}