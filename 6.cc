#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<5;i++)
 {
  for(j=0;j<4-i;j++)
      printf(" ");
  for(j=2*i+1;j>0;j--)
      printf("%d",j);
  printf("\n");
 }
 return 0;
}
