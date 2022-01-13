#include<stdio.h>
int main()
{
 int a=1,b=0,c=0;
 int i=0,j=0;
  while(c<610)
     {
      c=a+b;
      if(j==0||j<i)
       {
        printf("%d ",c);
        j++;
       }
      else
       {
        printf("\n%d ",c);
        j=0;
        i++;
       }
      a=b;
      b=c;
     }
}
