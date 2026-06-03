//wap to check prime number or not
#include<stdio.h>
int main(){

    int n,i,count=0;
    printf("enter any number :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){

        if(n%i==0){
            count++;
        }}
        if(count==2){
            printf("enter number is prime number ");

        }
        else{
            printf("enter number is composite number");
        }
    
}

    