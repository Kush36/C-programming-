#include <stdio.h>
int main()
{
    float x1,y1;
    printf("Enter value of x1 and y1 %f %f",x1, y1);
    scanf("%f %f",&x1,&y1);
    float x2 , y2;
    printf("Enter value of x2 and y2 %f %f", x2, y2);
    scanf("%f %f",&x2 ,&y2);
    float x3 , y3;
    printf("Enter the value of x3 and y3 %f %f", x3, y3);
    scanf("%f %f",&x3 ,&y3);
    if(((x1-x2)*(y2-y3)/2-(y1-y2)*(x2-x3)/2)==0){
        printf("Three points lie  on straight line");
    }
    else{
        printf("Three points do not lie on straight line");
    }
    return 0;
}