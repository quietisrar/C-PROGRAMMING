#include <stdio.h>

float celsius_to_fahrenheit(float celsius)
{
    return (9.0 / 5.0 * celsius) + 32.0;
}

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius_to_fahrenheit(celsius);

    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
