#include<stdio.h>
void main()
{
  int n,r,ld;
  printf("Enter a value of number n ");
  scanf("%d",&n);
  r =0;
  while(n!=0){
      ld=n%10;
      n=n/10;
      r=r*10+ld;
  }
  printf("reverse of digits is %d",r);
      
  }