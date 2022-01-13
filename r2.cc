#include<stdio.h>
void print(int n)
{
 if(n)
 {
  printf("%d ",n);
  print(n-1);
 }
}
int main()
{
 print(10);
 return 0;
}

