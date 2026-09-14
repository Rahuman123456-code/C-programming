#include<stdio.h>
int main()
{
 int n,elements[200],sum=0,i;
 float Average;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&elements[i]);
  sum = sum + elements[i];
  }
  Average =(float) sum / n;
  printf("Average Of Array Elements:%f",Average);
  return 0;
  }