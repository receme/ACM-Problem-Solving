#include<stdio.h>
#include<math.h>


long long i,j,k,flag,L,p,a[1000000],m,n,min,max,x,y,r,s;

void sieve(long long L,long long U) {
long long i,j,d;
d=U-L+1; /* from range L to U, we have d=U-L+1 numbers. */
/* use flag[i] to mark whether (L+i) is a prime number or not. */
bool *flag=new bool[d];
for (i=0;i<d;i++) flag[i]=true; /* default: mark all to be true */
for (i=(L%2!=0);i<d;i+=2) flag[i]=false;
/* sieve by prime factors staring from 3 till sqrt(U) */
for (i=3;i*i<=U;i+=2) {
if (i>L && !flag[i-L]) continue;
/* choose the first number to be sieved -- >=L,
divisible by i, and not i itself! */
j=L/i*i; if (j<L) j+=i;
if (j==i) j+=i; /* if j is a prime number, have to start form next
one */
j-=L; /* change j to the index representing j */
for (;j<d;j+=i) flag[j]=false;
}
if (L<=1) flag[1-L]=false;
if (L<=2) flag[2-L]=true;
p=0;
for (i=0;i<d;i++) if (flag[i]){a[p]=L+i;p++; }

}

int main(){
    
  while(scanf("%lld %lld",&m,&n)==2){
    min=1000000;max=0;
    
    sieve(m,n);
   
   
    for(i=0;i<p-1;i++){
   
     
     if((a[i+1]-a[i])<min){
         min=a[i+1]-a[i];
         r=a[i]; s=a[i+1];
         }
     if((a[i+1]-a[i])>max){
      max=a[i+1]-a[i];
      x=a[i];y=a[i+1]; }

   }
   
if(max==0&&min==1000000){
 printf("There are no adjacent primes.\n");
 continue; }
printf("%lld,%lld are closest, %lld,%lld are most distant.\n",r,s,x,y);
                             
}

return 0;

}
     
