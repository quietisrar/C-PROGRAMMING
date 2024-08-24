#include <stdio.h>

int main()
{
    int a, b;

    printf("eneter the number a\n");
    scanf("%d", &a);
    printf("eneter the number b\n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("\na is > than b");
    }
    else if (b > a)
    {
        printf("\nb is > then a");
    }
    else
    {
        printf("a and b is equal");
    }

    return 0;
}
