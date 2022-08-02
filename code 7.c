//Recursive function to calculate HCF of two numbers

#include<stdio.h>

int HCF(int,int);

int main()
{
    int N1,N2;
    printf("Enter two numbers\n");
    scanf("%d %d",&N1,&N2);
    printf("HCF of %d and %d is %d",N1,N2,HCF(N1,N2));
    return 0;
}

int HCF(int num1,int num2)
{
    if(num1%num2==0)
       return num2;
    if(num2%num1==0)
       return num1;
    if(num1>num2)
       return HCF(num1%num2,num2);
    else
       return HCF(num1,num2%num1);
}