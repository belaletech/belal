#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number:\n");
    scanf("%d",&a);
    // printf("Enter your 2nd number \n");
    // scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping a=%d and b=%d",a,b);
    return 0;
}