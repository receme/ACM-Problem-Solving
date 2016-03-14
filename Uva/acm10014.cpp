#include<stdio.h>

int n,i,m,j;
float an1,a0,a1,c,csum;

int main()
{
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&n);

scanf("%f",&a0);
scanf("%f",&an1);
csum=0;
for(j=0;j<n;j++)
{
scanf("%f",&c);
csum=csum+((n-j)*c);
}
a1= (((n*a0)+an1)-2*(csum))/(n+1);
printf("%.2f\n",a1);
if(i!=m-1)
 printf("\n");
}
return 0;
}
