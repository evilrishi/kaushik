#include<stdio.h>
#include<conio.h>
void main()
{
      int a[100],i,n;
      printf("input total no of terms:\n");
      scanf("%d",&n);
      a[0]=0;
      a[1]=1;
      for(i=2;i<n;i++)
      a[i]=a[i-1]+a[i-2];
      printf("terms of fibbonacci series:\n");
      for(i=0;i<n;i++)
      printf("%d\t\n",a[i]);
      
}
