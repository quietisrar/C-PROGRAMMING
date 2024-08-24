#include <stdio.h>

int main()
{
    int age;
    printf("\nenter your age\n");
    scanf("%d", &age);
    printf("\nyou have enterd  %d as your age", age);

    if (age >= 18)
    {
        printf("\nyou can vote");
    }
    else if (age >= 10)
    {
        printf("\nyou are between 10 to 18 \nyou can vote for kids");
    }
    else if(age>=3)
    {
        printf("\nyou are between 3 to 10 \nyou can vote for child ");
    }
    else
    {
        printf("\nyou cannot vote");
    }
    return 0;
}
