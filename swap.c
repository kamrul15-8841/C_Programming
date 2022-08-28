#include<stdio.h>
int main()
{
    int a = 100, b = 200;
    printf("Before swap a = %d\n",a);
    printf("Before swap b = %d\n",b);
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
    swap(a,b);
    printf("after swap a = %d \n",a);
    printf("after swap b = %d\n",b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
