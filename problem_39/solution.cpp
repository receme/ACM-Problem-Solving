#include<stdio.h>
#include<math.h>



int a[4000],i,j,k,m,n,p,co,dis,b[4000],c[4000];

void sieve(int L,int U) {
int i,j,d;
d=U-L+1; /* from range L to U, we have d=U-L+1 numbers. */
/* use flag[i] to mark whether (L+i) is a prime number or not. */
bool *flag=new bool[d];
for (i=0;i<d;i++) flag[i]=true; /* default: mark all to be true */
for (i=(L%2!=0);i<d;i+=2) flag[i]=false;
/* sieve by prime factors staring from 3 till sqrt(U) */
for (i=3;i<=sqrt(U);i+=2) {
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
k=0;
for (i=0;i<d;i++) if (flag[i]){ a[k]=(L+i); k++; }
}

int main()
{
    sieve(1,32000);

//  printf("%d\n",k);
p=0;
dis=a[1]-a[0];
co=2;
j=0;
//printf("dis=%d\n",dis); getch();
for(i=1;i<=k-1;i++)
{
  if((a[i+1]-a[i])==dis)
   co++;
  else
  {
    dis=(a[i+1]-a[i]);
//printf("%d**\n",dis); getch();
    if(co>=3)
    {
     b[p]=j; c[p]=i;
     p++;
    }
    j=i;
    co=2;
  }
}





 while(scanf("%d %d",&m,&n)==2)
 {
    if(m==0&&n==0)
     break;

    if(m>n){
     i=m;
     m=n;
     n=i; }

    for(i=0;i<p;i++)
    {
      if(a[b[i]]>=m&&a[c[i]]<=n)
      {
       for(j=b[i];j<=c[i];j++){
        printf("%d",a[j]);
        if(j!=c[i])
         printf(" ");}

       printf("\n");

      }

     if(a[b[i]]>n)
      break;

    }


 }

return 0;
}
