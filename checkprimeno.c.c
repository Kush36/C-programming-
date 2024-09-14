#include<stdio.h>
int main()
{
   int i,j,n,flag=0,p;
    printf("Enter a number n : ");
    scanf("%d",&n);
    if(n==0 || n==1)
     flag = 1;
     // 0 and 1 are not a prime numbers
     // change flag to 1 for non prime number
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
            flag = 1;
            break;
        }
        if(flag==0)
            printf("%d is a prime number ",n);
            else
            printf("%d is not a prime number",n);
    } 
    return 0;
}