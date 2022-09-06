#include<stdio.h>
int main()
{
    int number, originalNum,reminder,result=0;
    printf("Enter a three digit integer:");
    scanf("%d",&number);
    originalNum = number;
    while(originalNum != 0)
    {
        reminder = originalNum % 10;
        result += reminder*reminder*reminder;
        originalNum /= 10;

    }
    if(result == number)
    {
        printf("%d is an Armstrong Number ",number);

    }
    else
        printf("%d is not an Armstrong Number ",number);
    return 0;
}
