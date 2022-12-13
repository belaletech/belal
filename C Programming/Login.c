#include<stdio.h>
#include<string.h>
int main()
{
    char u[500]="arisetechwithbelal@gmail.com",p[500]="Belal123@";
    char u1[500],p1[500];
    printf("Enter your userName \n");
    scanf("%s",u1);
    printf("Enter your password \n");
    scanf("%s",p1);
    if (strcmp(u,u1)==0&&strcmp(p,p1)==0)
    {
        printf("login Successful \n");
    }
    else
    {
        printf("Wrong username or password \n");
    }
    
    return 0;
    
}