//Recursive function to calculate factorial of a given number

#include<stdio.h>

int factorial(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Factorial of %d is %d",N,factorial(N));
    return 0;
}

int factorial(int num)
{
    if(num==0)
       return 1;
    return num*factorial(num-1);
}