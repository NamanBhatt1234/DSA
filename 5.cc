#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<6;i++)
    {
     for(j=0;j<=5+i;j++)
          if(j<5-i)
             printf(" ");
          else if((i+1)%2)
             if(j%2)
                printf("*");
             else
                printf(" ");
          else
              if(j%2)
                 printf(" ");
              else
                 printf("*");
     printf("\n");
    }
 for(i=0;i<5;i++)
    {
     for(j=0;j<=9-i;j++)
          if(j<=i)
             printf(" ");
          else if((i+1)%2)
             if(j%2)
                 printf("*");
             else
                 printf(" ");
          else
              if(j%2)
                  printf(" ");
              else
                  printf("*");
     printf("\n");
    }
 return 0;
}
