#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of your 1st number\n");
    scanf("%d",&a);
    printf("Enter the value of your 2nd number\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping your number 1st number is =%d  and 2nd number is=%d\n ",a,b);
    return 0;
}