#include<stdio.h>
int pow(int base,int radix)
{
 int i,res=base;
 i=2;
 while(i<=radix)
      {
        res*=base;
        i++;
      }
 return res;
}
void printP1(int n)
{
 if(n>1)
 {
  printP1(n-1);
  printf("+1/%d",pow(2,n-1));
 }
 else
  printf("1");
}
int main()
{
 printP1(10);
 return 0;
}
