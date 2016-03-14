
#include<stdio.h>
#include<math.h>

long i,j,k,n,b[1000],flag,L,p=0,a[100000];
float m;
void sieve(int L,int U) {
long i,j,d;
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

for (i=0;i<d;i++) if (flag[i]){a[p]=L+i;p++; }

}

int main(){
    

sieve(1,100000);


while(scanf("%ld",&n)==1){
     if(n==0)break;
     flag=0;
     printf("%ld =",n);
     if(n==-1){
       printf(" -1\n");
       continue; }        
     if(n<0){n=-n;flag=1; }                     
    m=sqrt(n);   
                      
    
    if(flag==1)
     printf(" -1 x");
      
    i=0; 
   for(;;){
     
     if(n%a[i]==0){
       n=n/a[i];            
       printf(" %ld",a[i]);  
       if(n!=1) 
        printf(" x");
       }
     else
      i++;
     if(a[i]>m)break;   
      
      }
     if(n!=1)
     printf(" %ld\n",n);  
     else
      printf("\n");
               
 }                     
  
       return 0;
       }  
        
        
