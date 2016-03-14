#include<stdio.h>
#include<math.h>

long i,j,k,b[100000],L,p=0,a[1000000],co;
long long n;
float m;
void sieve(int L,int U) {
long i,j,d;
d=U-L+1; 
bool *flag=new bool[d];
for (i=0;i<d;i++) flag[i]=true; 
for (i=(L%2!=0);i<d;i+=2) flag[i]=false;

for (i=3;i<=sqrt(U);i+=2) {
if (i>L && !flag[i-L]) continue;

j=L/i*i; if (j<L) j+=i;
if (j==i) j+=i; 
j-=L; 
for (;j<d;j+=i) flag[j]=false;
}
if (L<=1) flag[1-L]=false;
if (L<=2) flag[2-L]=true;

for (i=0;i<d;i++) if (flag[i]){a[p]=L+i;p++; }

}

int main(){
    

sieve(1,10000000);


while(scanf("%lld",&n)==1){
     if(n==0)break;
     if(n<0)
     n=-n;
     
     if(n==1){
      printf("-1\n");
      continue; }        
      
     
                     
    m=sqrt(n);   
                      
             
 i=0; 
 co=0;
 for(;;)
 {
       if(n%a[i]==0){
       n=n/a[i];            
         b[co]=a[i];
         co++; }       
           
     else
      i++;
     if(a[i]>m)break;   
      
      }
       if(n!=1){
       b[co]=n;
       co++;}
   
    
     if(b[0]==b[co-1])
      printf("-1\n");
     else  
      printf("%ld\n",b[co-1]);
    
           
 }                     
  
       return 0;
       }  
        
        
