/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
float norm(int a[2],int y[2]);

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
float norm(int a[2], int b[2])
{ float d;
d=sqrt(pow((a[1]-a[0]),2)+pow((b[1]-b[0]),2));
return d;
}