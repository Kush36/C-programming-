#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter size of an array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     int max = a[0];
    for(i=0;i<n;i++){
       if(max<a[i])
       max = a[i];
    }
        printf("%d is the max ",max);

    return 0;
}


