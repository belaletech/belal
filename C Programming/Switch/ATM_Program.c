#include<stdio.h>
int main()
{
    float amt,creditamt,debitamt;
    char ch;
    printf("Enter initial amout \n");
    scanf("%f",&amt);
    printf("Enter \n c for credit \n d for debit \n b for Balance \n");
    scanf("\n %c",&ch);
    switch (ch)
    {
    case 'C':
        printf("Enter credit amout \n");
        scanf("%f",&creditamt);
        amt=amt+creditamt;
        printf("New Amount=%f",amt);
        break;
        case 'd':
        printf("Enter debit amount \n");
        scanf("%f",&debitamt);
        if(amt>=debitamt)
        {
            amt=amt-debitamt;
            printf("New Amount=%f \n",amt);
            
        }
        else
        {
            printf("Insufficient amount \n");
        }
        break;
        case 'b':
        printf("Amount in your account =%f \n",amt);
        break;
    
    default:
    printf("Invalid Input !!");
        break;
    }
}