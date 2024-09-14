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
     int  max =INT_MIN;
     int smax =INT_MIN;
    for(i=0;i<n;i++)
    {
       if(max<a[i]){
       smax=max;
       max = a[i];
       }
       else if(smax<a[i] && max!=a[i]) 
       smax = a[i];
    }
      printf("%d", smax);
    return 0;
}
