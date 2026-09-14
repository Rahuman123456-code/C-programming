#include<stdio.h>
int main()
{
 int n,number[200],i,Even=0,Odd=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&number[i]);
  if(number[i]%2 == 0)
  {
   Even = Even + 1;
   }
   else
   {
    Odd = Odd + 1;
    }
    }
    printf("Count No of Even Number=%d\n",Even);
    printf("Count No of Odd Number=%d\n",Odd);
    return 0;
    }
    
