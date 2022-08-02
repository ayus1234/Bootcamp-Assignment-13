//Recursive function to calculate sum of first N Even natural numbers

#include<stdio.h>

int sumEvenN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Sum is %d",sumEvenN(N));
    return 0;
}

int sumEvenN(int num)
{
    if(num==1)
       return 2;
    return 2*num+sumEvenN(num-1);
}