#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a;
    int b;

    printf("enter a value of a :");
    scanf("%d",&a);

    printf("enter a value of b :");
    scanf("%d",&b);

    printf("sum of %d and %d is : %d",a,b,add(a,b));
    return 0;
    
}
