//Write a program to perform basic arithmetic oprations.
#include <stdio.h>

int main() {
    char choise;
    printf("enter the opration that you want to perform : \n1.Addition \n2.Substraction\n3.multiplication\n4.Divide\n5.modulus == ");
    scanf(" %d",&choise);
    int n1,n2;
    printf("enter the numbers for oprations : ");
    scanf("%d %d", &n1,&n2);
    
    switch(choise)
    {
        case 1 : printf("Addition is = %d", n1+n2);
        break;
        case 2 : printf("substraction is = %d", n1-n2);
        break;
        case 3 : printf("multiplication is = %d", n1*n2);
        break;
        case 4 : printf("dividation is = %d", n1/n2);
        break;
        case 5 : printf("mod is = %d", n1%n2);
        break;
    }
    

    return 0;
}
