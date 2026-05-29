      
 //wap to count the number of digit 
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the value of N: ");
    scanf("%d",&n);  
        
   while(n!=0)
   {
       count++;
       n=n/10;
   } 
    
   printf("the number of digit %d:", count);
   return 0;
   
    
}