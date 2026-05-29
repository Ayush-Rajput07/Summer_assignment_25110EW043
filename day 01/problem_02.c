//wap to print multiplication of table
#include<stdio.h>
int main(){

    int n,i;
    printf("enter the value of N to print multiplication table: ");
    scanf("%d",&n);
    int mul;
    for(i=1;i<=10;i++){

        mul=n*i;
        printf(" %d * %d = %d\n ",n,i,mul);
     }
      printf("the multiplication table is %d ",mul);
      return 0;

}