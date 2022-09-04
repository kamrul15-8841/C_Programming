#include<stdio.h>
int main()
{
    int l=0,h=4, xm,mid,z=5;
    int flag = 0;
    int arr[20] = {1,2,3,4,5};
    while(l<=h && !flag)
    {
        mid = (l+h)/2;
        xm = arr[mid];
        if(xm < z)
        {
            l = mid + l;
        }
        else if(xm > z)
        {
            h = mid - l;
        }
        else if(xm == z)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        printf("Elements found ",z);
    }
    else
    {
        printf("Elements not found ",z);
    }
    return  ;
}
