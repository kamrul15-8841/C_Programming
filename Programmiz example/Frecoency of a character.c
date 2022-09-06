#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,count = 0;
    char str[20];
    char ch;

    printf("Enter a String :");
//    fgets(str, sizeof(str),stdin);
    gets(str);

    printf("Enter a character to find the frequency of string:");
    scanf("%c",&ch);

    for(i = 0; str[i] != '\0'; ++i)
    {
        if(ch == str[i])
        {
            ++count;
        }
    }
    printf("Frequency of %c = %d",ch,count);
    return 0;

}
