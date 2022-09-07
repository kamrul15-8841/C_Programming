#include<stdio.h>
int main()
#define PI 3.14159
{
    int radius;
    double volume;
    scanf("%d",&radius);

    volume = (4/3.0) * PI * (radius*radius*radius);
    printf("VOLUME = %.3f",volume);
    return 0;
}

