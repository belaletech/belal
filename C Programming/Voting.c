#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age \n");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("you are eligible for voting");
    }
    else
    {
        printf("you are not Eligible for voting");
    }
}