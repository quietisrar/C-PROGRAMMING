#include <stdio.h>

int main()
{
    int num = 0;
    printf("please eneter the number\n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("\nnumber is  positive");
    }
    else if (num < 0)
    {
        printf("\nnumber is  nagetive");
    }
    else
    {
        printf("\nthe number is zero");
    }

    return 0;
}
