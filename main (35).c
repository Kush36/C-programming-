#include <stdio.h>
int main()
{
  int i,j,l,n;
  printf("Enter no. of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n-i;j++)
     printf(" ");
     for(j=1;j<=i;j++)
     printf("%d",j);
     for(l=1;l<=i-1;l++)
     printf("%d",l);
  printf("\n");
  }
    return 0;
}
