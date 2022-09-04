#include<stdio.h>
int main()
{
    int i = 1,n ,z;
    int arr[20] = {1,2,3,4,5,6,7,8,9};

    printf("Enter Element to find :");
    scanf("%d",&z);

    while(i<8 && z!=arr[i] )
    {
        i++;

    }
    if(i<8)
    {
        printf(" %d Found ",z);
    }
    else
    {
        printf("%d not found ",z);
    }
    return 0;
}
