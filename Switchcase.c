#include<stdio.h>
int main()
{
    int number,i,n,m,j;
    start:printf("Select From Menu\n");
    printf("1.Select Number  1 \n");
    printf("2.Select Number  2 \n");
    printf("3.Select Number  3 \n");
    printf("3.Select Number  4 \n");
    printf("3.Select Number  5 \n");
    printf("Enter a Key :");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
        printf("Enter a row and column number of piramid:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
               printf("* ");
            }
            printf("\n");
        }
        break;
    case 2:
        printf("Enter a row and column number of piramid:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
               printf("* ");
            }
            printf("\n");
        }
        break;
    case 3:
        printf("Enter a row and column number of piramid:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
               printf("* ");
            }
            printf("\n");
        }
        break;
    case 4:
        printf("Enter a row and column number of piramid:");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
            for(j=i;j>=n;j--)
            {
               printf("* ");
            }
            printf("\n");
        }
        break;
    case 5:
        printf("Enter a row and column number of piramid:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
               printf("* ");
            }
            printf("\n");
        }
        break;
    default :
        printf("You Entered Wrong Key");
        break;
    }
    goto start;

    return 0;

}

