/*
    Program to printing series of n natural numbers (n)
    Enter a no to print series of n natural numbers:
    55
    1.....55
*/

#include<stdio.h>

int main()
{
    printf("Program to printing series of n natural numbers (n) : \n\n");
    
    int n = 0;
    
    while(n <= 55)
    {
        printf("%d\n", n);
        n++;
    }
    
    return 0;
}
