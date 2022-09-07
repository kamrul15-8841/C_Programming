#include<stdio.h>
int main()
#define PI 3.14159
{
    double radius, sphere;
    scanf("%lf",&radius);

    sphere = (4/3.0) * PI * (radius*radius*radius);
    printf("VOLUME = %.3f",sphere);
    return 0;
}
