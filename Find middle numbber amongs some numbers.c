#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter Numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num2 > num1 && num3 < num2 || num3>num1 && num1>num2)   // 3 2 1 or 3 1 2
    {
        printf("%d",num1);
    }
    else if(num1>num2 && num2>num3 || num3>num2 && num2>num1) // 1 3 2 or 2 3 1
    {
        printf("%d",num2);
    }
    else if(num1>num3 && num3>num2 || num2>num3 && num3>num1) // 1 2 3 or 2 1 3
    {
        printf("%d",num3);
    }
    else
        printf("nothing");
//    printf("%d %d %d", num1,num2,num3);
    return 0;
}
