#include <stdio.h>

float calculate_gross_salary(float base_salary, float hra_percentage, float da_percentage, float ta_percentage)
{
    float hra = (hra_percentage / 100) * base_salary;
    float da = (da_percentage / 100) * base_salary;
    float ta = (ta_percentage / 100) * base_salary;
    return base_salary + hra + da + ta;
}

int main()
{
    float base_salary, hra_percentage, da_percentage, ta_percentage, gross_salary;

    printf("Enter the base salary: ");
    scanf("%f", &base_salary);

    printf("Enter the percentage of HRA: ");
    scanf("%f", &hra_percentage);

    printf("Enter the percentage of DA: ");
    scanf("%f", &da_percentage);

    printf("Enter the percentage of TA: ");
    scanf("%f", &ta_percentage);

    gross_salary = calculate_gross_salary(base_salary, hra_percentage, da_percentage, ta_percentage);

    printf("The gross salary is: %.2f\n", gross_salary);

    return 0;
}
