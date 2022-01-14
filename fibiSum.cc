#include<stdio.h>
int Fibi(int n)
{
 int p;
 if(n==1 || n==2)
    return n-1;
 p=Fibi(n-2)+Fibi(n-1);
 return p;
}
int sumFibi(int n)
{
  if(n==1)
      return 0;
  return Fibi(n)+sumFibi(n-1);
}
int main()
{
 printf("%d",sumFibi(10));
 return 0;
}
