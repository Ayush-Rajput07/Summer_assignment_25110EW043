//wap to reverse the number 
#include<stdio.h>
int main (){
    int n,rev=0;
    printf("enter any number :");
    scanf("%d",&n);  
    int rem;
    while(n!=0) {
    rem=n%10; 
    rev=(rev*10)+(rem);
    n=n/10;
    }
    printf("reverse of given number is %d ",rev);
    return 0;
}







