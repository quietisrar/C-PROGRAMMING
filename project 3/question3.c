#include <stdio.h>
void main()
{
    int i, num, first, last;

    printf("enter the num:-");
    scanf("%d", &num);

    last = num % 10;

    while (num != 0)
    {
        first = num;
        num = num / 10;
    }
    printf("\nfirst num :%d and last num :%d", first, last);
    printf("\nsum of first and last digit is:%d", first + last);
}