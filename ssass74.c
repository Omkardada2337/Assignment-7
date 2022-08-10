// 4. Write a program to calculate HCF of two numbers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, a, b;
    system("cls");

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        for (i = b; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                printf("HCF of %d and %d is %d", a, b, i);
                break;
            }
        }
    }
    else
    {
        for (i = a; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                printf("HCF of %d and %d is %d", a, b, i);
                break;
            }
        }
    }

    getch();
    return 0;
}