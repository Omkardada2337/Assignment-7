// 9. Write a program to check whether a given number is an Armstrong number
// or not
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, N, sum = 0, t;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &N);
   i = N;
    while(N)
    {
        t = N % 10;
        sum = sum + t * t * t;
        N = N / 10;
    }
    if (sum == i)
    {
        printf("%d is the ARMSTRONG number", i);
    }
    else
    {
        printf("%d is NOT the ARMSTRONG number", i);
    }

    getch();
    return 0;
}