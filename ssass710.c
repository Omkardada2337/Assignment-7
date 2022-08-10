//  10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i,sum=0,t,temp;
    system("cls");

    printf("following are the ARMSTRONG numbers under 1000 :");
    for ( i = 1; i < 1000; i++)
    {
        temp=i;//here we have assign value of i to temp because we won't have to change value of i
        sum=0;
        while (temp!=0)
        {
            t=temp%10;
            sum=sum + t*t*t;
            temp/=10;
        }
        if (sum==i)
        {
            printf("%d ",i);
        }
        
    }
    

    getch();
    return 0;
}