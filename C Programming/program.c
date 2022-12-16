#include <stdio.h>
int a,b,temp=0;
int main()
{

printf("Enter the Value of a:");
scanf("%d",&a);
printf("Enter the Value of b:");
scanf("%d",&b);
swap_with_2_variables();
swap_with_3_variables();
return 0;
}
//swapping with two number
void swap_with_2_variables()
{
a=a+b;
b=a-b;
a=a-b;
printf("Swapped With Two Number\n");
printf("a:%d\nb:%d\n",a,b);
}
//swapping with three number
void swap_with_3_variables()
{
temp=a;
a=b;
b=temp;
printf("Swapped With Three Number\n");
printf("a:%d\nb:%d\n",a,b);
}

//swapping by dividing 
void swap_byDivide_variables()
{
temp=a;
a=b;
b=temp;
printf("Swapped With Three Number\n");
printf("a:%d\nb:%d\n",a,b);
}