#include<stdio.h>

using namespace std;
int m;
int fi(int n)
     {
       int result = n;
       for(int i=2;i*i <= n;i++)
       {
         if (n % i == 0) result -= result / i;
         while (n % i == 0) n /= i;
       }
       if (n > 1) result -= result / n;
       return result;
     }


  int main()
  {


  while(scanf("%d",&m)==1)
  {
   if(m==0)
    break;
   if(m==1)
   {
    printf("0\n");
    continue;
   }
   printf("%d\n",fi(m));

  }

  return 0;
  }
