#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);
    printf("enter c\n");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("a is min");
        }
        else

        {
            printf("c is min");
        }
    }
    else
    {
        if (b < c)
        {
            printf("b is min");
        }
        else
        {
            printf("c is min");
        }
    }
}
