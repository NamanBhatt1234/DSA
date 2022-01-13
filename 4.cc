#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<5;i++)
 {
  for(j=0;j<9;j++)
        if(j<=4+i)
          {
           if(j<4-i)
              printf(" ");
           else if((i+1)%2)
               if(j%2)
                printf(" ");
               else
                printf("*");
           else
               if(j%2)
                printf("*");
               else
                printf(" ");
          }
  printf("\n");
 }
 return 0;
}
