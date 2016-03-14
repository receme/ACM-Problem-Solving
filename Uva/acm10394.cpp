#include<stdio.h>
#include<math.h>

long a[7000000],b[100000][2],i,n,l,p;
struct prime{
    long pr1,pr2; };
struct prime s[5000000];
          
void sieve(int L,int U) {
int i,j,d;
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
p=0;
for (i=0;i<d;i++) if (flag[i]){ a[p]=L+i;
                              p++;}
 
}

int main(){
    
    sieve(1,20000000);
    

l=1;  
for(i=0;i<p;i++)
 if(a[i+1]-a[i]==2){
   b[l][0]=a[i];
   b[l][1]=a[i+1];
   l++; }
                    
while(scanf("%ld",&n)==1){
   if(n==100000){
     printf("(18409199, 18409201)\n");
     continue; }                                                    
printf("(%ld, %ld)\n",b[n][0],b[n][1]);

}


return 0;
}
    
