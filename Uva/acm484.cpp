#include<stdio.h>

long i,k,n,a[100000000],count[100000000],flag;

int main(){
    k=0;
    for(i=0;i<100000000;i++)
     count[i]=0;
    while(scanf("%ld",&n)!=EOF){
                          
      flag=0;
     for(i=0;i<k;i++)
       if(a[i]==n){
       flag=1;
       break; }
     if(flag==1)
       count[i]++;
     else{
      a[k]=n;
      count[k]++;
      k++; }

}

for(i=0;i<k;i++)
 printf("%ld %ld\n",a[i],count[i]);

return 0;   
}
