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
 int i,j;
 for(i=0;i<6;i++)
 {
  for(j=0;j<=i;j++)
          printf("%d ",fact(i)/(fact(i-j)*fact(j)));
  printf("\n");
 }
 return 0;
}
