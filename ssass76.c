// 6. Write a program to print all Prime numbers under 100
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    system("cls");

    for (i = 0; i < 100; i++)
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