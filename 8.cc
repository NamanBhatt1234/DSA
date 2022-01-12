#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<5;i++)
 {
  for(j=0;j<9;j++)
        if(j>=4-i&&j<=4+i)
           if(j==4-i||j==4+i)
              printf("%d",i+1);
           else
              printf(" ");
        else
           printf(" ");
  printf("\n");
 }
 for(i=0;i<4;i++)
 {
  for(j=0;j<9;j++)
       if(j>i&&j<=7-i)
          if(j==i+1||j==7-i)
              printf("%d",4-i);
          else
              printf(" ");
       else
          printf(" ");
  printf("\n");
 }
 return 0;
}
