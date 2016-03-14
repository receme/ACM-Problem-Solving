#include<stdio.h>
#include<math.h>


double nCr(int n,int m)
{
int k;
register int i,j;
double c,d;
c=d=1;
k=(m>(n-m))?m:(n-m);
for(j=1,i=k+1;(i<=n);i++,j++)
{
c*=i;
d*=j;
if( !fmod(c,d) && (d!=1) )
{ c/=d;
d=1;
}
}
return c;
}

main(void)
{
int n,m;
while(scanf("%d%d",&n,&m)==2){
 if(n==0 &&m==0)break;
printf("%.0lf\n",nCr(n,m));}

return 0;
}
