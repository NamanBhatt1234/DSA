#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<7;i++)
  {
   for(j=0;j<7;j++)
         if(i<3)
            if(j>=i+1&&j<=5-i)
               printf(" ");
            else
               printf("%d",j+1);
         else if(i>3)
            if(j>=7-i&&j<=i-1)
                printf(" ");
            else
                printf("%d",j+1);
         else
            printf("%d",j+1);
   printf("\n");
  }
 return 0;
}
