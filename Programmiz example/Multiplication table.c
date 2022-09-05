#include<stdio.h>
int main()
{
    int n,i,j,range;
    printf("Enter an Positive integer to multiplication :");
    scanf("%d",&n);
    printf("Enter range : ");
    scanf("%d",&range);
    for(i=1;i<=n;i++)
    {
//          do{
//
//    }while(range <= 0);
    for(j=1; j <= range; ++j)
    {
        printf("%d X %d = %d\n",i,j,i*j);
    }
      printf("\n");
    }


    return 0;
}
