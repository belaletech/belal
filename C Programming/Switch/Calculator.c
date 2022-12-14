#include<stdio.h>
int main()
{
    float x,y;
    char ch;
    printf("Enter Your First number \n");
    scanf("%f",&x);
    printf("Enter your Second number \n");
    scanf("%f",&y);
    printf("Enter \n + for Add \n - for Sub \n * for multiply\n / for Divide\n");
    scanf("\n %c",&ch);
    switch (ch)
    {
    case '+':
        printf("Add=%f \n",(x+y));
        break;
        case '-':
        printf("Sub=%f \n",(x-y));
        break;
        case '*':
        printf("Multipy=%f \n",(x*y));
        break;
        case '/':
        printf("Divide=%f \n",(x/y));
        break;
    
    default:
    printf("Invalid input!!");
        break;
    }
}