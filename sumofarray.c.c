#include <stdio.h>
int main()
{
    int n, i,sum=0;
    printf("Enter size of an array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
        printf("%d is the sum ",sum);
    return 0;
}