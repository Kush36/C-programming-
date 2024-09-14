jmb#include<stdio.h>
int main()
{
  int n,sum,l;
  printf("Enter a value of number n ");
  scanf("%d",&n);
  sum=0;
  while(n!=0){
      l= n%10;
       n=n/10;
      sum=sum+l;
  }
    printf("Sum of digits of number is %d",sum);
   return 0;
}