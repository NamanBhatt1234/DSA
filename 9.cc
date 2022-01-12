#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<5;i++)
 {
  for(j=0;j<9;j++)
       if(j>=i&&j<=8-i)
          if(j==i||j==8-i)
              printf("%c",69-i);
          else
              printf(" ");
       else
          printf(" ");
  printf("\n");
 }
 return 0;
}
