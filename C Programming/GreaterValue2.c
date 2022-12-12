#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your 1st number \n");
    scanf("%d",&a);
    printf("Enter your 2nd number \n");
    scanf("%d",&b);
    if (a>b)
    {
        printf("your 1st number is greater ");
    }
    if (a==b)
    {
        printf("your 1st and 2nd number is equal");
    }
    if (a<b)
    {
        printf("your 2nd number is greater ");
    }
}