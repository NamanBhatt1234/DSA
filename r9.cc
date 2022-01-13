#include<stdio.h>
void printP5(int n)
{
 if(n>1)
 {
  printP5(n-1);
  printf("+%d^%d",n,n);
 }
 else
  printf("1^1");
}
int main()
{
 printP5(10);
 return 0;
}
