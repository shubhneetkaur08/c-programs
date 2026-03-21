#include <stdio.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[10];
    float fees;
};

int main()
{
    struct student s1[2];
    int i;

    printf("Enter student details\n");

    for(i = 0; i < 2; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Enter roll no, name, fees: ");
        scanf("%d %s %f", &s1[i].roll_no, s1[i].name, &s1[i].fees);
    }

    printf("\nStudent records are:\n");
    for(i = 0; i < 2; i++)
    {
        printf("%d %s %.2f\n",
               s1[i].roll_no,
               s1[i].name,
               s1[i].fees);
    }

    return 0;
}
