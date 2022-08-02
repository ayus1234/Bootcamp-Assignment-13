//Recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>

int sumSquareN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Sum is %d",sumSquareN(N));
    return 0;
}

int sumSquareN(int num)
{
    if(num==1)
       return 1;
    return num*num+sumSquareN(num-1);
}