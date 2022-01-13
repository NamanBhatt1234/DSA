#include<stdio.h>
void printPrime(int n)
{
 static int no=1;
 int i,j;
 if(n)
 {
  j=no+1;
  i=2;
  while(i<j)
  {
   if(j%i);
   else
      break;
   i++;
  }
  if(i==j)
  {
   no=j;
   printf("%d ",j);
   printPrime(n-1);
  }
  else
  {
   no=j;
   printPrime(n);
  }
 }
}
int main()
{
 printPrime(100);
 return 0;
}
