#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,distance;
    scanf("%lf %lf\n",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);


    distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("%.4f",distance);
    return 0;
}
