
#include <stdio.h>
#include<math.h>

float norm(int *x, int *y)
{ float d;
d=sqrt(pow((x[1]-x[0]),2)+pow((y[1]-y[0]),2));
return d;
}
int main()
{   int x[2];
    int y[2];
    x[0]=66;
    x[1]=99;
    y[0]=25;
    y[1]=69;
    
     float distance=norm(x,y);
    printf("%f",distance);

    return 0;
}