#include <stdio.h>

int main()
{
    float angle1, angle2, third_angle;

    // Input the two angles
    printf("Enter the first angle (in degrees): ");
    scanf("%f", &angle1);

    printf("Enter the second angle (in degrees): ");
    scanf("%f", &angle2);

    // Check if the angles are valid
    if (angle1 <= 0 || angle2 <= 0)
    {
        printf("Angles must be positive numbers.\n");
        return 1;
    }

    if (angle1 + angle2 >= 90)
    {
        printf("The sum of the two angles must be less than 90 degrees.\n");
        return 1;
    }

    // Calculate the third angle
    third_angle = 90 - (angle1 + angle2);

    // Display the result
    printf("The third angle of the right triangle is: %.2f degrees\n", third_angle);

    return 0;
}
