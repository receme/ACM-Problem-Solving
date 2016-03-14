#include<stdio.h>
#include<math.h>
#include<string.h>


void sieve(unsigned long L,unsigned long U);
unsigned long i,j,k,m,n,l,cas,r,flag,sum,sum1,a[100000],b[10000],p,x;
char s[10000];


int main(){
    sieve(1,100000);
    scanf("%lu",&cas);

for(l=0;l<cas;l++){

  scanf("%lu",&m);
  if(m==1){
   printf("4\n");
   continue; }

  for(;;){
  m++;

  n=m;

  if(n%2==0)
   goto y;

   flag=0;
 for(i=3;i*i<=n;i=i+2)
  if(n%i==0){
   flag=1;
   break; }
  if(flag==0)
  continue;

 y:

    r=sqrt(m);
    i=0; x=0;
   for(;;){

      if(n%a[i]==0){
       n=n/a[i];
      b[x]=a[i];
      x++;
      }
     else
      i++;
     if(a[i]>r)break;

      }
     if(n!=1){
    b[x]=n;
    x++; }


    sum=0;
   for(i=0;i<x;i++){
    sprintf(s,"%lu",b[i]);
    r=strlen(s);
    for(j=0;j<r;j++)
     sum=sum+(s[j]-48);
}
sum1=0;
  sprintf(s,"%lu",m);
  r=strlen(s);
    for(j=0;j<r;j++)
     sum1=sum1+(s[j]-48);

  if(sum==sum1){
   printf("%lu\n",m);
   break; }

}

}

return 0;
}


void sieve(unsigned long L,unsigned long U) {
unsigned long i,j,d;
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
