#include<stdio.h>
int even_odd(int num)
{
    return(num%2==0)?printf("even \n") : printf("odd \n");
}


int main()
{
    even_odd(5);

    int a = 10;
    int b = ++a;
    printf("%d",b);
    return 0;
}