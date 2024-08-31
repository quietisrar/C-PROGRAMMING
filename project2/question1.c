#include <stdio.h>
void main()
{
    int marks;
    char ch;

    printf("enter your marks:-");
    scanf("%d", &marks);

    ch = marks >= 90
             ? 'A'
         : marks >= 80
             ? 'B'
         : marks >= 70
             ? 'C'
         : marks >= 60
             ? 'D'
         : marks <= 33
             ? 'F'

             : printf("sorry,you failed");
    printf("\n %c", ch);

    switch (ch)
    {
    case 'A':
        printf("\nexcellent work");

        break;

    case 'B':
        printf("\nwell done");
        break;

    case 'C':
        printf("\ngood job");
        break;

    case 'D':
        printf("\nyou passed but,you could do better");
        break;

    case 'F':
        printf("\nsorry you failed");
        break;

    default:
        printf("\ninvalid input");
        break;
    }

    if (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D')
    {
        printf("\n'congratulation,you are eligible for the next level'");
    }
    else
    {
        printf("\n'please try again next time'");
    }
}