#include<stdio.h>
int main()
{
 int n,elements[200],sum=0,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&elements[i]);
  sum = sum + elements[i];
  }
  printf("Sum of Array Elements:%d",sum);
  return 0;
  }