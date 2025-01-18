// Write a program to find the largest of three numbers.
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter the 3 numbers = ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1 > n2 && n1 > n3) 
    printf("%d this is largest number in three numbers",n1);
    else if(n2 > n1 && n2 > n3) 
    printf("%d this is largest number in three numbers",n2);
    else if(n3 > n2 && n3 > n1) 
    printf("%d this is largest number in three numbers",n3);
    else 
    printf("nothing");
    
    return 0;
}
