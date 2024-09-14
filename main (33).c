#include <stdio.h>
int main()
{
   int i,j,n,k,a=64,d;
   printf("Enter a number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
        printf(" ");
        d = a+j;
            char ch =(char)d;
        {
            for(k=1;k<=i;k++)
            printf("%c",ch);
            a++;
        }
        printf("\n");
   }
    return 0;
}
