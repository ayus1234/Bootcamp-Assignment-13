//Program to count the digits of a given number using recursion.

#include<stdio.h>

int countDigits(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Total Number of Digits in %d is %d",N,countDigits(N));
    return 0;
}

int count=0;
int countDigits(int num)
{
    if(num==0)
       return 0;
    {
        countDigits(num/10);
        count++;
    }
    return count;
}