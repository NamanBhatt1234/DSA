#include<stdio.h>
int Fibi(int n)
{
 int p;
 if(n==1 || n==2)
    return n-1;
 p=Fibi(n-2)+Fibi(n-1);
 return p;
}
void printFibi(int n)
{
 if(n>1)
   {
    printFibi(n-1);
    printf("+%d",Fibi(n));
   }
 else
    printf("0");
}
int main()
{
 printFibi(10);
 return 0;
}
