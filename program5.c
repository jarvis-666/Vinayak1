//Write a program to take a number from the user and print the sum of all the digits in that number
#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number=");
    scanf("%d",&n);
    int i, sum=0;
    for(i=n;i>0;i=i/10)
        sum=sum+i%10;
    printf("Sum of digits of %d=%d",n,sum);
    printf("HELLO ASSHOLE");
}
