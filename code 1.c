//Recursive function to calculate sum of first N natural numbers

#include<stdio.h>

int sumN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Sum is %d",sumN(N));
    return 0;
}

int sumN(int num)
{
    if(num==1)
       return 1;
    return num+sumN(num-1);
}