#include<stdio.h>
#include<string.h>

int main()
{
    char ch[20];
    int a,b,c;
    gets(ch);

    printf("Enter 3 integers :");
    scanf("%d %d %d", &a, &b, &c);
    puts(ch);
    printf("Numbers are: %d %d %d",a,b,c);


    return 0;
}
