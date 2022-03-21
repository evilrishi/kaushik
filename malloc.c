#include <stdio.h>
#include<stdlib.h>
int main()
{
      int (*p)[100];
      register int i,j;
      /*allocate memmory to hold a 4*10 array*/
      p=malloc(40*sizeof(int));
      if(!p){
            printf("memmory request failed.\n");
            exit(1);
      }
      for(j=1;j<11;j++)
       for(i=1;i<5;i++)
        p[i-1][j-1]=pwr(j,i);
        for(j=1;j<11;j++)
          for(i=1;i<5;i++)
          printf("%10d",p[i-1][j-i]);
          printf("\n");
      return 0;
      
}
/*raise an integer to a specified power*/
pwr(int a,int b)
{
      register int t=1;
      for(; b; b--)t=t*a;
      return t;
}
