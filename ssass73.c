// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i,num,a=-1,b=1,c;
    system("cls");

    printf("Enter the number : ");
    scanf("%d",&num );
    for ( i = 1; i < 10000; i++)
    {
        c=a+b;
        if (num==c)
        {
           break;
        }
        a=b;
        b=c;
        
    }
    if (num==c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    
    getch();
    return 0;
}