#include <stdio.h>
void main()
{
    int first_ang, second_ang, third_ang;

    printf("enter the value of first_ang:-");
    scanf("%d", &first_ang);

    printf("enter the value of second_ang:-");
    scanf("%d", &second_ang);

    third_ang = 180 - (first_ang + second_ang);
    printf("third angle: %d\n", third_ang);
}