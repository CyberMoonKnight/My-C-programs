#include<stdio.h>
#include<conio.h>
void main()
{
    int n, reversedNumber=0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n !=0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n = n/10;
    }
    printf(" Reverse number = %d", reversedNumber);
    getch();
}
