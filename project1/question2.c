#include <stdio.h>
void main()

{
    int base_salary, HRA_percantage, DA_percantage, TA_percantage, Gross_salary;

    printf("enter the base_salary:-");
    scanf("%d", &base_salary);

    HRA_percantage = base_salary * 10 / 100;
    DA_percantage = base_salary * 5 / 100;
    TA_percantage = base_salary * 8 / 100;

    Gross_salary = base_salary + HRA_percantage + DA_percantage + TA_percantage;

    printf("the gross salary is %d", Gross_salary);
}