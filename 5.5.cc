#include<stdio.h>
int main()
{
 int i,j;
 for(j=0;j<13;j++)
 {
  if(j%2);
  else if(j==0 || j==6||j==12)
      for(i=0;i<7;i++)
          printf("*");
  else if(j<6)
      for(i=0;i<7;i++)
           if(i<=j/2 || i>=6-j/2)
                printf("*");
           else
                printf(" ");
  else
      for(i=0;i<7;i++)
           if(i<7-j/2 ||i>=j/2)
                printf("*");
           else
                printf(" ");
  printf("\n");
 }
 return 0;
}
