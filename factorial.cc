#include<stdio.h>
int fact(int n)
{
 if(n)
    return n*fact(n-1);
 else
    return 1;
}
int main()
{
 printf("%d",fact(5));
 return 0;
}
