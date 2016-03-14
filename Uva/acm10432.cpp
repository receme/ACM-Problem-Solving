#include<stdio.h>
#include<math.h>

int main()
{
int r,n;
while(scanf("%d %d",&r,&n)!=EOF)
{
double s,f,PI;
PI=2*acos(0.0);
f=sin(2*PI/(double)n);
s=(double)(.5*r*r*f*n);
printf("%.3lf\n",s);
}
return 0;
}
