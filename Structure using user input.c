#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[50];
    int age;
};
int main()
{
    int i,n;
    struct student record;

    printf("Enter Name:");
    gets(record.name);
//    fgets(record.name, 50, stdin);

    printf("Enter ID:");
    scanf("%d",&record.id);

    printf("Enter Age:");
    scanf("%d",&record.age);

    printf("Id: %d\n",record.id);
//    printf("Name: %ch",record.name);
    printf("Age: %d\n",record.age);
    printf("Name:");
    puts(record.name);

    return 0;
}

