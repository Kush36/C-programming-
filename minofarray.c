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
     int min = a[0];
    for(i=0;i<n;i++){
       if(min>a[i])
       min = a[i];
    }
        printf("%d is the min ",min);

    return 0;
}
