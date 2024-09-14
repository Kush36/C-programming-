#include <stdio.h>
int main()
{
    int n;
  printf("Enter a value of number n ");
  scanf("%d",&n);
  (n%2==0)?printf("%d is even number ",n):printf("%d is odd number ",n);
  return 0;
}