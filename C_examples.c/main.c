#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Odd Numbers are :",2*i-1);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
        sum+=2*i-1;
    }
    printf("\nSum of odd numbers up to %d numbers is: %d",n,sum);

    return 0;
}
