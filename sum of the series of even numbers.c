#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Even Numbers are :");
    for(i=0;i<=n;i++)
    {
        printf("%d ",2*i);
        sum+=2*i;
    }
    printf("\nSum of Even numbers up to %d numbers is: %d",n,sum);

    return 0;
}
