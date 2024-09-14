#include <stdio.h>
#include<limits.h>
int main()
{
    int n, i;
    printf("Enter size of an array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     a[n-1-i] ;
    }
    for(i=0;i<n;i++)
    {
      printf("%d ",a[n-1-i]);  
    } 
    return 0;
}
