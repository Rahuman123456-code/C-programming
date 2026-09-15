#include<stdio.h>
int main()
{
 int n,number[200],i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&number[i]);
  }
  for(i=n-1;i>=0;i--)
  {
  printf("%d ",number[i]);
  }
  return 0;
  }