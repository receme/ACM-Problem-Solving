#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
#define eps 1e-7

double i,j,m,n;


int main()
{
  while(scanf("%lf %lf",&i,&j)==2)
  {

     m = ((i+j) - sqrt( i*i -i*j + j*j )) /6.0;
     n = min((i/2.0),(j/2.0));

     printf("%.3lf 0.000 %.3lf\n",m+eps,n+eps);

  }

return 0;
}
