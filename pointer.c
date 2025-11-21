#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int*p=&a;
    int*p2=&b;
    printf("address of a :%p \n",p);
    printf("address of b :%p \n",p2);
    return 0;

}