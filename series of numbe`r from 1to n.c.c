#include <stdio.h>
int main()
{
    int j;
    printf("Enter value of j");
    scanf("%d",&j);
    while(j<=10)
    {
        j = j+1;
        printf("%d is output ",j);
    }
    return 0;
}
