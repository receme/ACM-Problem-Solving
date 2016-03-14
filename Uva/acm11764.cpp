
#include<stdio.h>

int main(){

 int i,j,k,n,m,a[50],h,l,c;

 scanf("%d",&n);
 c=1;
 for(i=0;i<n;i++){

    scanf("%d",&m);
    h=0; l=0;
    for(j=0;j<m;j++)
      scanf("%d",&a[j]);

    for(k=0;k<m-1;k++){
      if(a[k+1]>a[k]){
       h++;
       continue; }
     if(a[k+1]<a[k]){
       l++;
       continue; }
     if(a[k+1]==a[k])
       continue;
    }

   printf("Case %d: %d %d\n",c,h,l);
   c++;
 }
 return 0;
}
