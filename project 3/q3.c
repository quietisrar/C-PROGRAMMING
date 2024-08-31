#include<stdio.h>
void main()
{
    int i,num,first,last;
    
    printf("Enter Num:- ");
    scanf("%d",&num);

    last = num%10;

    while(num!=0)
    {
        first = num;
        num = num/10;
    }

    printf("\nfirst Num: %d and Last Num:- %d",first,last);       
    printf("\nSum of first and last digits is:- %d",first+last);
}