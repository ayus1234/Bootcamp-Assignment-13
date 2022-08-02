//Program to calculate the power of any number using recursion

#include<stdio.h>

int power(int,int);

int main()
{
    int N,P;
    printf("Enter the number\n");
    scanf("%d %d",&N,&P);
    printf("%d raise to the power %d is %d",N,P,power(N,P));
    return 0;
}

int power(int num,int pow)
{
    if(pow==0)
       return 1;
    return num*power(num,pow-1);
}