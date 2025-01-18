// Write a program to display the multiplication table of the given number.
#include<stdio.h>
int main()
{
    int number;
    printf("enter the number = ");
    scanf("%d",&number);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n",i*number);
    }
    return 0;
}