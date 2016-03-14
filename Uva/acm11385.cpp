#include<stdio.h>
#include<string.h>


long fib[50],i,j,k,n,c,s=1,f=0,l,cas,m,b[1000],big;
char a[1000],res[101];

int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
k=-1;
for(i=2;i<=47;i++)
{
 c=s+f;
 s=f;
 f=c;
fib[k]=c; 
k++;
}

scanf("%ld",&cas);

for(l=0;l<cas;l++){
 
 scanf("%ld",&n);
 
 for(i=0;i<n;i++)
  scanf("%ld",&b[i]);
  
 for(i=0;i<101;i++)
   res[i]=' ';
  getchar();
  gets(a);
  
  m=strlen(a);
  //printf("Len= %ld\n",m);
  k=0;
  big=0;
  for(i=0;i<m;i++){
              
   if((!(a[i]>=65&&a[i]<=90))||a[i]==' ') 
     continue;
     
  
   for(j=0;j<45;j++)
    if(fib[j]==b[k]){
     break;
     } 
    if(j>big)
    big=j; 
   res[j]=a[i];
 
   k++;
   if(k==n) break;
}


for(i=0;i<=big;i++)
 printf("%c",res[i]);
 
printf("\n");
 
}

return 0;
}
