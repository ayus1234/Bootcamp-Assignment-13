//Recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>

int sumOddN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Sum is %d",sumOddN(N));
    return 0;
}

int sumOddN(int num)
{
    if(num==1)
       return 1;
    return 2*num-1+sumOddN(num-1);
}