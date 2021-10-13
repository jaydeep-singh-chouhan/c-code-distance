#include <stdio.h>
#include<math.h>

float norm(int *x, int *y)
{
    float distance;
    distance = sqrt(pow((x[1]-x[0]),2)+pow((y[1]-y[0]),2));
    return distance;
}

int main()
{
    int *x, *y;
    x = (int *)malloc(2 * sizeof(int));
    y = (int *)malloc(2 * sizeof(int));

    printf("Enter the value of x[0]:");
    scanf("%d",&x[0]);
    printf("Enter the value of x[1]:");
    scanf("%d",&x[1]);

    printf("Enter the value of y[0]:");
    scanf("%d",&y[0]);
    printf("Enter the value of y[1]:");
    scanf("%d",&y[1]);

    float distance=norm(x,y);
    printf("Distance between two points are %f\n", distance);

    return 0;
}

