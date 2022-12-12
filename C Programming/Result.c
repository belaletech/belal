#include<stdio.h>
int main()
{
    float p;
    printf("Enter your percent \n");
    scanf("%f",&p);
    if(p<=100 &&p>=60)
    {
        printf("1st Devision");

    }
    if(p<60 && p>=45)
    {
        printf("2nd Devison");
    }
    if (p<=45 && p>=33)
    {
        printf("3rd division");
    }
    if (p<33)
    {
        printf("Fail");
    }
    return 0;
    
    
}