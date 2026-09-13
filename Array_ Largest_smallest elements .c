#include<stdio.h>
int main()
{
 int n,i,largest,smallest;
 int elements[1000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&elements[i]);
  }
  largest=elements[0];
  smallest=elements[0];
  for(i=1;i<n;i++)
  {
  if(largest<elements[i])
  {
   largest = elements[i];
   }
   if(smallest>elements[i])
   {
    smallest = elements[i];
    }
    }
    printf("Largest Element:%d\n",largest);
    printf("Smallest Element:%d",smallest);
    return 0;
    }
    