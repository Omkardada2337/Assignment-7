// 8. Write a program to find next Prime number of a given number
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, N, j;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &N);
    for (i = N + 1; i < 1000000; i++)
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
            break;
        }
    }

    getch();
    return 0;
}