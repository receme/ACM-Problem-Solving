#include<stdio.h>
#include<math.h>
int i,k;
double n,m;

int main()
{

while(scanf("%lf",&n)==1)
{
 k=1;

 for(;;){

  if(k==1)
  {
  m=n/9.0;
  m=ceil(m);
  n=m;
  if(n==1)
   break;
  k=2;
  }
  else if(k==2)
  {
   m=n/2.0;
  m=ceil(m);
  n=m;

   if(n==1)
    break;

    k=1;
  }
}

if(k==1)
 printf("Stan wins.\n");
else
 printf("Ollie wins.\n");

}





return 0;

}


