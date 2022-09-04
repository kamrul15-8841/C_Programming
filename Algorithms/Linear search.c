#include<stdio.h>
int main()
{
    int i=1,j,n ,z;
    int arr[20];

    printf("Enter number of Elements in list ");
    scanf("%d",&n);

    printf("Enter elements of list: ");
    for(j= 0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }

    printf("Enter Element to find :");
    scanf("%d",&z);
    i=0;
    while(i<n && z!=arr[i] )
    {
        i++;

    }
    if(i<n)
    {
        printf(" %d Found at position %d",z,i);
    }
    else
    {
        printf("%d not found at position %d",z,i);
    }
    return 0;
}

