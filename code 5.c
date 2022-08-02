//Recursive function to calculate sum of digits of a given number

#include<stdio.h>

int sumDigits(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Sum of Digits of %d is %d",N,sumDigits(N));
    return 0;
}

int sumDigits(int num)
{
    if(num==0)
       return 0;
    return num%10+sumDigits(num/10);
}