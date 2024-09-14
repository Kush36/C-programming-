#include <stdio.h>
int main()
{
   int i,j,n;
   printf("Enter a number");
   scanf("%d",&n);
   int a = n/2 + 1 ;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++){
       if(i==a || j==a)
       printf("*");
       else
       printf(" ");
   }
   printf("\n");
   }
    return 0;
}
