#include <stdio.h>
int main()
{
   int i,f_d,l_d,n,sum=0;
   printf("Enter any nunber to find sum of its first and last digits ");
   scanf("%d",&n);
  l_d=n%10;
   for(i=n;i>=10;i=i/10){
        n=n/10;
   }
   f_d=n;
   sum=(f_d+l_d);
    printf("%d is the sum of first and last digit ",sum);
    return 0;
}
  
  
  
  