#include <stdio.h>
int main()
{
    int i,j,k,n,nsp,nst;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    nsp = 1;
    nst = n-1;
    for(int i=1;i<=2*n-1;i++)
    printf("*");
    printf("\n");
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=nst;j++)
         printf("*");
         {
         for(k=1;k<=nsp;k++)
         printf(" ");
         {
        for(j=1;j<=nst;j++)
         printf("*");
          
         }
         }
         nst--;
         nsp+=2;
        printf("\n");
    }
    return 0;
}
