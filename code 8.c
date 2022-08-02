//Recursive function to print first N terms of Fibonacci series

#include<stdio.h>

int fibonacci(int);

int main()
{
    int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
        printf("%d ",fibonacci(i));
    return 0;
}

int fibonacci(int num)
{
    if(num==0 || num==1)
       return num;
    return fibonacci(num-1)+fibonacci(num-2);
}