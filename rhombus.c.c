#include <stdio.h>

int main()
{
   int i,j,n,k,l;
   printf("Enter a number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
        printf(" ");
        {
         for(k=1;k<=n;k++)
             printf("*");
             {
                 for(l=1;l<=i;l++)
                 printf(" ");
             }
        }
       
        printf("\n");
       
   }
  
    return 0;
}
