#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet \n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}