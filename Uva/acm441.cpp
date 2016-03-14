#include<stdio.h>

int a[100],i,j,k,l,m,n,p,r=0;

int main()
{

 while(scanf("%d",&n)==1)
 {

  if(n==0)
   break;

 if(r!=0)
  printf("\n");

  r=1;
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);


    for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
      for(k=j+1;k<n;k++)
       for(l=k+1;l<n;l++)
         for(m=l+1;m<n;m++)
          for(p=m+1;p<n;p++)
          {
            printf("%d ",a[i]);
            printf("%d ",a[j]);
            printf("%d ",a[k]);
            printf("%d ",a[l]);
            printf("%d ",a[m]);
            printf("%d\n",a[p]);

          }

 }



 return 0;
}
