// 7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, a, b, j;
    system("cls");

    printf("Enter the two numbers : ");
    scanf("%d%d", &a, &b);
    for (i = a + 1; i < b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", i);
        }
    }

    getch();
    return 0;
}