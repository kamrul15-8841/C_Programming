#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Even Numbers are :");
    for(i=1;i<=n;i+=2)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("\nSum of Even numbers up to %d numbers is: %d",n,sum);

    return 0;
}

