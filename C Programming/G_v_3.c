#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your 2nd number \n");
    scanf("%d",&a);
    printf("Enter your 2nd number \n");
    scanf("%d",&b);
    printf("Enter your 3rd number \n");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("%d  is greater n",a);
    }
    if(b>a&&b>c)
    {
        printf("%d   is greater n",b);
    }
    if(c>a&&c>b);
    {
        printf("%d  is greater n",c);
    }
    return 0;
}