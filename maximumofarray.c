#include <stdio.h>
int main()
{
    int n, i,max;
    printf("Enter size of an array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
       if(a[i]-a[i+1]>0)
        printf("%d is the max ",a[i]);
}
    return 0;
}
