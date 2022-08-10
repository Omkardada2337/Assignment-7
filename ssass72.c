// 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, N, a=-1, b=1, c;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
       
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    getch();
    return 0;
}