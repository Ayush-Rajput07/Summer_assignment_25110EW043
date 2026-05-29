//wap to check if number is pallindrom or not
#include<stdio.h>
int main(){

    int n,t,rem,rev=0;
    printf("enter any number: ");
    scanf("%d",&n);
    t=n;
    while(n!=0){

        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(t==rev)
    {
        printf("enter number is pallindrom");
    }
        
    else{
        printf("entered number is not pallindrom");
    }
    return 0;



}