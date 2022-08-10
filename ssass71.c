// 1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, N, a = -1, b = 1, c;
    system("cls");

    printf("Enter the value of N :  ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("Nth term of fibonacci series is %d", b);

    getch();
    return 0;
}