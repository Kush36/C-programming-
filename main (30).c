#include <stdio.h>
int main()
{
   int i,j,n,m;
   printf("Enter a number of rows: ");
   scanf("%d",&m);
   printf("Enter a number of columns: ");
   scanf("%d",&n);
    for(i=1;i<=n;i++)
   {
       for(j=1;j<=m;j++){
     // if(i==j || i==i && j==(n-i+1))
       if(i==j || i+j==(n+1))
       printf("*");
       else
       printf(" ");
   }
   printf("\n");
   }
    return 0;
}
