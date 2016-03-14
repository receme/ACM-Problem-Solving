#include<stdio.h>

#define MAX 10001

int isPrime(int n)
{
if(n%2==0) return 0;    
for(int i=3; i*i <= n ;i=i+2 )
if( n%i == 0 )
return 0;
return 1;
}

int main()
{
int prime[MAX],i,a,b,s,total,flag=0,k,t;
float r;


for(i=0,k=0;i<=10000;i++)
{
s = (i*i) +  i + 41;

if(isPrime(s))
prime[i]=1;
else
prime[i]=0;
}


while(scanf("%d %d",&a,&b)!=EOF)
{

total = 0;

for(i=a;i<=b;i++)
total+=prime[i];

if(a!=b)
r = ( float(total)/(b-a+1) ) * 100;
else if(a==b && prime[a]==1)
r=100.00;
else if(a==b && prime[a]==0)
r=0.00;
printf("%.2lf\n",r+1e-9);

}

return 0;
}
