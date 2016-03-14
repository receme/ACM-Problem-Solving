#include<stdio.h>
#include<math.h>


long long i,p,a[1000000],m,n,r,b[200],count,max;

void sieve(long long L,long long U) {
long long i,j,d;
d=U-L+1; 
bool *flag=new bool[d];
for (i=0;i<d;i++) flag[i]=true; 
for (i=(L%2!=0);i<d;i+=2) flag[i]=false;

for (i=3;i*i<=U;i+=2) {
if (i>L && !flag[i-L]) continue;

j=L/i*i; if (j<L) j+=i;
if (j==i) j+=i; 
j-=L; 
for (;j<d;j+=i) flag[j]=false;
}
if (L<=1) flag[1-L]=false;
if (L<=2) flag[2-L]=true;
p=0;
for (i=0;i<d;i++) if (flag[i]){a[p]=L+i;p++; }

}

int main(){
   int cas,l; 
  scanf("%d",&cas);
  for(l=0;l<cas;l++){
  scanf("%lld %lld",&m,&n);
       
    for(i=0;i<200;i++)
     b[i]=0;
    
    sieve(m,n);
   
    
    for(i=0;i<p-1;i++){
   
     r=a[i+1]-a[i];
     
     b[r]++;
     
    }
   max=0;
  for(i=0;i<200;i++)
   if(b[i]>max){
    max=b[i];
    r=i;  }
   
   count=0;    
   for(i=0;i<200;i++)                    
    if(b[i]==max)
     count++;     


if(count>1)     
 printf("No jumping champion\n");
else
 printf("The jumping champion is %lld\n",r);

                             
}

return 0;

}
     
