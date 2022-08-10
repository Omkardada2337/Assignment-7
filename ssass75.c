// 5. Write a program to check whether two given numbers are co-prime
// numbers or not
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, a, b;
    system("cls");

    printf("Enter the two numbers : ");
    scanf("%d%d", &a, &b);
    for (i = (a > b ? b : a); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0 )
        {
            break;
            
        }
    }
    if (i == 1)
    {
        printf("%d and %d are co-prime numbers", a, b);
    }
    else
    {
        printf("%d and %d are NOT co-prime numbers", a, b);
    }

    getch();
    return 0;
}