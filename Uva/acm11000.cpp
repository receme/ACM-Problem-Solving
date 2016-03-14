#include<stdio.h>

int main(){

long i,n,c,s,f,sum1,sum;

while(scanf("%ld",&n)==1){
if(n==-1)break;

f=0; s=1;  sum=0,sum1=0;

for(i=2;i<=n+2;i++)
{
 c=s+f;
 s=f;
 f=c;
sum=sum+c;

}

f=0; s=1;
for(i=2;i<=n+1;i++)
{
 c=s+f;
 s=f;
 f=c;
sum1=sum1+c;

}



printf("%ld %ld\n",sum1,sum);
 }
return 0;
}