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
void printP2(int n)
{
 if(n>1)
 {
  printP2(n-1);
  printf("+%d",pow(2,n-1));
 }
 else
  printf("1");
}
int main()
{
 printP2(10);
 return 0;
}
