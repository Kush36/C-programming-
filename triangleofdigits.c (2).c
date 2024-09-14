#include <stdio.h>
int main()
{
  int i,j,l,n,a=64,d;
  printf("Enter no. of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
        d =a+i;
       char ch = (char)d;
      for(j=1;j<=n-i;j++)
     printf(" ");
     for(j=1;j<=i;j++)
     printf("%c",ch);
     for(l=1;l<=i-1;l++)
     printf("%c",ch);
  printf("\n");
  }
    return 0;
}
