#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number \n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("your given number is Even");
    }
    if (a%2==1)
    {
        printf("Your given number is odd");
    }
    return 0;
    
}