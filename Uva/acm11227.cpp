#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

long i,j,k,l,m,n,cas,flag,big,co;
double a[500],b[500],a1,b1,d[5];

int main(){
    
    scanf("%ld",&cas);


for(l=0;l<cas;l++){

 scanf("%ld",&m);
 
 n=0;
 for(i=0;i<m;i++){
  scanf("%lf %lf",&a1,&b1);
  
  flag=0;
  for(j=0;j<n;j++)
   if(a1==a[j]&&b1==b[j]){
    flag=1;
    break; }
   
   if(flag==0){
    a[n]=a1;
    b[n]=b1;
    n++; }
    
}

if(n==1){
 printf("Data set #%ld contains a single gnu.\n",l+1);
 continue; }
else if(n==2){
 printf("Data set #%ld contains 2 gnus, out of which a maximum of 2 are aligned.\n",l+1);
 continue; }
 

big=0;

for(i=0;i<n-2;i++)
 for(j=i+1;j<n-1;j++){
 
 co=0;
 for(k=0;k<n;k++){
  
  d[0]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
  d[1]=sqrt((a[i]-a[k])*(a[i]-a[k])+(b[i]-b[k])*(b[i]-b[k]));
  d[2]=sqrt((a[k]-a[j])*(a[k]-a[j])+(b[k]-b[j])*(b[k]-b[j]));
    
  sort(d,d+3);
  
  if(d[0]+d[1]==d[2])
   co++;
 } 
 
 if(co>big)
  big=co;
} 

printf("Data set #%ld contains %ld gnus, out of which a maximum of %ld are aligned.\n",l+1,n,big);

}

return 0;
}
