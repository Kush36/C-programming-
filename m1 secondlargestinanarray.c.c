#include <stdio.h>
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
     int max = a[0];
    for(i=0;i<n;i++)
    {
       if(max<a[i])
       max = a[i];
    }
        // printf("%d is the max ",max);
        
    int t = max ; 
    max=a[0];
    int y ;
     
     for(i=0 ; i<n ; i++)
     {
         if(y!=max && a[i]<t) 
          y=a[i]; 
         
     }
      printf("%d", y);


    return 0;
}
