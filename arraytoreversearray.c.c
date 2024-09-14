#include <stdio.h>
#include<limits.h>
int main()
{
    int n, i,rev=0;
    printf("Enter size of an array");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    b[i] = a[n-1-i] ;
    }
    for(i=0;i<n;i++)
    {
      printf("%d ",b[i]);  
    } 
    return 0;
}
