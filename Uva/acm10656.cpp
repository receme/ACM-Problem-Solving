#include<stdio.h>


int i,j,n,a,b[1001];

int main()
{

  while(scanf("%d",&n)==1)
  {
   if(n==0)
    break;

  j=0;
   for(i=0;i<n;i++)
   {
    scanf("%d",&a);
    if(a!=0)
    {
     b[j]=a;
     j++;
    }
   }


  if(j==0)
   printf("0");
  else
  {
   for(i=0;i<j;i++){
    printf("%d",b[i]);
    if(i!=j-1)
     printf(" "); }
  }

  printf("\n");

  }



return 0;

}
