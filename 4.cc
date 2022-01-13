#include<stdio.h>
int main()
{
   int i,j;
   for(i=0;i<9;i++)
     {
        if(i<=4)
        {
          for(j=0;j<9;j++)
             if(j<i)
               printf(" ");
             else if(j<=2*i)
                printf("*");
          printf("\n");
        }
        else
         {
          for(j=0;j<9;j++)
             if(j<8-i)
                printf(" ");
             else if(j<=2*(8-i))
                printf("*");
          printf("\n");
         }
     }
 return 0;
}
