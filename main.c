/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int x[2];
    int y[2];
    x[0]=66;
    x[1]=99;
    y[0]=25;
    y[1]=69;
    float d;
    d=sqrt(pow((x[1]-x[0]),2)+pow((y[1]-y[0]),2));
    printf("disatnce between two points is %f",d);

    return 0;
}
