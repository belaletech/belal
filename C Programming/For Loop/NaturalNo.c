#include<stdio.h>
int main()
{
    int no;
    printf("Enter any number \n");
    scanf("%d",&no);
    printf("Natural number from 1 to %d is given below \n",no);
    for(int i=1;i<=no;i++)
    {
        printf("%d \n",i);
    }
    return 0;
}